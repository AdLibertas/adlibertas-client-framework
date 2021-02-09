/*
 * Copyright 2021 AdLibertas, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package com.adlibertas.client

import android.content.Context
import androidx.lifecycle.Lifecycle
import androidx.lifecycle.LifecycleObserver
import androidx.lifecycle.OnLifecycleEvent
import co.touchlab.kermit.Kermit
import co.touchlab.stately.ensureNeverFrozen
import com.adlibertas.client.dao.DeviceDao
import com.adlibertas.client.entity.PurchaseToken
import com.android.billingclient.api.BillingClient
import com.android.billingclient.api.BillingClientStateListener
import com.android.billingclient.api.BillingResult
import com.android.billingclient.api.Purchase
import com.android.billingclient.api.PurchasesUpdatedListener
import io.ktor.http.HttpStatusCode
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.cancel
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch
import org.koin.core.inject
import org.koin.core.parameter.parametersOf
import kotlin.math.pow

internal class PurchaseTokenModel :
    AdLibertasKoinComponent(),
    LifecycleObserver,
    PurchasesUpdatedListener,
    BillingClientStateListener {

    private val deviceDao: DeviceDao by inject()
    private val receiptDao: ReceiptDao by inject()
    private val adLibertasConfig: AdLibertasConfig by inject()
    private val context: Context by inject()
    private val purchaseTokenApi: PurchaseTokenApi by inject()
    private val log: Kermit by inject { parametersOf("PurchaseTokenModel") }
    private val scope: CoroutineScope = CoroutineScope(Dispatchers.IO)

    private lateinit var billingClient: BillingClient

    init {
        ensureNeverFrozen()
    }

    @OnLifecycleEvent(Lifecycle.Event.ON_CREATE)
    fun create() {
        log.d { "ON_CREATE" }
        // Create a new BillingClient in onCreate().
        // Since the BillingClient can only be used once, we need to create a new instance
        // after ending the previous connection to the Google Play Store in onDestroy().
        billingClient = BillingClient.newBuilder(context)
            .setListener(this)
            .enablePendingPurchases()
            .build()
        if (!billingClient.isReady) {
            log.d { "BillingClient: Start connection..." }
            billingClient.startConnection(this)
        }
    }

    @OnLifecycleEvent(Lifecycle.Event.ON_DESTROY)
    fun destroy() {
        log.d { "ON_DESTROY" }
        scope.cancel("ON_DESTROY")
        if (billingClient.isReady) {
            log.d { "BillingClient can only be used once -- closing connection" }
            billingClient.endConnection()
        }
    }

    override fun onBillingSetupFinished(result: BillingResult) {
        val responseCode = result.responseCode
        val debugMessage = result.debugMessage
        log.d { "onBillingSetupFinished: $responseCode $debugMessage" }
        if (responseCode == BillingClient.BillingResponseCode.OK) {
            queryAndProcessPurchases()
        }
    }

    override fun onBillingServiceDisconnected() {
        scope.launch {
            var attempts = 0
            while (!billingClient.isReady) {
                delay(
                    minOf(
                        2.0.pow(attempts++).toLong(),
                        300
                    ) * 1000
                ) // sleep for a max of 5 minutes
                log.d { "onBillingServiceDisconnected: reconnecting. attempts = $attempts" }
                create()
            }
        }
    }

    override fun onPurchasesUpdated(result: BillingResult, purchases: MutableList<Purchase>?) {
        val responseCode = result.responseCode
        val message = result.debugMessage
        log.d { "onPurchasesUpdated: $responseCode $message" }

        if (responseCode != BillingClient.BillingResponseCode.OK) {
            return
        }

        processPurchases(purchases)
    }

    private fun queryAndProcessPurchases() = scope.launch {
        processPurchases(billingClient.queryPurchases(BillingClient.SkuType.INAPP).purchasesList)
        processPurchases(billingClient.queryPurchases(BillingClient.SkuType.SUBS).purchasesList)
    }

    private fun processPurchases(purchases: MutableList<Purchase>?) = scope.launch {
        log.d { "Processing ${purchases?.size} purchases" }
        purchases?.forEach { purchase ->
            // for each purchase, check if it is known or new, submit new to API
            val receipt = receiptDao.selectByReceiptHash(purchase.purchaseToken)
            if (receipt == null) {
                val success = postPurchaseToken(
                    purchaseToken = purchase.purchaseToken,
                    packageName = purchase.packageName,
                    sku = purchase.sku
                )
                if (success) {
                    receiptDao.insertReceipt(purchase.purchaseToken)
                }
            }
        }
    }

    private suspend fun postPurchaseToken(
        purchaseToken: String,
        packageName: String,
        sku: String
    ): Boolean {
        if (purchaseToken.isBlank()) {
            log.i { "Purchase token is blank." }
            return true
        }

        try {
            log.d { "Sending receipt data" }
            val response = purchaseTokenApi.postPurchaseToken(
                PurchaseToken(
                    adLibertasConfig.userId,
                    purchaseToken = purchaseToken,
                    appId = packageName,
                    sku = sku,
                    device = deviceDao.fetchDevice()
                )
            )

            return if (response.status != HttpStatusCode.OK) {
                log.e { "Failed sending receipt data ${response.status}" }
                false
            } else {
                log.d { "Sent receipt data" }
                true
            }
        } catch (t: Throwable) {
            log.e(t) { "Failed sending receipt data" }
            return false
        }
    }
}

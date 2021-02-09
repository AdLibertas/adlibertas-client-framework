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

import co.touchlab.kermit.Kermit
import co.touchlab.stately.concurrency.value
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.launch
import org.koin.core.parameter.parametersOf
import platform.StoreKit.SKPaymentQueue
import platform.StoreKit.SKPaymentTransaction
import platform.StoreKit.SKPaymentTransactionObserverProtocol
import platform.StoreKit.SKPaymentTransactionState
import platform.darwin.NSObject

@Suppress("CONFLICTING_OVERLOADS")
internal class SKPaymentTransactionObserver {

    private val storeKitObserverRef = object : NSObject(), SKPaymentTransactionObserverProtocol {
        override fun paymentQueue(queue: SKPaymentQueue, updatedTransactions: List<*>) {
            if (updatedTransactions.any {
                it is SKPaymentTransaction && it.transactionState == SKPaymentTransactionState.SKPaymentTransactionStatePurchased
            }
            ) {
                val koinApp = AdLibertasGlobalRefs.koinApp.value
                if (koinApp != null) {
                    koinApp.koin.get<Kermit>(parameters = { parametersOf("SKPaymentTransactionObserver") })
                        .v { "Payment queue received updated purchased transactions" }
                    MainScope().launch {
                        koinApp.koin.get<ReceiptModel>().postReceiptData()
                    }
                }
            }
        }

        override fun paymentQueueRestoreCompletedTransactionsFinished(queue: SKPaymentQueue) {
            val koinApp = AdLibertasGlobalRefs.koinApp.value
            if (koinApp != null) {
                koinApp.koin.get<Kermit>(parameters = { parametersOf("SKPaymentTransactionObserver") })
                    .v { "Payment queue received restored transactions" }
                MainScope().launch {
                    koinApp.koin.get<ReceiptModel>().postReceiptData()
                }
            }
        }
    }

    fun configure() {
        SKPaymentQueue.defaultQueue().addTransactionObserver(storeKitObserverRef)
    }
}

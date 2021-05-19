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
import co.touchlab.stately.ensureNeverFrozen
import com.adlibertas.client.dao.DeviceDao
import com.adlibertas.client.entity.Receipt
import io.ktor.http.HttpStatusCode
import org.koin.core.component.inject
import org.koin.core.parameter.parametersOf

internal class ReceiptModel : AdLibertasKoinComponent() {

    private val deviceDao: DeviceDao by inject()
    private val receiptDao: ReceiptDao by inject()
    private val config: AdLibertasConfig by inject()
    private val receiptApi: ReceiptApi by inject()
    private val log: Kermit by inject { parametersOf("ReceiptModel") }

    init {
        ensureNeverFrozen()
    }

    @OptIn(ExperimentalUnsignedTypes::class)
    suspend fun postReceiptData() {
        val receiptData = localReceiptData()
        if (receiptData.isNullOrBlank()) {
            log.i { "No local receipt data found." }
            return
        }

        val receiptHash = md5(receiptData)
        val existingReceipt = receiptDao.selectByReceiptHash(receiptHash)

        if (existingReceipt == null) {
            try {
                log.d { "Sending receipt data" }
                val response = receiptApi.postReceiptData(Receipt(config.userId, receiptData, deviceDao.fetchDevice()))

                if (response.status != HttpStatusCode.OK) {
                    log.e { "Failed sending receipt data ${response.status}" }
                } else {
                    log.d { "Sent receipt data" }
                    receiptDao.insertReceipt(receiptHash)
                }
            } catch (t: Throwable) {
                log.e(t) { "Failed sending receipt data" }
            }
        } else {
            log.d { "Known receipt, not sending. $receiptHash" }
        }
    }
}

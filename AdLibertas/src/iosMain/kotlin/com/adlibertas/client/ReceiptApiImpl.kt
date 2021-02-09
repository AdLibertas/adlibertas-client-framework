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
import com.adlibertas.client.entity.Receipt
import com.adlibertas.client.ktor.adLibertasHttpClient
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.post
import io.ktor.client.statement.HttpResponse
import io.ktor.http.takeFrom

internal class ReceiptApiImpl(log: Kermit, config: AdLibertasConfig) : ReceiptApi {

    // If this is a constructor property, then it gets captured inside HttpClient config and freezes this whole class
    @Suppress("CanBePrimaryConstructorProperty")
    internal val log = log

    @Suppress("CanBePrimaryConstructorProperty")
    internal val config = config

    internal val client = adLibertasHttpClient(log, config.authKey)

    override suspend fun postReceiptData(receipt: Receipt): HttpResponse {
        log.d { "Sending receipt $receipt" }
        return client.post {
            receipts(Receipt.path)
            body = receipt
        }
    }

    private fun HttpRequestBuilder.receipts(path: String) {
        url {
            takeFrom(config.apiUrl)
            encodedPath += path
        }
    }
}

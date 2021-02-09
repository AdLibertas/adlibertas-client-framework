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

package com.adlibertas.client.ktor

import co.touchlab.kermit.Kermit
import io.ktor.client.HttpClient
import io.ktor.client.features.auth.Auth
import io.ktor.client.features.auth.providers.basic
import io.ktor.client.features.defaultRequest
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.features.logging.LogLevel
import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.Logging
import io.ktor.http.ContentType
import io.ktor.http.contentType

internal const val ADL_ENDPOINT = "ADL_ENDPOINT"
internal const val ADL_RECEIPTS_API = "https://receipts.adlibertas.com"

/**
 * It would have been better to make this an abstract class, but Koin didn't like that.
 */
internal fun adLibertasHttpClient(log: Kermit, authKey: String) = HttpClient {
    install(JsonFeature) {
        serializer = KotlinxSerializer()
    }
    install(Logging) {
        logger = object : Logger {
            override fun log(message: String) {
                log.v { message }
            }
        }

        level = LogLevel.INFO
    }
    install(Auth) {
        if (authKey.isBlank()) {
            log.e { "Invalid authentication key" }
            return@install
        }

        val usernameAndPassword = authKey.split(":")

        if (usernameAndPassword.size != 2) {
            log.e { "Invalid authentication key" }
            return@install
        }

        val username = usernameAndPassword.first()
        val password = usernameAndPassword[1]

        log.v { "Authentication configured username=$username password=$password" }

        basic {
            sendWithoutRequest = true
            this.username = username
            this.password = password
        }
    }
    defaultRequest {
        contentType(ContentType.Application.Json)
    }
}

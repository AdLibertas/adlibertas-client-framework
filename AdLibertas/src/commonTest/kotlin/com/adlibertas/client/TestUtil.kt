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
import com.russhwolf.settings.Settings
import com.squareup.sqldelight.db.SqlDriver
import kotlinx.coroutines.Deferred
import kotlinx.coroutines.withTimeout
import org.koin.core.context.startKoin
import org.koin.core.context.stopKoin
import org.koin.dsl.module

internal fun appStart(helper: ReceiptDao, settings: Settings, log: Kermit) {
    val coreModule = module {
        single { helper }
        single { settings }
        single { log }
    }

    startKoin { modules(coreModule) }
}

fun appEnd() {
    stopKoin()
}

// Await with a timeout
suspend fun <T> Deferred<T>.await(timeoutMillis: Long) =
    withTimeout(timeoutMillis) { await() }

internal expect fun testDbConnection(): SqlDriver

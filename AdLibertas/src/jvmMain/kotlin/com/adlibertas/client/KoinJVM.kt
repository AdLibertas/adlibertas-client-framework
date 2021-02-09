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

import co.touchlab.kermit.CommonLogger
import co.touchlab.kermit.Kermit
import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.sqlite.driver.JdbcSqliteDriver
import org.koin.core.KoinApplication
import org.koin.core.module.Module
import org.koin.core.parameter.parametersOf
import org.koin.dsl.module

actual fun env(key: String): String? {
    return System.getenv(key)
}

internal actual fun printThrowable(t: Throwable) {
    t.printStackTrace()
}

internal actual fun start(koinApplication: KoinApplication) {
    koinApplication.koin.get<Kermit>(parameters = { parametersOf(null) })
        .i { "AdLibertas on JVM started" }
}

internal actual val platformModule: Module
    get() = module {
        single<SqlDriver> { JdbcSqliteDriver(JdbcSqliteDriver.IN_MEMORY) }

        val baseKermit = Kermit(CommonLogger()).withTag("AdLibertas")
        factory { (tag: String?) -> if (tag != null) baseKermit.withTag(tag) else baseKermit }
    }

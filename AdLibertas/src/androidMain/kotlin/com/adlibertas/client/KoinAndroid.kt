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
import co.touchlab.kermit.LogcatLogger
import com.adlibertas.client.db.AdLibertasDb
import com.russhwolf.settings.AndroidSettings
import com.russhwolf.settings.Settings
import com.squareup.sqldelight.android.AndroidSqliteDriver
import com.squareup.sqldelight.db.SqlDriver
import org.koin.core.KoinApplication
import org.koin.core.module.Module
import org.koin.core.parameter.parametersOf
import org.koin.dsl.module

actual val platformModule: Module = module {

    if (appContext == null) {
        throw Exception("Invalid start. No app context found. AdLibertasContentProvider failed to find one.")
    } else {
        single {
            appContext!!
        }
    }

    single<SqlDriver> {
        AndroidSqliteDriver(
            AdLibertasDb.Schema,
            get(),
            "AdLibertasDb"
        )
    }

    single<Settings> {
        AndroidSettings(get())
    }

    val baseKermit = Kermit(LogcatLogger(), CommonLogger()).withTag("AdLibertas")
    factory { (tag: String?) -> if (tag != null) baseKermit.withTag(tag) else baseKermit }

    single<PurchaseTokenApi> {
        PurchaseTokenApiImpl(getWith("PurchaseTokenApiImpl"), get())
    }

    single {
        PurchaseTokenModel()
    }
}

internal actual fun start(koinApplication: KoinApplication) {
    koinApplication.koin.get<PurchaseTokenModel>().create()
    koinApplication.koin.get<Kermit>(parameters = { parametersOf(null) })
        .i { "AdLibertas on Android started" }
}

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
import co.touchlab.kermit.NSLogLogger
import co.touchlab.stately.concurrency.AtomicReference
import co.touchlab.stately.concurrency.value
import com.adlibertas.client.db.AdLibertasDb
import com.russhwolf.settings.AppleSettings
import com.russhwolf.settings.Settings
import com.squareup.sqldelight.db.SqlDriver
import com.squareup.sqldelight.drivers.native.NativeSqliteDriver
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.MainScope
import kotlinx.coroutines.launch
import org.koin.core.KoinApplication
import org.koin.core.parameter.parametersOf
import org.koin.dsl.module
import platform.Foundation.NSUserDefaults

internal object AdLibertasGlobalRefs {
    internal val koinApp = AtomicReference<KoinApplication?>(null)
    internal val paymentObserver = AtomicReference<SKPaymentTransactionObserver?>(null)
}

internal actual val platformModule = module {
    single<SqlDriver> { NativeSqliteDriver(AdLibertasDb.Schema, "AdLibertasDb") }

    val baseKermit = Kermit(NSLogLogger()).withTag("AdLibertas")
    factory { (tag: String?) -> if (tag != null) baseKermit.withTag(tag) else baseKermit }

    single<Settings> { AppleSettings(NSUserDefaults(suiteName = "AdLibertas")) }
    single<ReceiptApi> {
        ReceiptApiImpl(
            log = getWith("ReceiptApiImpl"),
            config = get()
        )
    }
    single {
        ReceiptModel()
    }
}

internal actual fun start(koinApplication: KoinApplication) {
    AdLibertasGlobalRefs.koinApp.compareAndSet(null, koinApplication)

    // listen for storekit transactions
    AdLibertasGlobalRefs.paymentObserver.value = SKPaymentTransactionObserver()
    AdLibertasGlobalRefs.paymentObserver.value?.configure()

    // post receipt data on start-up
    MainScope().launch(Dispatchers.Main) {
        koinApplication.koin.get<ReceiptModel>().postReceiptData()
    }

    koinApplication.koin.get<Kermit>(parameters = { parametersOf(null) })
        .i { "AdLibertas on iOS started" }
}

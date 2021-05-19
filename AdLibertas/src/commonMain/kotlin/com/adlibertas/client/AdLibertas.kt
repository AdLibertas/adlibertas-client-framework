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
import com.adlibertas.client.dao.deviceDaoImpl
import kotlinx.coroutines.Dispatchers
import org.koin.core.Koin
import org.koin.core.KoinApplication
import org.koin.core.component.KoinComponent
import org.koin.core.module.Module
import org.koin.core.parameter.parametersOf
import org.koin.core.scope.Scope
import org.koin.dsl.koinApplication
import org.koin.dsl.module
import kotlin.native.concurrent.ThreadLocal

internal abstract class AdLibertasKoinComponent : KoinComponent {
    override fun getKoin(): Koin = AdLibertas.koinApp?.koin!!
}

class AdLibertasConfig(
    val authKey: String,
    val userId: String?,
    val apiUrl: String = "https://mobilis.adlibertas.com/v1"
) {
    override fun toString(): String {
        return "[AdLibertasConfig" +
            " authKey=$authKey" +
            " userId=$userId" +
            " apiUrl=$apiUrl]"
    }
}

@ThreadLocal
object AdLibertas {
    internal var koinApp: KoinApplication? = null

    fun configure(adLibertasConfig: AdLibertasConfig) {
        koinApp?.close()

        koinApp = koinApplication {
            modules(
                module {
                    single { adLibertasConfig }
                },
                platformModule,
                coreModule
            )
        }

        if (koinApp != null) {
            koinApp!!.koin.get<Kermit>(parameters = { parametersOf(null) })
                .d { "Starting AdLibertas with config $adLibertasConfig" }
            start(koinApp!!)
        } else {
            throw Exception("Failed to configure AdLibertas")
        }
    }

    fun configure(authKey: String, userId: String?) {
        configure(AdLibertasConfig(authKey, userId))
    }
}

internal inline fun <reified T> Scope.getWith(vararg params: Any?): T {
    return get(parameters = { parametersOf(*params) })
}

/**
 * i.e. Database helpers or other core things
 */
private val coreModule = module {
    single {
        ReceiptDao(
            get(),
            getWith("ReceiptDao"),
            Dispatchers.Default
        )
    }
    single {
        deviceDaoImpl()
    }
}

internal expect val platformModule: Module

internal expect fun start(koinApplication: KoinApplication)

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

import android.app.Application
import android.content.Context
import androidx.test.core.app.ApplicationProvider.getApplicationContext
import androidx.test.ext.junit.runners.AndroidJUnit4
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.runBlocking
import org.junit.Rule
import org.junit.runner.RunWith
import org.koin.dsl.module
import org.koin.test.AutoCloseKoinTest
import org.koin.test.KoinTestRule
import kotlin.test.BeforeTest

@RunWith(AndroidJUnit4::class)
actual abstract class BaseTest : AutoCloseKoinTest() {

    @get:Rule
    var coroutineTestRule = CoroutineTestRule()

    @BeforeTest
    fun setAppContext() {
        appContext = getApplicationContext()
    }

    @get:Rule
    val koinTestRule = KoinTestRule.create {
        modules(
            module {
                single<Context> { getApplicationContext<Application>() }
                single { get<Context>().getSharedPreferences("TEST", Context.MODE_PRIVATE) }
            }
        )
    }

    actual fun <T> runTest(block: suspend CoroutineScope.() -> T) {
        runBlocking { block() }
    }
}

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
import kotlinx.coroutines.Dispatchers
import kotlin.test.BeforeTest
import kotlin.test.Test
import kotlin.test.assertNotNull
import kotlin.test.assertNull

class SqlDelightTest : BaseTest() {

    private lateinit var dbHelper: ReceiptDao

    @BeforeTest
    fun setup() = runTest {
        dbHelper = ReceiptDao(
            testDbConnection(),
            Kermit(),
            Dispatchers.Default
        )
        dbHelper.deleteAll()
        dbHelper.insertReceipt("hello world")
    }

    @Test
    fun `Select Receipt by Hash Success`() = runTest {
        val hash = dbHelper.selectByReceiptHash("hello world")
        assertNotNull(
            hash,
            "Could not retrieve Receipt by hash"
        )
    }

    @Test
    fun `Delete All Success`() = runTest {
        assertNotNull(dbHelper.selectByReceiptHash("hello world"))
        dbHelper.deleteAll()

        assertNull(
            dbHelper.selectByReceiptHash("hello world"),
            "Delete All did not work"
        )
    }
}

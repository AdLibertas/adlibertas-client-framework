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
import com.adlibertas.client.db.AdLibertasDb
import com.adlibertas.client.sqldelight.transactionWithContext
import com.squareup.sqldelight.db.SqlDriver
import kotlinx.coroutines.CoroutineDispatcher

internal class ReceiptDao(
    sqlDriver: SqlDriver,
    private val log: Kermit,
    private val backgroundDispatcher: CoroutineDispatcher
) {
    private val dbRef: AdLibertasDb = AdLibertasDb(sqlDriver)

    suspend fun insertReceipt(receiptHash: String) {
        log.d { "Inserting receipt hash into database $receiptHash" }
        dbRef.transactionWithContext(backgroundDispatcher) {
            dbRef.receiptQueries.insertReceipt(receiptHash)
        }
    }

    fun selectByReceiptHash(receiptHash: String): String? =
        dbRef.receiptQueries
            .selectByReceiptHash(receiptHash)
            .executeAsOneOrNull()

    fun deleteAll() {
        dbRef.receiptQueries.deleteAll()
    }
}

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

import kotlin.test.Test
import kotlin.test.assertEquals

class PlatformTest : BaseTest() {
    @ExperimentalUnsignedTypes
    @Test
    fun testMD5() {
        assertEquals(md5("hello world"), "5eb63bbbe01eeed093cb22bb8f5acdc3")
        assertEquals(md5("this is an md5 hash"), "5a73e7b6df89f85bb34129fcdfd7da12")
    }
}

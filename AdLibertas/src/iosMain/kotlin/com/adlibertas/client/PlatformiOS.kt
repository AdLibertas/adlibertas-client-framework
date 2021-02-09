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

import kotlinx.cinterop.addressOf
import kotlinx.cinterop.cstr
import kotlinx.cinterop.usePinned
import platform.CoreCrypto.CC_MD5
import platform.CoreCrypto.CC_MD5_DIGEST_LENGTH
import platform.Foundation.NSBundle
import platform.Foundation.NSData
import platform.Foundation.NSProcessInfo
import platform.Foundation.base64Encoding
import platform.Foundation.dataWithContentsOfURL
import platform.posix.strlen

internal actual fun printThrowable(t: Throwable) {
    t.printStackTrace()
}

internal actual fun env(key: String): String? {
    return NSProcessInfo.processInfo.environment[key]?.toString()
}

internal fun localReceiptData(): String? {
    val receiptUrl = NSBundle.mainBundle.appStoreReceiptURL
    return receiptUrl?.let { NSData.dataWithContentsOfURL(it) }?.base64Encoding()
}

@ExperimentalUnsignedTypes
internal fun md5(src: String): String {
    return UByteArray(CC_MD5_DIGEST_LENGTH).usePinned { pinned ->
        CC_MD5(src.cstr, strlen(src).toUInt(), pinned.addressOf(0))
        pinned.get().joinToString("") {
            it.toString(16).padStart(2, '0')
        }
    }
}

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

package com.adlibertas.client.dao

import android.annotation.SuppressLint
import android.provider.Settings
import com.adlibertas.client.appContext
import com.adlibertas.client.entity.Device
import com.google.android.gms.ads.identifier.AdvertisingIdClient

@SuppressLint("HardwareIds")
actual fun deviceDaoImpl() = object : DeviceDao {
    override fun fetchDevice(): Device {
        return Device(
            AdvertisingIdClient.getAdvertisingIdInfo(appContext!!).id,
            Settings.Secure.getString(appContext!!.contentResolver, Settings.Secure.ANDROID_ID)
        )
    }
}

object Versions {
    val min_sdk = 16
    val target_sdk = 30
    val compile_sdk = 30

    val kotlin = "1.4.30"
    val android_gradle_plugin = "4.0.1"

    val buildToolsVersion = "30.0.2"
    val cocoapodsext = "0.12"
    val coroutines = "1.4.2-native-mt"
    val kermit = "0.1.8"
    val karmok = "0.1.8"
    val koin = "3.0.1"
    val ktlint_gradle_plugin = "9.4.1"
    val ktor = "1.5.0"
    val junit = "4.13.1"
    val material = "1.2.1"
    val desugarJdkLibs = "1.1.1"
    val multiplatformSettings = "0.7"
    val robolectric = "4.4"
    val sqlDelight = "1.4.4"
    val stately = "1.1.1"
    val serialization = "1.0.1"
    val billing = "3.0.2"
    val dokka = "1.4.20"
    val artifactory = "4.20.0"

    object AndroidX {
        val appcompat = "1.2.0"
        val constraintlayout = "2.0.4"
        val core = "1.3.2"
        val lifecycle = "2.2.0"
        val recyclerview = "1.1.0"
        val test = "1.3.0"
        val test_ext = "1.1.2"
    }
}

object Deps {
    val android_gradle_plugin = "com.android.tools.build:gradle:${Versions.android_gradle_plugin}"
    val cocoapodsext = "co.touchlab:kotlinnativecocoapods:${Versions.cocoapodsext}"
    val junit = "junit:junit:${Versions.junit}"
    val material = "com.google.android.material:material:${Versions.material}"
    val desugarJdkLibs = "com.android.tools:desugar_jdk_libs:${Versions.desugarJdkLibs}"
    val karmok = "co.touchlab:karmok-library:${Versions.karmok}"
    val kermit = "co.touchlab:kermit:${Versions.kermit}"
    val koinCore = "io.insert-koin:koin-core:${Versions.koin}"
    val koinTest = "io.insert-koin:koin-test:${Versions.koin}"
    val multiplatformSettings = "com.russhwolf:multiplatform-settings:${Versions.multiplatformSettings}"
    val multiplatformSettingsTest = "com.russhwolf:multiplatform-settings-test:${Versions.multiplatformSettings}"
    val robolectric = "org.robolectric:robolectric:${Versions.robolectric}"
    val stately = "co.touchlab:stately-common:${Versions.stately}"

    object GooglePlay {
        val billing = "com.android.billingclient:billing-ktx:${Versions.billing}"
        val googleAdsId = "com.google.android.gms:play-services-ads-identifier:17.0.0"
    }

    object AndroidX {
        val appcompat = "androidx.appcompat:appcompat:${Versions.AndroidX.appcompat}"
        val core_ktx = "androidx.core:core-ktx:${Versions.AndroidX.core}"
        val constraintlayout = "androidx.constraintlayout:constraintlayout:${Versions.AndroidX.constraintlayout}"
        val recyclerView = "androidx.recyclerview:recyclerview:${Versions.AndroidX.recyclerview}"
        val lifecycle_common = "androidx.lifecycle:lifecycle-common:${Versions.AndroidX.lifecycle}"
        val lifecycle_livedata_extensions = "androidx.lifecycle:lifecycle-livedata-ktx:${Versions.AndroidX.lifecycle}"
        val lifecycle_viewmodel = "androidx.lifecycle:lifecycle-viewmodel:${Versions.AndroidX.lifecycle}"
        val lifecycle_viewmodel_extensions = "androidx.lifecycle:lifecycle-viewmodel-ktx:${Versions.AndroidX.lifecycle}"
        val lifecycle_livedata = "androidx.lifecycle:lifecycle-livedata:${Versions.AndroidX.lifecycle}"
        val lifecycle_extension = "androidx.lifecycle:lifecycle-extensions:${Versions.AndroidX.lifecycle}"
        val koin_viewmodel = "io.insert-koin:koin-androidx-viewmodel:${Versions.koin}"
    }

    object AndroidXTest {
        val core = "androidx.test:core:${Versions.AndroidX.test}"
        val junit = "androidx.test.ext:junit:${Versions.AndroidX.test_ext}"
        val runner = "androidx.test:runner:${Versions.AndroidX.test}"
        val rules = "androidx.test:rules:${Versions.AndroidX.test}"
    }

    object KotlinTest {
        val common = "org.jetbrains.kotlin:kotlin-test-common:${Versions.kotlin}"
        val annotations = "org.jetbrains.kotlin:kotlin-test-annotations-common:${Versions.kotlin}"
        val jvm = "org.jetbrains.kotlin:kotlin-test:${Versions.kotlin}"
        val junit = "org.jetbrains.kotlin:kotlin-test-junit:${Versions.kotlin}"
    }

    object Coroutines {
        val common = "org.jetbrains.kotlinx:kotlinx-coroutines-core:${Versions.coroutines}"
        val android = "org.jetbrains.kotlinx:kotlinx-coroutines-android:${Versions.coroutines}"
        val test = "org.jetbrains.kotlinx:kotlinx-coroutines-test:${Versions.coroutines}"
    }

    object SqlDelight {
        val gradle = "com.squareup.sqldelight:gradle-plugin:${Versions.sqlDelight}"
        val runtime = "com.squareup.sqldelight:runtime:${Versions.sqlDelight}"
        val coroutinesExtensions = "com.squareup.sqldelight:coroutines-extensions:${Versions.sqlDelight}"
        val runtimeJdk = "com.squareup.sqldelight:runtime-jvm:${Versions.sqlDelight}"
        val driverIos = "com.squareup.sqldelight:native-driver:${Versions.sqlDelight}"
        val driverAndroid = "com.squareup.sqldelight:android-driver:${Versions.sqlDelight}"
        val driverJvm = "com.squareup.sqldelight:sqlite-driver:${Versions.sqlDelight}"
    }

    object Ktor {
        val commonCore = "io.ktor:ktor-client-core:${Versions.ktor}"
        val commonAuth = "io.ktor:ktor-client-auth:${Versions.ktor}"
        val commonJson = "io.ktor:ktor-client-json:${Versions.ktor}"
        val commonLogging = "io.ktor:ktor-client-logging:${Versions.ktor}"
        val androidCore = "io.ktor:ktor-client-okhttp:${Versions.ktor}"
        val ios = "io.ktor:ktor-client-ios:${Versions.ktor}"
        val commonSerialization = "io.ktor:ktor-client-serialization:${Versions.ktor}"
    }
}

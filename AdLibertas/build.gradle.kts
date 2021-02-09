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

plugins {
    kotlin("multiplatform")
    kotlin("native.cocoapods")
    id("kotlinx-serialization")
    id("com.android.library")
    id("com.squareup.sqldelight")
    `maven-publish`
    signing
    id("org.jetbrains.dokka")
}

android {
    compileSdkVersion(Versions.compile_sdk)
    defaultConfig {
        minSdkVersion(Versions.min_sdk)
        targetSdkVersion(Versions.target_sdk)
        versionName = version.toString()
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }

    lintOptions {
        isWarningsAsErrors = true
        isAbortOnError = true
    }
}

group = "com.adlibertas.client"
version = "0.0.1"

publishing {
    publications.all {
        val mavenPublication: MavenPublication = this as MavenPublication
        mavenPublication.pom {
            description.set("AdLibertas mobile SDK for collecting IAP receipts and purchase tokens for accurate user reporting.")
            url.set("https://github.com/AdLibertas/adlibertas-client-framework")
            licenses {
                license {
                    name.set("The Apache License, Version 2.0")
                    url.set("http://www.apache.org/licenses/LICENSE-2.0.txt")
                }
            }
            developers {
                developer {
                    id.set("AdLibertas")
                    name.set("AdLibertas Team")
                    organization.set("AdLibertas")
                    organizationUrl.set("https://www.adlibertas.com")
                }
            }
            scm {
                url.set("https://github.com/AdLibertas/adlibertas-client-framework")
            }
        }
    }

    repositories {
        maven {
            val contextUrl = "https://adlibertas.jfrog.io/artifactory"
            val releasesRepoUrl = "$contextUrl/gradle-release-local"
            val snapshotsRepoUrl = "$contextUrl/gradle-dev-local"
            url = uri(if (version.toString().endsWith("SNAPSHOT")) snapshotsRepoUrl else releasesRepoUrl)
            credentials {
                username = properties["artifactory_username"] as String?
                password = properties["artifactory_password"] as String?
            }
        }
    }
}

signing {
    sign(publishing.publications)
}

kotlin {
    jvm()
    android() {
        publishLibraryVariants("release", "debug")
    }
    // Revert to just ios() when gradle plugin can properly resolve it
    val onPhone = System.getenv("SDK_NAME")?.startsWith("iphoneos") ?: false
    if (onPhone) {
        iosArm64("ios")
    } else {
        iosX64("ios")
    }

    sourceSets {
        all {
            languageSettings.apply {
                useExperimentalAnnotation("kotlin.RequiresOptIn")
                useExperimentalAnnotation("kotlinx.coroutines.ExperimentalCoroutinesApi")
            }
        }
    }

    sourceSets["commonMain"].dependencies {
        implementation(Deps.SqlDelight.runtime)
        implementation(Deps.SqlDelight.coroutinesExtensions)
        implementation(Deps.Ktor.commonCore)
        implementation(Deps.Ktor.commonAuth)
        implementation(Deps.Ktor.commonJson)
        implementation(Deps.Ktor.commonLogging)
        implementation(Deps.Coroutines.common) {
            version {
                strictly(Versions.coroutines)
            }
        }
        implementation(Deps.stately)
        implementation(Deps.multiplatformSettings)
        implementation(Deps.koinCore)
        implementation(Deps.Ktor.commonSerialization)
        implementation(Deps.kermit)
    }

    sourceSets["commonTest"].dependencies {
        implementation(Deps.multiplatformSettingsTest)
        implementation(Deps.KotlinTest.common)
        implementation(Deps.KotlinTest.annotations)
        implementation(Deps.koinTest)
        // Karmok is an experimental library which helps with mocking interfaces
        implementation(Deps.karmok)
    }

    sourceSets["androidMain"].dependencies {
        implementation(kotlin("stdlib", Versions.kotlin))
        implementation(Deps.SqlDelight.driverAndroid)
        implementation(Deps.Coroutines.android)
        implementation(Deps.Ktor.androidCore)
        implementation(Deps.GooglePlay.billing)
        implementation(Deps.GooglePlay.googleAdsId)
        implementation(Deps.AndroidX.lifecycle_common)
        implementation(Deps.AndroidX.lifecycle_livedata_extensions)
    }

    sourceSets["androidTest"].dependencies {
        implementation(Deps.KotlinTest.jvm)
        implementation(Deps.KotlinTest.junit)
        implementation(Deps.AndroidXTest.core)
        implementation(Deps.AndroidXTest.junit)
        implementation(Deps.AndroidXTest.runner)
        implementation(Deps.AndroidXTest.rules)
        implementation(Deps.Coroutines.test)
        implementation(Deps.robolectric)
    }

    sourceSets["iosMain"].dependencies {
        implementation(Deps.SqlDelight.driverIos)
        implementation(Deps.Ktor.ios)
    }

    sourceSets["jvmMain"].dependencies {
        implementation(Deps.SqlDelight.driverJvm)
    }

    sourceSets["jvmTest"].dependencies {
        implementation(Deps.KotlinTest.jvm)
        implementation(Deps.KotlinTest.junit)
        implementation(Deps.Coroutines.test)
    }

    cocoapods {
        authors = "AdLibertas, Inc."
        summary = "AdLibertas is a simple to use, drop-in SDK for accurate User LTV reporting"
        homepage = "https://www.adlibertas.com/"
        frameworkName = "AdLibertas"
        license = "Apache-2.0"
    }
}

sqldelight {
    database("AdLibertasDb") {
        packageName = "com.adlibertas.client.db"
    }
}

tasks.register<Copy>("copyCocoapods") {
    outputs.upToDateWhen { false }
    doLast {
        if (!file("$buildDir/bin/ios/releaseFramework").exists()) {
            throw GradleException("Failed to copy ios release framework from path: $buildDir/bin/ios/releaseFramework")
        }

        val podspecFile = File(project.rootDir.path, "AdLibertas.podspec")

        if (podspecFile.exists()) {
            podspecFile.delete()
            podspecFile.createNewFile()
        }

        val spec =
            """Pod::Spec.new do |spec|
  spec.name                = 'AdLibertas'
  spec.version             = '$version'
  spec.license             = { :type => 'Apache-2.0', :file => 'LICENSE.txt' }
  spec.homepage            = 'https://www.adlibertas.com/'
  spec.authors             = 'AdLibertas, Inc.'
  spec.summary             = 'AdLibertas is a simple to use, drop-in SDK for accurate User LTV reporting'
  spec.source              = { :git => 'https://github.com/AdLibertas/adlibertas-client-framework', :tag => 'v$version' }
  spec.platform            = :ios, "9.0"
  spec.vendored_frameworks = 'bin/AdLibertas.framework'
  spec.module_name         = "#{spec.name}_umbrella"
end
"""

        podspecFile.writeText(spec)
    }
    from("$buildDir/bin/ios/releaseFramework")
    into("${project.rootDir.path}/bin")
}

// set cocoapod spec to published
tasks.named("linkReleaseFrameworkIos") {
    finalizedBy("copyCocoapods")
}

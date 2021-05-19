// Top-level build file where you can add configuration options common to all sub-projects/modules.

buildscript {
    repositories {
        google()
        mavenCentral()
        jcenter()
    }
    dependencies {
        classpath(Deps.android_gradle_plugin)
        classpath(Deps.SqlDelight.gradle)
        classpath(Deps.cocoapodsext)
        classpath("org.jetbrains.kotlin:kotlin-serialization:${Versions.kotlin}")
        classpath(kotlin("gradle-plugin", Versions.kotlin))
        // NOTE: Do not place your application dependencies here; they belong
        // in the individual module build gradle files
    }
}

plugins {
    id("org.jlleitschuh.gradle.ktlint") version Versions.ktlint_gradle_plugin
    id("org.jetbrains.dokka") version Versions.dokka apply false
}

allprojects {
    repositories {
        google()
        mavenCentral()
        jcenter()
        maven(url = "https://kotlin.bintray.com/kotlinx")
        maven(url = "https://oss.sonatype.org/content/repositories/snapshots/")
    }
}

subprojects {
    apply(plugin = "org.jlleitschuh.gradle.ktlint")

    ktlint {
        version.set("0.37.2")
        enableExperimentalRules.set(true)
        verbose.set(true)
        filter {
            exclude { it.file.path.contains("build/") }
        }
    }

    afterEvaluate {
        tasks.named("check").configure {
            dependsOn(tasks.getByName("ktlintCheck"))
        }
    }

    // config JVM target to 1.8 for kotlin compilation tasks
    tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile>().configureEach {
        kotlinOptions.jvmTarget = "1.8"
    }
}

tasks.register<Delete>("clean") {
    delete(rootProject.buildDir)
}

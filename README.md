# AdLibertas

## _One Line Of Code For Accurate User LTV_ 

[AdLibertas](https://www.adlibertas.com/) is a simple to use, drop-in SDK for accurate User LTV 
reporting. The AdLibertas framework takes care of tracking in-app purchases and subscription renewals by 
sending user receipts of in-app purchases to AdLibertas servers. Those receipts are then used for a complete User LTV in the 
[AdLibertas dashboard](https://dashboard.adlibertas.com/audiences).

### Getting Started

The SDK requires an authentication key. Please contact us for your key before following these steps.

#### Installing AdLibertas SDK

##### Android

AdLibertas is available via our JFrog maven repository.

```kotlin
// build.gradle.kts
repositories {
    maven(url = "https://adlibertas.jfrog.io/artifactory/gradle-release/")
}
```

##### iOS

AdLibertas is available as a CocoaPod.

```ruby
# Podfile
pod 'AdLibertas', git: 'https://github.com/AdLibertas/adlibertas-client-framework', tag: 'v0.0.1'
```

Then, issue a `pod install`

#### Using the SDK

Then, all that is required is to initialize and utilize the SDK is to call `AdLibertas.configure`, passing your auth key
and, if available, a unique user ID that will be used for attributing revenue. The following examples are tracking purchases
for an anonymous user.

**On iOS**,

```swift
// AppDelegate.swift
import AdLibertas

AdLibertas().configure(authKey: "your api authentication key", userId: nil)
```

**On Android**,

```kotlin
// MainActivity.kt
import com.adlibertas.client.AdLibertas

AdLibertas.configure(authKey = "your api auth key", null)
```

### More About User IDs

It is important to choose a user ID that respects the users privacy, but also allows for granular revenue attribution and
segmentation. The user ID should be the same whether you are initializing an Ad SDK or Analytics. [Google](https://developer.android.com/training/articles/user-data-ids) has good documentation on the subject.
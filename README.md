# Self Embedded iOS

## Installation & Usage
If using ***Cocoapods*** . Just add this line to your `Podfile`

```
pod 'self-embedded-ios', :git => 'https://github.com/joinself/self-embedded-ios.git'
```

If using ***Swift Package Manager***, add the following to your Package.swift or add via XCode:
```
dependencies: [
    .package(url: "https://github.com/joinself/self-embedded-ios.git", .upToNextMajor(from: "0.0.39"))
],
targets: [
    .target(name: "YourTarget", dependencies: ["self_ios_sdk""])
]
```

If you are using Xcode 15 and above. Please set `ENABLE_USER_SCRIPT_SANDBOXING = NO`
Project build settings -> Build Options -> User Script Sandboxing -> No 

In your code, `import self_ios_sdk` to use the SDK
When the app launch, init the SDK
```
SelfSDK.initialize()
```

more functions here https://github.com/joinself/self-mobile-embedded-samples/blob/main/ios/README.md

## Known Issues
- The SDK depend on `OpenSSL` following this configuration
```
.package(url: "https://github.com/krzyzanowskim/OpenSSL.git", .upToNextMinor(from: "1.1.1900"))
```
So if you use another of `OpenSSL` in your app. It might cause an unexpected issue.

## Support

Looking for help? Reach out to us at [support@joinself.com](mailto:support@joinself.com)

## Contributing

See [Contributing](CONTRIBUTING.md).

## License

See [License](LICENSE).

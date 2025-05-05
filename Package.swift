// swift-tools-version: 5.10
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "self_ios_sdk",
    platforms: [
                .iOS(.v16)
            ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "self_ios_sdk",
            targets: ["self_ios_sdk", "SelfUI"]),
    ],
    dependencies: [
        .package(url: "https://github.com/krzyzanowskim/OpenSSL.git", .upToNextMinor(from: "1.1.1900"))
    ],
    targets: [
        .binaryTarget(
                    name: "self_ios_sdk",
                    path: "Frameworks/self_ios_sdk.xcframework"
                ),
        .binaryTarget(
                    name: "SelfUI",
                    path: "Frameworks/SelfUI.xcframework"
                ),
        .testTarget(
            name: "self_ios_sdkTests",
            dependencies: ["self_ios_sdk"]),
    ]
)

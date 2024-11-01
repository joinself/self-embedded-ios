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
            targets: ["self_ios_sdk"]),
    ],
    targets: [
        .binaryTarget(
                    name: "self_ios_sdk",
                    path: "Frameworks/self_ios_sdk.xcframework"
                ),
        .testTarget(
            name: "self_ios_sdkTests",
            dependencies: ["self_ios_sdk"]),
    ]
)

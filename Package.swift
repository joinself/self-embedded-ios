// swift-tools-version: 5.9
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "self_ios_sdk",
    platforms: [
            .iOS(.v15)
        ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "self_ios_sdk",
            targets: ["self_ios_sdk"]),
        .library(name: "self_sdk", targets: ["self_sdk"])
    ],
    dependencies: [
        .package(url: "https://github.com/krzyzanowskim/OpenSSL.git", .upToNextMinor(from: "1.1.1900"))
    ],
    targets: [
        .target(name: "self_sdk",
                dependencies: [
                    "self_ios_sdk",
                    "OpenSSL"
                ]
               ),
        .binaryTarget(name: "self_ios_sdk", path: "Frameworks/self_ios_sdk.xcframework"),
        .testTarget(
            name: "TestSdk",
            dependencies: ["self_ios_sdk", "self_sdk"]),
    ]
)

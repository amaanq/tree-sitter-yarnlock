// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterYarnlock",
    products: [
        .library(name: "TreeSitterYarnlock", targets: ["TreeSitterYarnlock"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterYarnlock",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterYarnlockTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterYarnlock",
            ],
            path: "bindings/swift/TreeSitterYarnlockTests"
        )
    ],
    cLanguageStandard: .c11
)

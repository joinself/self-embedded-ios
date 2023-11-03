//
//  ExampleApp.swift
//  Example
//
//  Created by Long Pham on 03/11/2023.
//

import SwiftUI
import self_ios_sdk

@main
struct ExampleApp: App {
    
    init() {
        print("App launched.")
        SelfSDK.initialize()
    }
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}

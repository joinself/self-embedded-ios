//
//  ExampleUsingSPMApp.swift
//  ExampleUsingSPM
//
//  Created by Long Pham on 1/11/24.
//

import SwiftUI
import self_ios_sdk

@main
struct ExampleUsingSPMApp: App {
    
    init () {
        SelfSDK.initialize()
    }
    
    var body: some Scene {
        WindowGroup {
            ContentView()
        }
    }
}

//
//  TestSelfSdk.swift
//  
//
//  Created by Long Pham on 24/6/24.
//

import XCTest
import self_ios_sdk
import self_sdk

final class TestSelfSdk: XCTestCase {

    override func setUpWithError() throws {
        // Put setup code here. This method is called before the invocation of each test method in the class.
    }

    override func tearDownWithError() throws {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
    }

    func testLoadSdk() throws {
        let sdk = SelfSDK.initialize()
    }
    
    func testLoadSelfSdk() throws {
        
    }

    func testPerformanceExample() throws {
        // This is an example of a performance test case.
        self.measure {
            // Put the code you want to measure the time of here.
        }
    }

}
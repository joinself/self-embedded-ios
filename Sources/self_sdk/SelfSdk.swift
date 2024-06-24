//
//  File.swift
//  
//
//  Created by Long Pham on 24/6/24.
//

import Foundation
import self_ios_sdk
import UIKit

public class SelfSdk {
    public class func openLivenessCheck(account: Account, topViewController: UIViewController) {
        self_ios_sdk.SelfSDK.startLiveness(account: account, currentVC: topViewController)
    }
}

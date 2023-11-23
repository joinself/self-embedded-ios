//
//  OmemoUtils.h
//  self-ios
//
//  Created by Long Pham on 11/01/2021.
//  Copyright © 2021 Aldgate Ventures. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OmemoUtils : NSObject

+ (NSMutableData*) randomBytesOfLength:(NSUInteger)length;
+ (NSString*) hello:(NSString*)name;

@end

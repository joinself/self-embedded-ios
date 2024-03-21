//
//  OlmAccountWrapper.h
//  self-ios
//
//  Created by Long Pham on 08/01/2021.
//  Copyright © 2021 Aldgate Ventures. All rights reserved.
//

#import <Foundation/Foundation.h>


@class OlmSessionWrapper;

@interface OlmAccountWrapper : NSObject

// MARK:- Instance methods
- (instancetype) init NS_UNAVAILABLE;
- (NSDictionary* _Nullable) identityKeys;
- (NSDictionary* _Nullable) oneTimeKeys;
- (NSString*) pickle: (NSData*)key;
- (void) generateOneTimeKeys: (NSUInteger)numberOfkeys;
- (BOOL) removeOneTimeKeys: (OlmSessionWrapper*)session;

// MARK:- Class methods
- (instancetype _Nullable) initWithUnpickledString:(NSString *)pickled key:(NSData *)key;

NS_ASSUME_NONNULL_BEGIN
+ (instancetype) new NS_UNAVAILABLE;
+ (instancetype) createWithSeed: (NSData*)seed numberOfKey: (NSUInteger)numberOfKeys;
NS_ASSUME_NONNULL_END

@end


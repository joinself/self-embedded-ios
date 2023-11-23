//
//  GroupSessionWrapper.h
//  self-ios
//
//  Created by Long Pham on 06/01/2021.
//  Copyright © 2021 Aldgate Ventures. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OlmSessionWrapper;
@interface GroupSessionWrapper : NSObject

- (NSString*) getId;
- (void) setId: (NSString*) mId;
- (instancetype) init NS_UNAVAILABLE;
- (void) addGroupParticipant: (NSString* )groupId andSession: (OlmSessionWrapper* )sessionWrapper;
- (NSString* _Nullable) encryptMessage: (NSString* )plainText error:(NSError**)error;
- (NSString * _Nullable)decryptMessage:(NSString *)cipherText withId: (NSString* )sessionId error:(NSError**)error;

+ (instancetype) new NS_UNAVAILABLE;
+ (instancetype) create:(NSString*)groupId;

@end

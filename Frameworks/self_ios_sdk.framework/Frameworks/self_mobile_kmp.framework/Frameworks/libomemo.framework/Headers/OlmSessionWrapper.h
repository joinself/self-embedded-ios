//
//  OlmSessionWrapper.h
//  self-ios
//
//  Created by Long Pham on 08/01/2021.
//  Copyright © 2021 Aldgate Ventures. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Libomemo/OlmAccountWrapper.h>

extern NSString * _Nullable const OLMErrorDomain;

@interface OlmSessionWrapper : NSObject

// MARK:- Instance methods
- (instancetype _Nullable ) init NS_UNAVAILABLE;
- (instancetype _Nullable)initOutboundSession:(OlmAccountWrapper *_Nullable)account identityKeyData:(NSData *_Nullable)idKey oneTimeKeyData:(NSData *_Nullable)otKey;

- (instancetype _Nullable) initOutboundSession:(OlmAccountWrapper* )account identityKey:(NSString*)theirIdentityKey oneTimeKey:(NSString* )theirOneTimeKey;

- (instancetype _Nullable) initInboundSession:(OlmAccountWrapper*)account otkm:(NSString*) oneTimeKeyMessage;
- (instancetype _Nullable) initInboundSession:(OlmAccountWrapper*)account identityKey:(NSString*) oneTimeKeyMessage;

- (BOOL)matchesInboundSessionWithOTKMessage:(NSString *_Nullable)otkMessage;
- (BOOL)matchesInboundSessionWithOTKMessageData:(NSData *_Nullable)otkMessageData;

- (NSString* _Nullable)pickle:(NSData * _Nullable)key;
//- (NSString* _Nullable) lastError;
//- (void) destroy;
//- (long) getHandle;

// MARK:- Class methods
+ (instancetype _Nullable ) new NS_UNAVAILABLE;

//+ (instancetype) createOutboundSession:(OlmAccountWrapper*)account identityKey:(NSString*) theirIdentityKey oneTimeKey:(NSString* )theirOneTimeKey;
//
//+ (instancetype) createOutboundSession:(OlmAccountWrapper*)account identityKeyData:(NSData*) theirIdentityKey oneTimeKeyData:(NSData* )theirOneTimeKey;
//
//+ (instancetype) createInboundSession:(OlmAccountWrapper*)account oneTimeMessage:(NSString*) oneTimeMessage;

//+ (instancetype) createInboundSession:(OlmAccountWrapper*)account identityKeyMessageData:(NSData*) oneTimeKeyMessageData;

- (instancetype _Nullable)initWithUnpickledData:(NSString *)pickledData pickleKey:(NSData *)key;

@end


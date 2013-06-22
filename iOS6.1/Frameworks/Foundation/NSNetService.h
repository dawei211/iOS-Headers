/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSNetService : NSObject
{
    id _netService;
    id _delegate;
    id _reserved;
}

+ (id)dataFromTXTRecordDictionary:(id)arg1;
+ (id)dictionaryFromTXTRecordData:(id)arg1;
- (id)TXTRecordData;
- (BOOL)setTXTRecordData:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)_monitors;
- (void)resolve;
- (void)resolveWithTimeout:(double)arg1;
- (BOOL)getInputStream:(out id *)arg1 outputStream:(out id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (struct __CFNetService *)_internalNetService;
- (void)finalize;
- (void)dealloc;
- (void)_dispatchCallBackWithError:(CDStruct_1ef3fb1f)arg1;
- (void)stop;
- (void)publish;
- (void)publishWithOptions:(unsigned int)arg1;
- (int)port;
- (id)addresses;
- (id)hostName;
- (id)name;
- (id)type;
- (id)domain;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (id)initWithCFNetService:(struct __CFNetService *)arg1;

@end

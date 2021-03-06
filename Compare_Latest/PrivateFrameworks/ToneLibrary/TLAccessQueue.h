/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TLAccessQueue : NSObject
{
    NSString *_label;
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic, setter=_setSerialQueue:) NSObject<OS_dispatch_queue> *_serialQueue; // @synthesize _serialQueue;
@property(copy, nonatomic, setter=_setThreadLocalStorageKey:) NSString *_threadLocalStorageKey; // @synthesize _threadLocalStorageKey;
- (void)_setLabel:(id)arg1;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)_performSynchronousBlockInSerialQueue:(id)arg1;
- (void)performAsynchronousBlock:(id)arg1;
- (void)performSynchronousBlock:(id)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2;

@end


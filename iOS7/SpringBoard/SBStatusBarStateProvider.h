/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBStatusBarStateAggregatorPosting-Protocol.h"
#import "UIStatusBarStateProvider-Protocol.h"

@class NSHashTable, SBStatusBarStateAggregator;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider>
{
    SBStatusBarStateAggregator *_stateAggregator;
    NSHashTable *_stateObservers;
    CDStruct_87a532be _aggregatorData;
    int _aggregatorActions;
    CDStruct_87a532be _lastPost;
    unsigned int _coalescentBlockDepth;
    char _itemNeedsPost[25];
    BOOL _anyItemNeedsPost;
    BOOL _posting;
}

- (void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const CDStruct_87a532be *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(BOOL)arg3 toData:(const CDStruct_87a532be *)arg4;
- (void)statusBarStateAggregatorDidStartPost:(id)arg1;
- (void)_composePostActionsFromAggregatorActions:(int *)arg1;
- (void)_composePostDataFromAggregatorData:(CDStruct_87a532be *)arg1;
- (BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const CDStruct_87a532be *)arg3;
- (void)updateStatusBarItem:(int)arg1;
- (void)endCoalescentBlock;
- (void)beginCoalescentBlock;
- (void)getStatusBarData:(CDStruct_87a532be *)arg1;
- (void)removeStatusBarStateObserver:(id)arg1;
- (void)addStatusBarStateObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end


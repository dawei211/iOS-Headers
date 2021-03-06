/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ACDDataclassOwnersManagerProtocol-Protocol.h"

@class ACAccountStore, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;

@interface ACRemoteDataclassOwnersManager : NSObject <ACDDataclassOwnersManagerProtocol>
{
    NSSet *_dataclassOwners;
    NSMutableDictionary *_dataclassToOwnerMap;
    NSObject<OS_dispatch_queue> *_dataclassActionQueue;
    NSMutableDictionary *_pendingActionBatches;
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
- (id)_dataclassToOwnerMap;
- (void)_setOwner:(id)arg1 forDataclass:(id)arg2;
- (id)_ownerForDataclass:(id)arg1;
- (void)_decrementBusyCounterForAccount:(id)arg1;
- (void)_incrementBusyCounterForAccount:(id)arg1;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(id)arg2;
- (void)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 completion:(id)arg4;
- (void)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(id)arg3;
- (void)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 completion:(id)arg3;
- (void)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(id)arg3;
- (void)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 completion:(id)arg3;
- (id)_accountStore;
- (id)init;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSManagedObjectContextFaultingDelegate-Protocol.h"
#import "PFUbiquityBaselineRecoveryOperationDelegate-Protocol.h"
#import "PFUbiquityBaselineRollOperationDelegate-Protocol.h"
#import "PFUbiquityBaselineRollResponseOperationDelegate-Protocol.h"
#import "PFUbiquityImportScanOperationDelegate-Protocol.h"
#import "_PFUbiquityRecordImportOperationDelegate-Protocol.h"

@class NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSRecursiveLock, NSSet, NSString, PFUbiquityLocation;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityImportScanOperationDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate>
{
    NSOperationQueue *_importQueue;
    NSObject<OS_dispatch_queue> *_privateQueue;
    BOOL _isMonitoring;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableSet *_pendingTransactionLogLocations;
    NSMutableSet *_failedPendingTransactionLogs;
    NSObject<OS_dispatch_source> *_logRestartTimer;
    BOOL _hasScheduledPendingLogsBlock;
    BOOL _hasScheduledFailedLogsBlock;
    NSRecursiveLock *_schedulingLock;
    NSLock *_pendingLocationsLock;
    BOOL _importOnlyActiveStores;
    BOOL _throttleNotifications;
    unsigned int _numPendingNotifications;
    NSMutableDictionary *_pendingNotificationUserInfo;
    BOOL _allowBaselineRoll;
    unsigned int _pendingImportOperationsCount;
}

+ (void)afterDelay:(double)arg1 executeBlockOnRootQueue:(id)arg2;
+ (void)executeBlockOnRootQueue:(id)arg1;
+ (BOOL)canProcessContentsOfUbiquityRootPath:(id)arg1;
+ (void)initialize;
@property(readonly) NSSet *failedPendingTransactionLogLocations; // @synthesize failedPendingTransactionLogLocations=_failedPendingTransactionLogs;
@property(readonly) NSSet *pendingTransactionLogLocations; // @synthesize pendingTransactionLogLocations=_pendingTransactionLogLocations;
@property BOOL allowBaselineRoll; // @synthesize allowBaselineRoll=_allowBaselineRoll;
@property BOOL importOnlyActiveStores; // @synthesize importOnlyActiveStores=_importOnlyActiveStores;
@property BOOL throttleNotifications; // @synthesize throttleNotifications=_throttleNotifications;
@property(readonly, nonatomic) NSRecursiveLock *schedulingLock; // @synthesize schedulingLock=_schedulingLock;
@property NSObject<OS_dispatch_source> *logRestartTimer; // @synthesize logRestartTimer=_logRestartTimer;
@property(readonly) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
@property(readonly) BOOL isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(readonly) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly) NSOperationQueue *importQueue; // @synthesize importQueue=_importQueue;
- (void)executeBlockOnPrivateQueue:(id)arg1;
- (void)metadataInconsistencyDetectedForStore:(id)arg1;
- (void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3;
- (void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2;
- (void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2;
- (void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1;
- (void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1;
- (void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1;
- (void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1;
- (void)requestBaselineRollForStore:(id)arg1;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (int)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2;
- (void)scanOperation:(id)arg1 failedWithError:(id)arg2;
- (BOOL)scanOperationFinished:(id)arg1 withDiscoveredLogLocation:(id)arg2 error:(id *)arg3;
- (BOOL)scheduleUbiquityRootScan:(BOOL)arg1 withLocalPeerLogs:(BOOL)arg2 error:(id *)arg3;
- (void)scheduleRecoveryTimer;
- (void)operationWasInterruptedDuringImport:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationDidFinish:(id)arg1;
- (void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3;
- (BOOL)shouldThrottleNotificationsWithOperation:(id)arg1;
- (void)ubiquityIdentityChanged:(id)arg1;
- (void)checkStoresAndContainer;
- (void)_applicationResumed:(id)arg1;
- (void)recoverFailedLogs;
- (void)schedulePendingLogs;
- (void)filePresenter:(id)arg1 wasNotifiedOfTransactionLogLocation:(id)arg2;
- (void)cancelAllOperationsForStoreName:(id)arg1;
- (void)stopMonitor;
- (BOOL)startMonitor:(id *)arg1;
- (id)createDictionaryOfStoreNameToLocations:(id)arg1;
- (BOOL)scheduleTransactionLogOperations:(id)arg1 synchronous:(BOOL)arg2 error:(id *)arg3;
- (BOOL)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id *)arg2;
- (BOOL)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2;
- (id)createSortedOperationsArrayForLogLocationsInContext:(id)arg1 isFirstImport:(BOOL)arg2;
- (void)awakeFromLaunch:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)init;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate-Protocol.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBStarkScreenController, SBUIAnimationController;

@interface SBRelaunchAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBUIAnimationController *_animationController;
    BOOL _relaunchSuspended;
    BOOL _keepWorkspaceSuspended;
    BOOL _waitForReceiverChange;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    SBStarkScreenController *_starkScreenController;
}

@property(retain, nonatomic) SBStarkScreenController *starkScreenController; // @synthesize starkScreenController=_starkScreenController;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_handleAppRelaunch:(id)arg1;
- (BOOL)selfApplicationExited:(id)arg1;
- (BOOL)selfApplicationLaunchDidFail:(id)arg1;
- (BOOL)selfApplicationActivated:(id)arg1;
- (BOOL)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidStartLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (void)_transactionComplete;
- (void)_commit;
- (void)_endAnimation;
- (id)_setupAnimationForApp:(id)arg1;
- (id)_animationForApp:(id)arg1;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 application:(id)arg3;

@end


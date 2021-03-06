/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBScreenConnectionHandler-Protocol.h"

@class NSMapTable, SBPasscodeLockDisableAssertion, SBSpuriousScreenUndimmingAssertion, SBStarkBackgroundProviderManager, SBStarkScreenController, SBStarkStatusBarStateProvider;

@interface SBStarkScreenManager : NSObject <SBScreenConnectionHandler>
{
    SBStarkBackgroundProviderManager *_backgroundProviderManager;
    NSMapTable *_screenToControllerMap;
    SBStarkScreenController *_activeScreenController;
    SBStarkStatusBarStateProvider *_statusBarStateProvider;
    SBSpuriousScreenUndimmingAssertion *_spuriousScreenUndimmingAssertion;
    SBPasscodeLockDisableAssertion *_deviceLockDisableAssertion;
    id <SBStarkScreenManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) id <SBStarkScreenManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)screenManager:(id)arg1 didTriggerConnectionHandlerEvent:(int)arg2 forScreen:(id)arg3;
- (BOOL)screenManager:(id)arg1 shouldBindConnectionHandlerToScreen:(id)arg2;
- (void)_promptUnlockIfNecessary;
- (void)_setActiveController:(id)arg1;
- (id)statusBarStateProvider;
- (BOOL)isStarkActive;
- (id)activeScreenController;
- (id)backgroundProviderManager;
- (void)dealloc;
- (id)init;

@end


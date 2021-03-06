/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SBLockScreenBounceAnimator, SBLockScreenView, UIView, _UIDynamicValueAnimation;

@interface SBLockScreenSlideUpController : NSObject
{
    BOOL _isInScreenOffMode;
    UIView *_slidingStatusBarView;
    SBLockScreenView *_lockScreenView;
    SBLockScreenBounceAnimator *_bounceAnimator;
    _UIDynamicValueAnimation *_dynamicAnimation;
}

+ (id)lockScreenViewFakeStatusBar;
- (id)_newDynamicAnimationForGestureSucceeded:(BOOL)arg1 targetValue:(double)arg2 withInitialVelocity:(double)arg3;
- (id)_newBounceAnimatorWithGrabberView:(id)arg1;
- (void)abortDynamicAnimationForScreenOff;
- (void)setInScreenOffMode:(BOOL)arg1;
- (void)hideSlidingStatusBar;
- (void)finalizeGesture;
- (void)cleanupFromGesture;
- (void)prepareForSlideUpAnimation;
- (void)translateSlidingViewByY:(float)arg1;
- (void)gestureDidEnd:(BOOL)arg1;
- (void)gestureWillEndWithVelocity:(float)arg1;
- (void)setGrabberOnLockScreen:(id)arg1;
- (id)grabberView;
- (void)dealloc;
- (void)setLockScreenView:(id)arg1;
- (id)lockScreenView;

@end


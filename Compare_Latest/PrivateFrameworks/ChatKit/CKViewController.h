/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@interface CKViewController : UIViewController
{
    BOOL _appeared;
    BOOL _appearing;
}

@property(nonatomic) BOOL appearing; // @synthesize appearing=_appearing;
@property(nonatomic) BOOL appeared; // @synthesize appeared=_appeared;
- (void)childViewControllersPerform:(SEL)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)performResumeDeferredSetup;
- (void)systemApplicationWillEnterForeground;
- (void)parentControllerDidBecomeActive;
- (void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (void)significantTimeChange;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end


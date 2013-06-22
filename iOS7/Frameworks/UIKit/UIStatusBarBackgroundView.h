/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIImageView, UIStatusBarCorners, UIStatusBarStyleAttributes;

@interface UIStatusBarBackgroundView : UIView
{
    UIStatusBarStyleAttributes *_style;
    UIStatusBarCorners *_topCorners;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}

- (BOOL)_topCornersAreRounded;
- (id)_glowImage;
- (id)_baseImage;
- (id)_backgroundImageName;
- (void)_stopGlowAnimation;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)arg1;
- (BOOL)_styleCanGlow;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)_setGlowAnimationEnabled:(BOOL)arg1 waitForNextCycle:(BOOL)arg2;
- (void)setGlowAnimationEnabled:(BOOL)arg1;
- (id)style;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;

@end

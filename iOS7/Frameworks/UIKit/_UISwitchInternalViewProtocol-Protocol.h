/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class UIColor, UIImage;

@protocol _UISwitchInternalViewProtocol <NSObject>
@property(nonatomic) BOOL useAlternateColor;
@property(nonatomic) BOOL on;
@property(retain, nonatomic) UIImage *offImage;
@property(retain, nonatomic) UIImage *onImage;
@property(retain, nonatomic) UIColor *thumbTintColor;
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) UIColor *onTintColor;
- (void)_setPressed:(BOOL)arg1 on:(BOOL)arg2 animated:(BOOL)arg3 shouldAnimateLabels:(BOOL)arg4 completion:(id)arg5;
- (void)_prepareForInteraction;
- (void)_cleanUpAfterAnimating;
- (void)setSendAction:(BOOL)arg1;
- (void)_setPressed:(BOOL)arg1;
- (void)_setOn:(BOOL)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setProgress:(float)arg1;
- (void)_setProgress:(float)arg1 animated:(BOOL)arg2 withDuration:(float)arg3 force:(BOOL)arg4 sendAction:(BOOL)arg5;
@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class MPAVController, MPAVItem, UINavigationBar;

@protocol MPVideoOverlay
@property(nonatomic) unsigned long long disabledParts;
@property(nonatomic) unsigned long long visibleParts;
@property(nonatomic) unsigned long long desiredParts;
@property(retain, nonatomic) MPAVItem *item;
@property(nonatomic) __weak id <MPVideoOverlayDelegate> delegate;
@property(readonly, nonatomic) UINavigationBar *navigationBar;
@property(retain, nonatomic) MPAVController *player;
@property(nonatomic) BOOL navigationBarHidden;
@property(nonatomic) BOOL allowsWirelessPlayback;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)stopTicking;
- (void)startTicking;
- (BOOL)updateTimeBasedValues;
@end


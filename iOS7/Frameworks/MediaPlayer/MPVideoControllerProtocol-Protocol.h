/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPControllerProtocol-Protocol.h"

@class MPVideoView, UIColor, UIImage, UIView, UIView<MPVideoOverlay>, _UIHostedWindow;

@protocol MPVideoControllerProtocol <MPControllerProtocol>
@property(nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property(nonatomic) unsigned long long visibleParts;
@property(readonly, nonatomic) MPVideoView *videoView;
@property(readonly, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property(readonly, nonatomic) BOOL viewControllerWillRequestExit;
@property(nonatomic) BOOL TVOutEnabled;
@property(nonatomic) unsigned int scaleMode;
@property(retain, nonatomic) UIImage *posterImage;
@property(nonatomic) BOOL ownsStatusBar;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(nonatomic) unsigned int itemTypeOverride;
@property(nonatomic) BOOL inlinePlaybackUsesTVOut;
@property(readonly, nonatomic) unsigned int hostedWindowContextID;
@property(readonly, nonatomic) _UIHostedWindow *hostedWindow;
@property(nonatomic) BOOL displayPlaybackErrorAlerts;
@property(nonatomic) unsigned long long disabledParts;
@property(nonatomic) BOOL disableControlsAutohide;
@property(nonatomic) BOOL disableAutoRotation;
@property(nonatomic) unsigned long long desiredParts;
@property(nonatomic) BOOL controlsOverlayVisible;
@property(nonatomic) BOOL canShowControlsOverlay;
@property(readonly, nonatomic) BOOL canChangeScaleMode;
@property(nonatomic) BOOL canAnimateControlsOverlay;
@property(retain, nonatomic) UIColor *backstopColor;
@property(readonly, nonatomic) UIView *backgroundView;
@property(nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property(nonatomic) int artworkImageStyle;
@property(nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property(nonatomic) BOOL allowsWirelessPlayback;
@property(nonatomic) BOOL allowsDetailScrubbing;
- (void)showAlternateTracksController:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setScaleModeOverride:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsNeedLayout;
- (void)setClosedCaptions:(id)arg1;
- (void)prepareToDisplayVideo;
- (void)exitFullscreen;
- (void)displayVideoView;
- (BOOL)canHideOverlay:(BOOL)arg1;
@end


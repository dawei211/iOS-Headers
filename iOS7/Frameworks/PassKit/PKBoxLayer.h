/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CAReplicatorLayer.h"

@class CAShapeLayer, NSMutableArray;

@interface PKBoxLayer : CAReplicatorLayer
{
    NSMutableArray *_completionBlocks;
    CAShapeLayer *_reticleLayer;
}

+ (id)layer;
@property CAShapeLayer *reticleLayer; // @synthesize reticleLayer=_reticleLayer;
@property NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (void)addCompletionBlock:(id)arg1;
- (void)removePulseColor;
- (void)animatePulseColor:(id)arg1;
- (void)animateToPosition:(struct CGPoint)arg1 transform:(struct CATransform3D)arg2 opacity:(float)arg3 type:(int)arg4;
- (void)animateConceal;
- (void)animateReveal;
- (void)animateBounce:(BOOL)arg1;
- (void)positionForFrame:(struct CGRect)arg1;
- (void)positionForCodeBoxPoints:(id)arg1;
- (void)layoutSublayers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCodeFrameRatio:(float)arg1;
- (id)init;

@end

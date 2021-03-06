/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@interface UIView (Geometry)
- (void)setOrigin:(struct CGPoint)arg1;
- (struct CGPoint)origin;
- (void)setCenter:(struct CGPoint)arg1;
- (struct CGPoint)center;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
- (void)setBounds:(struct CGRect)arg1;
- (BOOL)_needsLayoutOnAnimatedBoundsChangeForNewBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)_resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)_resizeWithOldSuperviewSize_ancient:(struct CGSize)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (unsigned int)autoresizingMask;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (BOOL)autoresizesSubviews;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)setRotationBy:(float)arg1;
- (void)setFrame:(struct CGRect)arg1 forFields:(int)arg2;
- (struct CGRect)hitRect;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)_convertOffset:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(id)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isExclusiveTouch;
- (void)setExclusiveTouch:(BOOL)arg1;
- (BOOL)isMultipleTouchEnabled;
- (void)setMultipleTouchEnabled:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)transform;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect)arg1;
- (struct CGRect)extent;
- (struct CGRect)frame;
@end


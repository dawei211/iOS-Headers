/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class EKDayOccurrenceView, UIColor;

@interface EKDayOccurrenceResizeHandleView : UIView
{
    UIColor *_baseColor;
    EKDayOccurrenceView *_occurrenceView;
}

@property(readonly, nonatomic) EKDayOccurrenceView *occurrenceView; // @synthesize occurrenceView=_occurrenceView;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 occurrenceView:(id)arg2;
- (struct CGRect)_circleRect;

@end


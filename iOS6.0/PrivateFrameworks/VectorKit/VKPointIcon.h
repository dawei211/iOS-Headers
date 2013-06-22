/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKLabelIcon.h>

@class NSString;

@interface VKPointIcon : VKLabelIcon
{
    long long _featureID;
    NSString *_iconName;
    int _iconStyle;
    CDStruct_ad152e0a _iconStyleInfo;
    BOOL _drawingRenderableIcon;
}

- (id).cxx_construct;
- (BOOL)isDrawingRenderableIcon;
- (id)renderableIcon;
- (void)updateWithLabelContext:(struct LabelContext *)arg1 labelStyle:(CDStruct_125c20f7 *)arg2 atMercatorPoint:(CDStruct_31142d93)arg3;
- (id)iconName;
- (void)updateCollisionObject:(struct CollisionObject *)arg1;
- (BOOL)isPOI;
- (void)dealloc;
- (id)initWithFeatureID:(long long)arg1;

@end

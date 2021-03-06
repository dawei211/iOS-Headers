/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIKBRenderEffect-Protocol.h"

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect>
{
    struct CGColor *_color;
    float _weight;
    struct CGSize _offset;
    struct UIEdgeInsets _insets;
    struct UIEdgeInsets _concaveInsets;
}

+ (id)effectWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(float)arg4;
@property(nonatomic) float weight; // @synthesize weight=_weight;
@property(nonatomic) struct UIEdgeInsets concaveInsets; // @synthesize concaveInsets=_concaveInsets;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) struct CGSize offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) struct CGColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithColor:(id)arg1 offset:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3 weight:(float)arg4;
@property(readonly, nonatomic) SEL renderSelector;
@property(readonly, nonatomic) BOOL renderUnder;
@property(readonly, nonatomic) BOOL isValid;

@end


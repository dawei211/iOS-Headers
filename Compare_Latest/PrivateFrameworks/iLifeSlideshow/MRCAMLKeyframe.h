/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying>
{
    MRCAMLBezierData *spline;
    float value0;
    float value1;
    double time;
}

@property(retain, nonatomic) MRCAMLBezierData *spline; // @synthesize spline;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GCControllerElement : NSObject
{
}

- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1;
- (BOOL)_setValue:(float)arg1;
@property(readonly, getter=isAnalog) BOOL analog;
@property(readonly) GCControllerElement *collection;
- (float)value;

@end

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface UIStatusBarItem : NSObject
{
    int _type;
}

+ (BOOL)itemType:(int)arg1 appearsInRegion:(int)arg2;
+ (BOOL)itemType:(int)arg1 canBeEnabledForData:(id)arg2 style:(int)arg3;
+ (BOOL)typeIsValid:(int)arg1;
+ (id)itemWithType:(int)arg1;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (int)compareRightOrder:(id)arg1;
- (int)compareLeftOrder:(id)arg1;
- (int)comparePriority:(id)arg1;
- (BOOL)appearsInRegion:(int)arg1;
- (BOOL)appearsOnRight;
- (BOOL)appearsOnLeft;
@property(readonly, nonatomic) NSString *indicatorName; // @dynamic indicatorName;
@property(readonly, nonatomic) int rightOrder; // @dynamic rightOrder;
@property(readonly, nonatomic) int leftOrder; // @dynamic leftOrder;
@property(readonly, nonatomic) int priority; // @dynamic priority;
@property(readonly, nonatomic) Class viewClass; // @dynamic viewClass;
- (id)initWithType:(int)arg1;

@end


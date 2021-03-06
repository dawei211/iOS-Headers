/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IOAccelMemoryPoolTotals : NSObject
{
    NSString *device_name;
    NSString *pool;
    unsigned long long allocatedSize;
    unsigned long long residentSize;
    unsigned long long wiredSize;
    unsigned long long dirtySize;
    unsigned long long purgeableSize;
    unsigned long long nonpurgeableSize;
}

@property unsigned long long nonpurgeableSize; // @synthesize nonpurgeableSize;
@property unsigned long long purgeableSize; // @synthesize purgeableSize;
@property unsigned long long dirtySize; // @synthesize dirtySize;
@property unsigned long long wiredSize; // @synthesize wiredSize;
@property unsigned long long residentSize; // @synthesize residentSize;
@property unsigned long long allocatedSize; // @synthesize allocatedSize;
@property(retain) NSString *pool; // @synthesize pool;
@property(retain) NSString *device_name; // @synthesize device_name;
- (void)dealloc;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFileManagerDelegate-Protocol.h"

@interface MBFileManagerDelegate : NSObject <NSFileManagerDelegate>
{
    id _shouldCopyItemAtPathToPath;
}

@property(copy, nonatomic) id shouldCopyItemAtPathToPath; // @synthesize shouldCopyItemAtPathToPath=_shouldCopyItemAtPathToPath;
- (BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFileCoordinator.h"

@class NSString;

@interface PFUbiquityFileCoordinator : NSFileCoordinator
{
    NSString *_localPeerID;
}

+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)arg1;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1 andLocalPeerID:(id)arg2;
+ (id)newFileCoordinatorForUbiquityRootLocation:(id)arg1;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
- (BOOL)shouldRetryForError:(id)arg1 ignoreFile:(char *)arg2;
- (void)coordinateReadingItemAtLocation:(id)arg1 options:(unsigned int)arg2 retryOnError:(BOOL)arg3 error:(id *)arg4 byAccessor:(id)arg5;
- (void)dealloc;
- (id)initWithFilePresenter:(id)arg1;

@end


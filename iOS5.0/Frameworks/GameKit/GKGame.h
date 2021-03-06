/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGameInternal, GKLoadStoreItemContext, NSDictionary, NSNumber, NSString, SSItem;

@interface GKGame : NSObject
{
    GKGameInternal *_internal;
    SSItem *_storeItem;
    BOOL _sandboxed;
    GKLoadStoreItemContext *_storeItemLoadContext;
}

+ (id)defaultGameIconWithStyle:(int)arg1;
+ (void)loadStoreItemsForGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)currentGame;
+ (BOOL)isGameCenter;
@property(retain, nonatomic) GKLoadStoreItemContext *storeItemLoadContext; // @synthesize storeItemLoadContext=_storeItemLoadContext;
@property(nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
@property(retain, nonatomic) SSItem *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) GKGameInternal *internal; // @synthesize internal=_internal;
- (void)loadRecentFriendPlayersWithCompletionHandler:(id)arg1;
- (void)loadStoreItemWithCompletionHandler:(id)arg1;
- (void)loadIconForStyle:(int)arg1 withCompletionHandler:(id)arg2;
- (id)cachedIconForStyle:(int)arg1;
- (id)imageSourceForIconStyle:(int)arg1;
- (id)loadAndRenderIconForStyle:(int)arg1 withImageBrush:(id)arg2 completionHandler:(id)arg3;
- (id)_imageURLForIconStyle:(int)arg1;
@property(readonly, nonatomic) struct GKGameInfo gameInfo;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(readonly, nonatomic) NSString *defaultCategory; // @dynamic defaultCategory;
@property(readonly, nonatomic) NSNumber *externalVersion; // @dynamic externalVersion;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic, getter=isPrerendered) BOOL prerendered; // @dynamic prerendered;

@end


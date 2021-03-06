/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileAccessNode;

@interface NSFileReactorProxy : NSObject
{
    struct _xpc_connection_s *_client;
    id _reactorID;
    id _messageSender;
    NSFileAccessNode *_itemLocation;
}

- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)forwardUsingMessageSender:(id)arg1;
- (id)itemLocation;
- (void)setItemLocation:(id)arg1;
- (id)messageSender;
- (id)reactorID;
- (struct _xpc_connection_s *)client;
- (void)finalize;
- (void)dealloc;
- (id)initWithClient:(struct _xpc_connection_s *)arg1 reactorID:(id)arg2 messageSender:(id)arg3;

@end


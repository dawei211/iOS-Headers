/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MSASComment;

@interface MSASCommentChange : NSObject
{
    MSASComment *_comment;
    int _deletionIndex;
    int _type;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int deletionIndex; // @synthesize deletionIndex=_deletionIndex;
@property(retain, nonatomic) MSASComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (id)description;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MFComposeRecipientOriginContext : NSObject
{
    NSString *_searchTerm;
    int _resultType;
}

@property(readonly, nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void)dealloc;
- (void)setResultType:(int)arg1;
- (void)setSearchTerm:(id)arg1;

@end


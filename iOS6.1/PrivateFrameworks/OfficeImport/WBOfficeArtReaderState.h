/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OABReaderState.h>

@class WBReader;

@interface WBOfficeArtReaderState : OABReaderState
{
    WBReader *mReader;
    int mCurrentTextType;
}

@property(nonatomic) int currentTextType; // @synthesize currentTextType=mCurrentTextType;
@property(nonatomic) WBReader *reader; // @synthesize reader=mReader;
- (id)initWithClient:(Class)arg1;

@end


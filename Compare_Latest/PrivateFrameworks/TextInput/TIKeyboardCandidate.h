/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TIKeyboardCandidateCoding-Protocol.h"

@class NSArray, NSString;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding>
{
    NSString *_alternativeText;
}

+ (int)type;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int usageTrackingMask;
@property(readonly, nonatomic) NSArray *usageTrackingTypes;
@property(readonly, nonatomic, getter=isEmojiCandidate) BOOL emojiCandidate;
@property(readonly, nonatomic, getter=isExtensionCandidate) BOOL extensionCandidate;
@property(readonly, nonatomic) BOOL isAutocorrection;
@property(readonly, nonatomic) BOOL isForShortcutConversion;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int deleteCount;
@property(readonly, nonatomic) unsigned int wordOriginFeedbackID;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) NSString *input;
@property(readonly, nonatomic) NSString *candidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

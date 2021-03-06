/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CKTranscriptDataRow : NSObject
{
    BOOL _hasTail;
    NSString *_guid;
    id <CKTranscriptDataRowObject> _object;
    id <CKMessage> _message;
    struct CGRect _frame;
}

+ (id)rowAttributesLock;
+ (id)rowAttributes;
+ (id)rowWithObject:(id)arg1 forMessage:(id)arg2;
@property(nonatomic) BOOL hasTail; // @synthesize hasTail=_hasTail;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) id <CKMessage> message; // @synthesize message=_message;
@property(retain, nonatomic) id <CKTranscriptDataRowObject> object; // @synthesize object=_object;
- (id)rowAttributes;
- (void)removeAttributes;
- (void)removeAttributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (void)removeSize;
- (id)rowSize;
- (struct UIEdgeInsets)textAlignmentInsets;
- (struct CGSize)size;
- (BOOL)containsHyperlink;
- (BOOL)isEditable;
- (BOOL)isTypingIndicator;
- (BOOL)displayDuringSend;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets)contentAlignmentInsets;
- (BOOL)wantsContactImageLayout;
- (id)contactImage;
- (void)prewarmForDisplay;
- (BOOL)wantsPrewarmForDisplay;
- (id)cellIdentifier;
- (Class)cellClass;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithObject:(id)arg1 forMessage:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end


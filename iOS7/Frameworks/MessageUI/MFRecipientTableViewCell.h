/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class MFComposeRecipient, MFRecipientTableViewCellDetailView, MFRecipientTableViewCellTitleView, UIColor, UIImageView;

@interface MFRecipientTableViewCell : UITableViewCell
{
    MFRecipientTableViewCellTitleView *_titleView;
    MFRecipientTableViewCellDetailView *_detailView;
    MFComposeRecipient *_recipient;
    UIImageView *_cellImageView;
    UIColor *_tintColor;
    BOOL _shouldHighlightCompleteMatches;
    BOOL _shouldDimIrrelevantInformation;
}

+ (id)_defaultTintColor;
+ (float)heightWithRecipient:(id)arg1 width:(float)arg2;
+ (float)height;
+ (id)_tintedAttributedString:(id)arg1 toColor:(id)arg2 shouldDim:(BOOL)arg3;
+ (id)cellForRecipient:(id)arg1;
+ (id)identifier;
@property(nonatomic) BOOL shouldDimIrrelevantInformation; // @synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation;
@property(nonatomic) BOOL shouldHighlightCompleteMatches; // @synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches;
- (void)setTintColor:(id)arg1 animated:(BOOL)arg2;
- (id)tintColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setCellImage:(id)arg1 highlightedImage:(id)arg2;
- (void)setRecipient:(id)arg1;
- (id)recipient;
- (void)layoutSubviews;
- (struct CGRect)_frameForDetailView;
- (struct CGRect)_frameForTitleView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end


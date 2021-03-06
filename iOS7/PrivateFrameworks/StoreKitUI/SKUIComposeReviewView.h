/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "SKUIComposeReviewHeaderDelegate-Protocol.h"
#import "UITextContentViewDelegate-Protocol.h"

@class SKUIComposeReviewHeaderView, SKUIReviewMetadata, SULoadingView, SUTextContentView, UIControl, UILabel, UIScrollView;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate>
{
    int _currentBodyLength;
    id <SKUIComposeReviewViewDelegate> _delegate;
    SKUIComposeReviewHeaderView *_headerView;
    unsigned int _loading:1;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIControl *_reviewCountControl;
    UILabel *_reviewCountLabel;
    UIScrollView *_scrollView;
    int _style;
    SUTextContentView *_textContentView;
}

@property(nonatomic) __weak id <SKUIComposeReviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int composeReviewStyle; // @synthesize composeReviewStyle=_style;
- (void).cxx_destruct;
- (void)_updateContentSize;
- (void)_showLoadingView;
- (void)_showComposeView;
- (id)_reviewPlaceholder;
- (id)_reviewCountString;
- (void)_layoutLoadingView;
- (void)_layoutComposeView;
- (BOOL)_isReviewTextOptional;
- (void)_delayedUpdateReviewLength;
- (id)_body;
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;
- (void)_reviewCountAction:(id)arg1;
- (void)textContentViewDidChange:(id)arg1;
- (BOOL)textContentView:(id)arg1 shouldScrollForPendingContentSize:(struct CGSize)arg2;
- (BOOL)textContentView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textContentView:(id)arg1 shouldChangeSizeForContentSize:(struct CGSize)arg2;
- (void)textContentView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeHeaderViewValuesDidChange:(id)arg1;
- (void)composeHeaderViewValidityDidChange:(id)arg1;
- (void)setReview:(id)arg1;
@property(nonatomic) float rating;
@property(nonatomic, getter=isLoading) BOOL loading;
- (void)reloadData;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)copyReview;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end


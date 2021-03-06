/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABContactCell.h>

@class ABPropertyGroupItem, NSDictionary, NSLayoutConstraint, UILabel, UIResponder, UIView;

@interface ABPropertyCell : ABContactCell
{
    BOOL _allowsEditing;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    UIView *_innerContentView;
    UIResponder *_firstResponderItem;
    float _labelWidth;
    id <ABPropertyCellDelegate> _delegate;
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
    NSLayoutConstraint *_cellWidthConstraint;
}

+ (float)cellHeight;
+ (float)labelsPadding;
+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *cellWidthConstraint; // @synthesize cellWidthConstraint=_cellWidthConstraint;
@property(copy, nonatomic) NSDictionary *valueTextAttributes; // @synthesize valueTextAttributes=_valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float labelWidth; // @synthesize labelWidth=_labelWidth;
@property(nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(readonly, nonatomic) UIResponder *firstResponderItem; // @synthesize firstResponderItem=_firstResponderItem;
@property(readonly, nonatomic) UIView *innerContentView; // @synthesize innerContentView=_innerContentView;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void)_adjustCellLayoutForSectionLocation:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)contentViewEditingConstraints;
- (id)contentViewConstraints;
- (void)updateConstraints;
- (void)setNeedsUpdateConstraints;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)copy:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)setPropertyItem:(id)arg1;
@property(readonly, nonatomic) ABPropertyGroupItem *propertyItem;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end


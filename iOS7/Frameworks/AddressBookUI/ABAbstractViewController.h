/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

@class ABModel;

@interface ABAbstractViewController : UITableViewController
{
    ABModel *_model;
    id <ABStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABModel *model; // @synthesize model=_model;
- (void)updateNavigationButtons;
- (int)behavior;
- (id)peoplePickerNavigationController;
- (struct CGSize)contentSize;
- (void)setParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (BOOL)supportedInterfaceOrientation:(int)arg1;
- (BOOL)_allowsAutorotation;
- (void)dealloc;
- (void)setAddressBook:(void *)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithModel:(id)arg1;

@end


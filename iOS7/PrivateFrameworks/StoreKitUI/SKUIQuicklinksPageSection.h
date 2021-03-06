/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIQuicklinksViewControllerDelegate-Protocol.h"

@class SKUIQuicklinksPageComponent, SKUIQuicklinksViewController;

@interface SKUIQuicklinksPageSection : SKUIStorePageSection <SKUIQuicklinksViewControllerDelegate>
{
    SKUIQuicklinksViewController *_quicklinksViewController;
}

- (void).cxx_destruct;
- (id)_quicklinksViewController;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(int)arg3;
- (int)numberOfCells;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SKUIQuicklinksPageComponent *pageComponent; // @dynamic pageComponent;

@end


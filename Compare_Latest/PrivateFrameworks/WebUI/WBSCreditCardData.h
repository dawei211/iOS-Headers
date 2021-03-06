/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDate, NSString;

@interface WBSCreditCardData : NSObject
{
    NSData *_keychainItem;
    NSString *_cardNameUIString;
    NSString *_cardholderName;
    NSString *_cardNumber;
    NSDate *_expirationDate;
}

@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *cardNameUIString; // @synthesize cardNameUIString=_cardNameUIString;
- (void)removeFromKeychain;
- (void)saveToKeychain;
- (BOOL)isSavedToKeychain;
- (id)initWithKeychainItem:(id)arg1;
- (id)description;
- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;
- (void)dealloc;

@end


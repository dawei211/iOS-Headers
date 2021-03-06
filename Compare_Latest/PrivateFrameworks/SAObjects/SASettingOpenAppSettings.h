/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SASettingOpenSettings.h>

#import "SASettingAppSettingCommand-Protocol.h"

@class NSArray, NSString;

@interface SASettingOpenAppSettings : SASettingOpenSettings <SASettingAppSettingCommand>
{
}

+ (id)openAppSettingsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)openAppSettings;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSString *appWithSettingsId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end


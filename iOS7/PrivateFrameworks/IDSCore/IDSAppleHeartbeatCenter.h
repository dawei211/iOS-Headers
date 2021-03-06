/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMSystemMonitorListener-Protocol.h"

@class IMTimer, NSDate, NSMutableArray;

@interface IDSAppleHeartbeatCenter : NSObject <IMSystemMonitorListener>
{
    NSMutableArray *_registrations;
    NSDate *_registrationHeartbeatDate;
    IMTimer *_registrationHeartbeatTimer;
    double _baseRegistrationHBI;
}

+ (id)sharedInstance;
- (void)systemDidWake;
- (void)removeRegistrationInfo:(id)arg1;
- (void)addRegistrationInfo:(id)arg1;
@property(readonly, nonatomic) double registrationHBI;
- (void)_bagReloaded:(id)arg1;
- (void)_registrationStateChangedNotification:(id)arg1;
- (void)updateHeartbeat;
- (void)checkHeartbeat;
- (void)_stopRegistrationHeartbeat;
- (void)_startRegistrationHeartbeat;
- (void)_updateRegistrationHeartbeat;
- (id)_registrationsPendingHeartbeat;
- (double)_nextRegistrationHeartbeatTime;
- (BOOL)_registration:(id)arg1 needsRenewal:(double *)arg2;
- (void)_serverHeartBeatTimerHit:(id)arg1;
- (void)_serverHeartBeat:(id)arg1;
- (id)init;

@end


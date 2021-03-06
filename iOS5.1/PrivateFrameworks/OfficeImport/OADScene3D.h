/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class OADBackdrop, OADCamera, OADLightRig;

@interface OADScene3D : NSObject <NSCopying>
{
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)camera;
- (void)setCamera:(id)arg1;
- (id)lightRig;
- (void)setLightRig:(id)arg1;
- (id)backdrop;
- (void)setBackdrop:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end


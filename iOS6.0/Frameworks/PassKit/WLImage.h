/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSData, NSObject<OS_dispatch_queue>;

@interface WLImage : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldTile;
    BOOL _shouldStretch;
    struct WLEdgeInsets _capInsets;
    NSData *_imageData;
    struct CGImage *_imageRef;
    float _scale;
    int _orientation;
}

+ (BOOL)supportsSecureCoding;
+ (id)passesImageNamed:(id)arg1;
+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(float *)arg3;
@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (void)_queue_createImageRefIfNecessary;
- (id)notificationIconData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withBlendMode:(int)arg3 alpha:(float)arg4;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)resizableImageByTilingCenterPixel;
- (id)resizableImageByStretchingWithCapInsets:(struct WLEdgeInsets)arg1;
- (id)resizableImageByTilingWithCapInsets:(struct WLEdgeInsets)arg1;
- (id)resizedImageWithConstraints:(id)arg1;
- (id)blurredImageWithRadius:(unsigned int)arg1 constraints:(id)arg2;
@property(readonly, nonatomic) struct WLEdgeInsets capInsets;
@property(readonly, nonatomic) BOOL stretches;
@property(readonly, nonatomic) BOOL tiles;
- (void)preheatBitmapData;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)init;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebAccessibilityTextMarker : NSObject
{
    struct AXObjectCache *_cache;
    struct TextMarkerData _textMarkerData;
}

+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition *)arg1 cache:(struct AXObjectCache *)arg2;
- (id).cxx_construct;
- (id)description;
- (struct VisiblePosition)visiblePosition;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 accessibilityObject:(struct WebAccessibilityObjectWrapper *)arg2;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache *)arg2;
- (id)initWithTextMarker:(struct TextMarkerData *)arg1 cache:(struct AXObjectCache *)arg2;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class LBSGLocRequest;

@interface LBSWrapperRequest : PBRequest
{
    BOOL _hasRequestType;
    int _requestType;
    LBSGLocRequest *_request;
}

@property(retain, nonatomic) LBSGLocRequest *request; // @synthesize request=_request;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) BOOL hasRequestType; // @synthesize hasRequestType=_hasRequestType;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRequest;
- (void)dealloc;

@end


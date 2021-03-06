/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableData;

@interface ABVCardLexer : NSObject
{
    NSMutableData *_data;
    char *_bytes;
    unsigned int _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    BOOL _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
}

- (id)tokenName:(int)arg1;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (unsigned int)cursor;
- (int)errorCount;
- (id)tokenSetForLength:(int)arg1;
- (int)nextTokenPeakSingle:(BOOL)arg1 length:(int)arg2;
- (int)nextTokenPeakUnicode:(BOOL)arg1 length:(int)arg2;
- (int)nextTokenPeak:(BOOL)arg1;
- (id)nextQuotedPrintableData;
- (id)nextEscapedCharacter;
- (id)nextSingleByteStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3;
- (void)_applyNextStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5;
- (id)nextStringInEncoding:(unsigned int)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (int)tokenAtCursor;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned int)arg3;
- (id)nextUnicodeBase64Line:(char *)arg1;
- (id)nextSingleByteBase64Line:(char *)arg1;
- (id)nextBase64Line:(char *)arg1;
- (id)nextBase64Data;
- (void)advanceToPeakPoint;
- (int)advanceToUnicodeString;
- (int)advanceToSingleByteString;
- (int)advanceToString;
- (BOOL)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (BOOL)advanceToEOLUnicode;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOL;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOL;
- (BOOL)atEOF;

@end


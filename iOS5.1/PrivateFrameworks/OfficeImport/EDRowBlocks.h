/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection, EDWorksheet, NSMutableArray, NSRecursiveLock, NSString;

@interface EDRowBlocks : NSObject
{
    EDWorksheet *mWorksheet;
    NSMutableArray *mRowBlocks;
    EDCollection *mFormulas;
    unsigned int mMaxPopulatedRow;
    unsigned int mMaxPopulatedColumn;
    NSString *mFileName;
    int mLockCount;
    NSRecursiveLock *mSaveLoadLock;
}

- (id)initWithWorksheet:(id)arg1;
- (void)dealloc;
- (unsigned int)rowBlockCount;
- (id)rowBlockAtIndex:(unsigned int)arg1;
- (void)removeRowBlockAtIndex:(unsigned int)arg1;
- (unsigned int)expectedIndexOfRowBlockForRowNumber:(unsigned int)arg1;
- (unsigned int)indexOfRowBlockForRowNumber:(unsigned int)arg1;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2;
- (id)rowBlockForRowNumber:(unsigned int)arg1 currentRowBlock:(id)arg2 createIfNil:(_Bool)arg3;
- (struct EDCellHeader *)cellWithRowNumber:(unsigned int)arg1 columnNumber:(int)arg2;
- (unsigned int)maxPopulatedRow;
- (unsigned int)maxPopulatedColumn;
- (id)formulas;

@end

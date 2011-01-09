/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSMutableIndexSet : NSIndexSet 
{
    void *_reserved;
}


- (void)addIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)removeIndex:(NSUInteger)arg1;
- (void)shiftIndexesStartingAtIndex:(NSUInteger)arg1 by:(NSInteger)arg2;
- (void)removeIndexes:(id)arg1;
- (void)addIndexes:(id)arg1;
- (void)addIndex:(NSUInteger)arg1;
- (void)removeAllIndexes;
- (Class)classForCoder;
- (void)_ensureRangeCapacity:(NSUInteger)arg1;
- (void)_addRangeToArray:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_insertRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 inArrayAtIndex:(NSUInteger)arg2;
- (void)_removeRangeInArrayAtIndex:(NSUInteger)arg1;
- (void)_replaceRangeInArrayAtIndex:(NSUInteger)arg1 withRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)addIndexesFromIndexSet:(id)arg1;
- (void)addIndexes:(NSUInteger*)arg1 count:(NSUInteger)arg2;
- (void)removeIndexesFromIndexSet:(id)arg1;
- (void)_mergeOverlappingRangesStartingAtIndex:(NSUInteger)arg1;
- (void)removeIndexesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_incrementBy:(NSUInteger)arg1 startingAtIndex:(NSUInteger)arg2;
- (void)_removeAndDecrementBy:(NSUInteger)arg1 startingAtIndex:(NSUInteger)arg2;

@end

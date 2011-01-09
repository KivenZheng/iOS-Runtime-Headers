/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMURangeArray : NSObject <NSCopying>
{
    NSUInteger _count;
    struct _VMURange { unsigned long long x1; unsigned long long x2; } *_ranges;
    NSUInteger _max;
    BOOL _sorted;
}


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })range;
- (NSUInteger)count;
- (id)init;
- (void)dealloc;
- (id)description;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(NSUInteger)arg1;
- (void)addRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithRanges:(const struct _VMURange { unsigned long long x1; unsigned long long x2; }*)arg1 count:(NSUInteger)arg2;
- (void)sort;
- (void)addRanges:(id)arg1;
- (NSUInteger)indexForLocation:(unsigned long long)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })rangeForLocation:(unsigned long long)arg1;
- (void)insertRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 atIndex:(NSUInteger)arg2;
- (void)removeRangeAtIndex:(NSUInteger)arg1;
- (void)removeAllRanges;
- (BOOL)intersectsLocation:(unsigned long long)arg1;
- (BOOL)intersectsRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })subrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })largestSubrangeNotExcludedBySelfForRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 andLargerThan:(unsigned long long)arg2;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })largestRange;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; }*)ranges;
- (unsigned long long)sumLengths;
- (void)setCapacity:(NSUInteger)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration>
{
}

+ (id)setWithArray:(id)arg1;
+ (id)setWithObjects:(id)arg1;
+ (id)setWithSet:(id)arg1;
+ (id)set;
+ (id)setWithObject:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)setWithObjects:(id*)arg1 count:(NSUInteger)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
+ (id)setWithArray:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithSet:(id)arg1 copyItems:(BOOL)arg2;

- (id)initWithSet:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (id)allObjects;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)anyObject;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (BOOL)containsObject:(id)arg1;
- (NSUInteger)hash;
- (id)initWithArray:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)count;
- (BOOL)isEqual:(id)arg1;
- (id)initWithObjects:(id*)arg1 count:(NSUInteger)arg2;
- (id)initWithObjects:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)initWithObject:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (BOOL)isNSSet__;
- (id)descriptionWithLocale:(id)arg1 indent:(NSUInteger)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (NSUInteger)countForObject:(id)arg1;
- (id)initWithSet:(id)arg1 copyItems:(BOOL)arg2;
- (void)getObjects:(id*)arg1;
- (unsigned long)_cfTypeID;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (id)objectsWithOptions:(NSUInteger)arg1 passingTest:(id)arg2;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
- (id)setByAddingObjects:(const id*)arg1 count:(NSUInteger)arg2;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)setByAddingObjectsFromOrderedSet:(id)arg1;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (void)enumerateObjectsWithOptions:(NSUInteger)arg1 usingBlock:(id)arg2;
- (id)sortedArrayWithOptions:(NSUInteger)arg1 usingComparator:(id)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 copyItems:(BOOL)arg3;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)initWithOrderedSet:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithOrderedSet:(id)arg1;
- (void)_applyValues:(int (*)())arg1 context:(void*)arg2;
- (BOOL)_getValue:(id*)arg1 forObj:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)_sumForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredSetUsingPredicate:(id)arg1;
- (BOOL)fastIsEqualToPointerCompareSet:(id)arg1;
- (id)mf_getAllObjectsAsArray;
- (void)mf_getAllObjects:(id*)arg1;
- (void)mf_makeObjectsPerformSelectorOnMainThread:(SEL)arg1 waitUntilDone:(BOOL)arg2;
- (void)mf_makeObjectsPerformSelectorValue:(id)arg1;

@end

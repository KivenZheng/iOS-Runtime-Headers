/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSPropertyDescription, NSMutableArray, NSManagedObject;



@interface _NSFaultingMutableArray : NSMutableArray 
{
    NSInteger _cd_rc;
    NSMutableArray *_realArray;
    NSManagedObject *_source;
    NSPropertyDescription *_relationship;
    struct _NSFaultingMutableArrayFlags { 
        unsigned int _isFault : 1; 
        unsigned int _reserved : 31; 
    } _flags;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)objectEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeLastObject;
- (id)source;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForKey:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (NSUInteger)count;
- (id)valueForKeyPath:(id)arg1;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (id)description;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (id)objectAtIndex:(NSUInteger)arg1;
- (void)addObject:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(NSUInteger)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isFault;
- (void)getObjects:(id*)arg1;
- (id)relationship;
- (id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(BOOL)arg3;
- (void)willRead;
- (void)turnIntoFault;

@end

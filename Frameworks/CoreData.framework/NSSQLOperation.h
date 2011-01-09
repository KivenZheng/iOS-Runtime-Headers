/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject, NSSQLRow, NSMutableArray, NSMutableDictionary;



@interface NSSQLOperation : NSObject 
{
    NSUInteger _databaseOperator;
    NSSQLRow *_rowForUpdate;
    NSMutableArray *_adapterOps;
    NSManagedObject *_object;
    NSSQLRow *_dbSnapshot;
    NSMutableDictionary *_mtmDeltas;
}


- (id)object;
- (void)dealloc;
- (id)description;
- (id)initWithObject:(id)arg1 entity:(id)arg2;
- (id)dbSnapshot;
- (void)setDatabaseOperator:(NSUInteger)arg1;
- (void)removeAdapterOperation:(id)arg1;
- (id)adapterOperations;
- (id)rowForUpdate;
- (void)setDBSnapshot:(id)arg1;
- (void)setRowForUpdate:(id)arg1;
- (void)addDelta:(id)arg1 forManyToManyKey:(id)arg2;
- (id)manyToManyDeltas;
- (void)addAdapterOperation:(id)arg1;
- (NSUInteger)databaseOperator;
- (id)objectID;

@end

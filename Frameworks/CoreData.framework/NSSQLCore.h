/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLModel, NSSQLRow, NSMutableDictionary, NSSQLAdapter, NSSQLConnection, NSManagedObjectContext, NSSet, NSMutableSet, NSSQLRowCache, NSString, NSSQLEntity, NSMutableArray, NSSaveChangesRequest;



@interface NSSQLCore : NSPersistentStore 
{
    NSSQLModel *_model;
    NSSQLAdapter *_adapter;
    NSSQLConnection *_connection;
    NSMutableArray *_channels;
    NSManagedObjectContext *_currentContext;
    NSSQLEntity *_lastEntity;
    NSSQLRowCache *_rowCache;
    NSMutableDictionary *_uniqueTable;
    NSMutableArray *_toManyCache;
    struct __CFSet { } *_deleteTable;
    NSSet *_lockedObjects;
    struct __CFDictionary { } *_dbOperationsByGlobalID;
    NSSaveChangesRequest *_currentSaveRequest;
    NSInteger _lazyFaultDebugLevel;
    NSMutableDictionary *_batchFaultBuffer;
    NSMutableDictionary *_batchToManyFaultBuffer;
    struct _NSScalarObjectID { Class x1; } *_currentGlobalID;
    NSSQLRow *_currentRow;
    id _reserved1;
    NSMutableSet *_missingObjectGIDs;
    NSMutableDictionary *_storeMetadata;
    NSMutableArray *_externalDataReferencesToSave;
    NSMutableArray *_externalDataReferencesToDelete;
    NSString *_externalDataReferencesDirectory;
    NSInteger _currentGeneration;
    NSInteger _debug;
    struct _sqlCoreFlags { 
        unsigned int preparingForSave : 1; 
        unsigned int beganTransaction : 1; 
        unsigned int ignoreEntityCaching : 1; 
        unsigned int storeMetadataClean : 1; 
        unsigned int useToManyCaching : 1; 
        unsigned int useSyntaxColoredLogging : 1; 
        unsigned int _RESERVED : 26; 
    } _sqlCoreFlags;
}

+ (void)initialize;
+ (Class)migrationManagerClass;
+ (NSInteger)debugDefault;
+ (BOOL)coloredLoggingDefault;
+ (void)setDebugDefault:(NSInteger)arg1;
+ (void)setColoredLoggingDefault:(BOOL)arg1;
+ (void)setSQLGenerationV1Default:(BOOL)arg1;
+ (BOOL)sanityCheckFileAtURL:(id)arg1 error:(id*)arg2;
+ (BOOL)SQLGenerationV1Default;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;

- (void)beginTransaction;
- (id)connection;
- (void)rollbackTransaction;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setURL:(id)arg1;
- (id)identifier;
- (id)model;
- (id)type;
- (void)dealloc;
- (id)channels;
- (struct _NSScalarObjectID { Class x1; }*)newForeignKeyID:(long long)arg1 entity:(id)arg2;
- (id)rowCache;
- (void)_setMetadata:(id)arg1;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (id)entityForObject:(id)arg1;
- (id)_newAdapterForModel:(id)arg1;
- (Class)objectIDFactoryForSQLEntity:(id)arg1;
- (struct _NSScalarObjectID { Class x1; }*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newAdapterForModel:(id)arg1;
- (void)_registerForAdapterContextNotifications:(id)arg1;
- (void)_unregisterForAdapterContextNotifications:(id)arg1;
- (void)registerChannel:(id)arg1;
- (void)unregisterChannel:(id)arg1;
- (void)_beginTransaction:(id)arg1;
- (void)_cleanUpAfterTransaction;
- (void)_commitTransaction:(id)arg1;
- (void)commitTransaction;
- (void)_rollbackTransaction:(id)arg1;
- (void)recordSnapshot:(id)arg1 forObjectID:(id)arg2;
- (void)recordToMany:(id)arg1 forSourceObjectID:(id)arg2 relationshipName:(id)arg3;
- (void)recordSnapshots:(id)arg1;
- (void)forgetSnapshotForGlobalID:(id)arg1;
- (id)localSnapshotForGlobalID:(id)arg1;
- (id)rowForObjectID:(id)arg1 after:(double)arg2;
- (id)rowForObjectID:(id)arg1;
- (id)missingObjectGlobalIDs;
- (id)createChannel;
- (id)_availableChannelFromRegisteredChannels;
- (id)_availableChannel;
- (id)_obtainOpenChannel;
- (id)availableChannel;
- (void)forgetSnapshotsForGlobalIDs:(id)arg1;
- (id)_prepareDictionaryResultsFromResultSet:(struct { NSInteger x1; NSInteger x2; double x3; NSInteger x4; NSUInteger x5; void **x6; void *x7; void *x8; struct FetchResultsRow_st {} *x9; struct FetchResultsRow_st {} *x10; struct FetchResultsRowListHeader_st {} **x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 31; } x12; }*)arg1 usingFetchPlan:(struct { void *x1; void *x2; NSUInteger x3; void *x4; void *x5; void *x6; void *x7; void *x8; int (*x9)(); struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 3; unsigned int x_10_1_4 : 27; } x10; }*)arg2;
- (id)_prepareResultsFromResultSet:(struct { NSInteger x1; NSInteger x2; double x3; NSInteger x4; NSUInteger x5; void **x6; void *x7; void *x8; struct FetchResultsRow_st {} *x9; struct FetchResultsRow_st {} *x10; struct FetchResultsRowListHeader_st {} **x11; struct { unsigned int x_12_1_1 : 1; unsigned int x_12_1_2 : 31; } x12; }*)arg1 usingFetchPlan:(struct { void *x1; void *x2; NSUInteger x3; void *x4; void *x5; void *x6; void *x7; void *x8; int (*x9)(); struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 3; unsigned int x_10_1_4 : 27; } x10; }*)arg2 withMatchingRows:(id*)arg3;
- (id)_newRowsForFetchPlan:(struct { void *x1; void *x2; NSUInteger x3; void *x4; void *x5; void *x6; void *x7; void *x8; int (*x9)(); struct { unsigned int x_10_1_1 : 1; unsigned int x_10_1_2 : 1; unsigned int x_10_1_3 : 3; unsigned int x_10_1_4 : 27; } x10; }*)arg1 selectedBy:(SEL)arg2 withArgument:(id)arg3;
- (id)countForFetchRequest:(id)arg1 inContext:(id)arg2;
- (void)invalidateObjectsWithGlobalIDs:(id)arg1;
- (void)_assertValidStateWithSelector:(SEL)arg1;
- (void)_cleanUpAfterSave;
- (id)_databaseContextState;
- (id)_addDatabaseContextStateToException:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (NSUInteger)_knownEntityKeyForObjectID:(id)arg1;
- (NSUInteger)_knownEntityKeyForObject:(id)arg1;
- (void)recordPrimaryKey:(long long)arg1 forInsertedObject:(id)arg2 withSQLEntity:(id)arg3;
- (void)_populateRowForOp:(id)arg1 withObject:(id)arg2;
- (void)recordDeleteForObject:(id)arg1;
- (void)recordDatabaseOperation:(id)arg1;
- (id)databaseOperationForGlobalID:(id)arg1;
- (id)databaseOperationForObject:(id)arg1;
- (void)recordToManyInsertsForObject:(id)arg1 withOperation:(id)arg2;
- (void)recordToManyUpdatesForObject:(id)arg1 withOperation:(id)arg2;
- (void)recordUpdateForObject:(id)arg1;
- (void)recordValuesForInsertedObject:(id)arg1;
- (id)_predicateForSelectingObjectForOperation:(id)arg1;
- (void)_addUpdatesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addInsertsToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addDeletesToDatabaseOp:(id)arg1 forManyToMany:(id)arg2;
- (void)_addManyToManysToDatabaseOp:(id)arg1;
- (void)createAdapterOperationsForDatabaseOperation:(id)arg1;
- (void)insertEntity:(id)arg1 intoOrderingArray:(id)arg2 withDependencies:(id)arg3 processingSet:(id)arg4;
- (id)entityNameOrderingArrayForEntities:(id)arg1;
- (id)orderAdapterOperations;
- (BOOL)ownsGlobalID:(id)arg1;
- (BOOL)ownsObject:(id)arg1;
- (BOOL)handlesFetchRequest:(id)arg1;
- (void)generatePrimaryKeysForEntity:(id)arg1;
- (void)prepareForSave:(id)arg1;
- (id)_entityForObject:(id)arg1;
- (void)recordChangesInContext:(id)arg1;
- (struct __CFArray { }*)_rowsForConflictDetection:(id)arg1 withChannel:(id)arg2;
- (BOOL)_performFastConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (id)_newObjectGraphStyleForSQLRow:(id)arg1 withObject:(id)arg2;
- (id)_newConflictRecordForObject:(id)arg1 originalRow:(id)arg2 newRow:(id)arg3;
- (id)_performExhaustiveConflictDetectionForObjects:(id)arg1 withChannel:(id)arg2;
- (void)_performChangesWithAdapterOps:(id)arg1;
- (void)performChanges;
- (void)rollbackChanges;
- (void)commitChanges:(id)arg1;
- (id)objectsForFetchRequest:(id)arg1 inContext:(id)arg2;
- (id)newRowsForFetchPlan:(void*)arg1;
- (id)externalDataReferencesDirectory;
- (id)externalDataReferencesToSave;
- (id)externalDataReferencesToDelete;
- (id)writeExternalDataReferences;
- (void)deleteExternalDataReferences:(id)arg1;
- (id)saveChanges:(id)arg1;
- (id)refreshObjects:(id)arg1;
- (void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(BOOL)arg4;
- (id)_dissectCorrelationTableCreationSQL:(id)arg1;
- (id)_collectSkewedComponents:(id*)arg1;
- (void)_checkAndRepairCorrelationTables:(BOOL)arg1 storeVersionNumber:(id)arg2;
- (void)_ensureDatabaseMatchesModel;
- (void)_loadOrSetMetadata;
- (void)_ensureMetadataLoaded;
- (void)setDatabaseUUID:(id)arg1;
- (id)fetchRowForObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (id)rawSQLTextForToManyFaultStatement:(id)arg1 stripBindVariables:(BOOL)arg2 swapEKPK:(BOOL)arg3;
- (id)hackQueryForManyToManyPrefetching:(id)arg1 andSourceObjectIDs:(id)arg2;
- (id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2;
- (id)newFaultingPredicateForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (id)newFetchedPKsForSourceID:(struct _NSScalarObjectID { Class x1; }*)arg1 andRelationship:(id)arg2;
- (void)_prefetchRelationshipKey:(id)arg1 sourceEntityDescription:(id)arg2 sourceObjectIDs:(id)arg3 prefetchRelationshipKeys:(id)arg4 inContext:(id)arg5;
- (void)_prefetchWithFetchRequest:(id)arg1 withObjectIDs:(id)arg2 inContext:(id)arg3;
- (id)adapter;
- (void)_performPostSaveTasks;
- (id)entityForFetchRequest:(id)arg1;
- (void)setCurrentContext:(id)arg1;
- (id)currentContext;
- (BOOL)load:(id*)arg1;
- (void)_purgeRowCache;
- (Class)_objectIDClass;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)databaseUUID;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (const id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)entityForEntityDescription:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;

@end

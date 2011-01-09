/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSString, NSPersistentStoreCoordinator, NSDictionary, NSURL;



@interface NSPersistentStore : NSObject 
{
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_configurationName;
    NSURL *_url;
    NSDictionary *_options;
    NSMutableDictionary *_oidFactories;
    id _defaultFaultHandler;
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    } _flags;
    void *_temporaryIDClass;
    void *_reserved2;
    void *_reserved3;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)migrationManagerClass;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;
+ (BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 error:(id*)arg3 options:(id)arg4;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;

- (void)setMetadata:(id)arg1;
- (id)metadata;
- (BOOL)isReadOnly;
- (id)options;
- (void)setURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)type;
- (void)finalize;
- (id)URL;
- (void)dealloc;
- (void)setReadOnly:(BOOL)arg1;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2;
- (id)_defaultMetadata;
- (BOOL)loadMetadata:(id*)arg1;
- (BOOL)load:(id*)arg1;
- (void)_updateMetadata;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (void)_preflightCrossCheck;
- (id)faultHandler;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (Class)_objectIDClass;
- (Class)faultHandlerClass;
- (Class)objectIDClassForEntity:(id)arg1;
- (BOOL)_unload:(id*)arg1;
- (BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (BOOL)_isMetadataDirty;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (id)configurationName;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (id)persistentStoreCoordinator;
- (void)doFilesystemCleanupOnRemove:(BOOL)arg1;
- (id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2;
- (id)objectIDFactoryForEntity:(id)arg1;
- (void)_setMetadataDirty:(BOOL)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (void)_didLoadMetadata;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLModel, NSMutableDictionary, NSSQLEntityKey, NSSQLStoreMappingGenerator, NSSQLPrimaryKey, NSSQLStatement, NSKnownKeysMappingStrategy, NSArray, NSEntityDescription, NSString, NSSQLOptLockKey, NSSQLEntity, NSMutableArray;



@interface NSSQLEntity : NSStoreMapping 
{
    NSSQLModel *_model;
    NSEntityDescription *_entityDescription;
    NSString *_tableName;
    NSMutableDictionary *_properties;
    NSArray *_propertyAllCache;
    NSArray *_propertiesAllToManysCache;
    NSArray *_propertyManyToManyCache;
    NSMutableArray *_columnsToFetch;
    NSMutableArray *_ekColumns;
    NSMutableArray *_fkColumns;
    NSMutableArray *_attrColumns;
    NSSQLPrimaryKey *_primaryKey;
    NSSQLEntityKey *_entityKey;
    NSSQLOptLockKey *_optLockKey;
    NSMutableArray *_subentities;
    NSSQLEntity *_superentity;
    NSSQLEntity *_rootEntity;
    NSSQLStoreMappingGenerator *_mappingGenerator;
    NSUInteger _entityID;
    NSUInteger _subentityMaxID;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _toOneRange;
    long long _maxPK;
    NSUInteger _pkCount;
    NSSQLStatement *_insertStatementCache;
    NSSQLStatement *_deletionStatementCache;
    NSSQLStatement *_faultingStatementCache;
    NSMutableDictionary *_toManyRelationshipStatementCache;
    void *_fetch_entity_plan;
    NSKnownKeysMappingStrategy *_propertyMapping;
    void *_odiousHashHackStorage;
    struct __sqlentityFlags { 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _reserved : 31; 
    } _sqlentityFlags;
}


- (id)primaryKey;
- (id)attributes;
- (id)model;
- (void)finalize;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)properties;
- (id)columnsToCreate;
- (id)optLockKey;
- (id)rootEntity;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_toOneRange;
- (BOOL)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (id)entityDescription;
- (id)tableName;
- (id)foreignKeyColumns;
- (id)foreignEntityKeyColumns;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (id)toManyRelationships;
- (id)manyToManyRelationships;
- (NSUInteger)fetchIndexForKey:(id)arg1;
- (id)attributeColumns;
- (BOOL)hasInheritance;
- (void)_addSubentity:(id)arg1;
- (void)setSuperentity:(id)arg1;
- (NSUInteger)subentityMaxID;
- (BOOL)isKindOfSQLEntity:(id)arg1;
- (id)attributeNamed:(id)arg1;
- (void)_addRootColumnToFetch:(id)arg1;
- (void)_addColumnToFetch:(id)arg1;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (void)_generateInverseRelationshipsAndMore;
- (void)_generateProperties;
- (NSUInteger)_generateIDWithSuperEntity:(id)arg1 nextID:(NSUInteger)arg2;
- (void)_doPostModelGenerationCleanup;
- (void)_setMaxPK:(long long)arg1;
- (long long)nextPrimaryKey64;
- (void)clearCachedStatements;
- (id)insertStatement;
- (void)cacheInsertStatement:(id)arg1;
- (id)deletionStatement;
- (void)cacheDeletionStatement:(id)arg1;
- (id)faultingStatement;
- (void)cacheFaultingStatement:(id)arg1;
- (id)faultingStatementForRelationship:(id)arg1;
- (NSUInteger)_pkCount;
- (id)propertyNamed:(id)arg1;
- (BOOL)hasAttributesWithExternalDataReferences;
- (void)_resetPKCount;
- (void)addInsertedObject:(id)arg1 toArray:(id)arg2;
- (id)relationshipNamed:(id)arg1;
- (void)cacheFaultingStatement:(id)arg1 forRelationship:(id)arg2;
- (BOOL)hasSubentities;
- (id)mappingGenerator;
- (NSUInteger)entityID;
- (id)externalName;
- (void*)_odiousHashHack;
- (id)propertiesByName;
- (id)propertyMapping;
- (id)superentity;
- (id)subentities;
- (void)setSubentities:(id)arg1;
- (id)_propertySearchMapping;
- (id)subentityKey;
- (id)columnsToFetch;
- (BOOL)isRootEntity;

@end

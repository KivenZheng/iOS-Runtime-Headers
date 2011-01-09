/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLQueryImpl_SQL : MLQueryImpl 
{
    struct __CFArray { } *_indexCharRunDataRef;
    NSUInteger _indexCharRunDataPropertyType;
    struct __CPRecordIDDictionary { } *_groupMembersMappingRef;
    unsigned long long _searchedPlaylistPersistentID;
}


- (void)getValues:(id*)arg1 forProperties:(NSUInteger*)arg2 count:(NSUInteger)arg3 ofEntityAtIndex:(NSUInteger)arg4;
- (struct CPRecordStore { }*)_storeRef;
- (struct CPRecordStore { }*)storeRef;
- (struct __CPRecordIDArray { }*)groupMembersOfEntityAtIndex:(NSUInteger)arg1;
- (NSUInteger)_countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (id)copyStringValueForProperty:(unsigned long)arg1 ofMLSItemRef:(void*)arg2;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofMLSItemRef:(void*)arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofMLSItemRef:(void*)arg2;
- (NSInteger)_getDBRecordIDOfEntityAtIndex:(NSUInteger)arg1;
- (void*)getDBRecordOfEntityAtIndex:(NSUInteger)arg1;
- (void)freeQueryResults;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (void)playlistContentsDidChangeNotification:(id)arg1;
- (void)prepareToEvaluate;
- (NSUInteger)countOfEntities;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (unsigned long)containedMediaTypesForEntityAtIndex:(NSUInteger)arg1;
- (id)sectionDataForStringProperty:(unsigned long)arg1;

@end

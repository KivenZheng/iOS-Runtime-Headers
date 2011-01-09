/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLSQLPredicate, MLSQLOrderBy;



@interface MLGroupQueryImpl_SQL : MLTrackQueryImpl_SQL 
{
    NSUInteger _queryResultsSimplePropertyType;
    MLSQLPredicate *_cpredParts;
    MLSQLOrderBy *_orderByPart;
    struct __CFArray { } *_containedMediaTypes;
}


- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)_copyAlbumQueryForEntityAtIndex:(NSUInteger)arg1 sorted:(BOOL)arg2;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;
- (void)evaluate;
- (void)freeQueryResults;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;

@end

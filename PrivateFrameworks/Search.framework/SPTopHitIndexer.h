/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSArray, CPSearchMatcher, NSString;



@interface SPTopHitIndexer : SPContentIndexer 
{
    CPSearchMatcher *_matcher;
    NSString *_queryString;
    NSArray *_searchDomains;
}

+ (id)indexerForTopHits;
+ (void)preheat;

- (id)init;
- (void)dealloc;
- (void*)_copyExternalRecordForIdentifier:(unsigned long long)arg1 domain:(NSUInteger)arg2;
- (id)_getDisplayIdentifierForDomain:(NSUInteger)arg1;
- (void*)_copyRecordForExternalID:(unsigned long long)arg1 displayIdentifier:(id)arg2 category:(id)arg3;
- (void*)_copyRecordForApplication:(id)arg1;
- (void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2;
- (void)removeIdentifier:(id)arg1;
- (float)_calculateMovingAverageWithLastTime:(double)arg1 andLastAverage:(float)arg2;
- (void)_setTopHitWithLocalRecord:(void*)arg1 content:(id)arg2 stringIdentifier:(id)arg3 domain:(NSUInteger)arg4 query:(id)arg5;
- (void)setTopHitWithApplication:(id)arg1 queryString:(id)arg2;
- (void)setTopHit:(unsigned long long)arg1 domain:(NSUInteger)arg2 queryString:(id)arg3;
- (id)_fetchAndCleanQueryResults:(id)arg1;
- (void)beginSearch:(id)arg1 domains:(id)arg2;
- (BOOL)_openOrCreateStore;
- (BOOL)nextSearchResults:(id*)arg1;

@end

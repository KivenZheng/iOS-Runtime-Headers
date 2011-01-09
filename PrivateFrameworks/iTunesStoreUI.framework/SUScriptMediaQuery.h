/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSArray;



@interface SUScriptMediaQuery : SUScriptObject 
{
    NSArray *_collections;
    NSArray *_filterPredicates;
    NSString *_groupingType;
    NSArray *_items;
    BOOL _watchingLibrary;
}

@property(readonly) MPMediaQuery *nativeQuery;
@property(getter=_collections,retain,readonly) NSArray *collections;
@property(getter=_filterPredicates,retain) id filterPredicates; /* unknown property attribute: Sset_filterPredicates: */
@property(getter=_groupingType,retain) NSString *groupingType; /* unknown property attribute: Sset_groupingType: */
@property(getter=_items,retain,readonly) NSArray *items;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)removeFilterPredicate:(id)arg1;
- (id)canFilterByProperty:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
- (id)_groupingType;
- (id)nativeQuery;
- (id)makeFilterPredicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;
- (void)set_collections:(id)arg1;
- (void)set_filterPredicates:(id)arg1;
- (void)set_groupingType:(id)arg1;
- (void)set_items:(id)arg1;
- (void)_addFilterPredicate:(id)arg1;
- (BOOL)_canFilterByProperty:(id)arg1;
- (id)_copyCollections;
- (id)_copyFilterPredicates;
- (id)_copyGroupingType;
- (id)_copyItems;
- (void)_removeFilterPredicate:(id)arg1;
- (void)_setFilterPredicates:(id)arg1;
- (void)_setGroupingType:(id)arg1;
- (void)_beginWatchingLibraryIfNecessary;
- (void)_resetCaches;
- (id)_items;
- (id)_filterPredicates;
- (id)_collections;
- (void)_libraryChangedNotification:(id)arg1;
- (id)_className;
- (void)dealloc;

@end

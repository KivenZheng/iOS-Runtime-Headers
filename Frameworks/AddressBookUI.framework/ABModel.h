/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSLock, NSMutableArray, ABGroupWrapper;



@interface ABModel : NSObject 
{
    void *_addressBook;
    struct __CFArray { } *_displayedMembers;
    NSMutableArray *_displayedGroups;
    struct { struct { /* ? */ } *x1; NSInteger x2; NSInteger x3; } *_sectionLists;
    struct __CFDictionary { } *_headerSortKeyToHeaderString;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _displayedMemberPreparedRange;
    NSUInteger _numberOfDisplayedMembers;
    BOOL _displayedMembersAreSearchResults;
    NSMutableArray *_selectedPeople;
    ABGroupWrapper *_selectedGroupWrapper;
    ABGroupWrapper *_lastSelectedGroupWrapper;
    NSUInteger _displayOrdering;
    struct __CFArray { } *_databaseChangeDelegates;
    NSMutableArray *_cachedModelRecords;
    NSLock *_memberLock;
    BOOL _loadingInBackground;
    NSLock *_backgroundLoadingLock;
    BOOL _backgroundInvalidated;
    id _delayedNotificationHandler;
}

@property(retain) ABGroupWrapper *selectedGroupWrapper;
@property void *addressBook;

+ (void)initialize;
+ (NSUInteger)sortOrdering;

- (void*)addressBook;
- (void)dealloc;
- (void)setSelectedGroupWrapper:(id)arg1;
- (NSUInteger)numberOfDisplayedMembers;
- (void*)displayedMemberAtIndex:(NSUInteger)arg1;
- (void)setSelectedPerson:(void*)arg1;
- (id)selectedPeople;
- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;
- (void)addDatabaseChangeDelegate:(id)arg1;
- (void)invalidateDisplayedMembers;
- (id)initWithAddressBook:(void*)arg1;
- (void)_waitUntilBackgroundThreadFinished;
- (void)setSortOrdering:(NSUInteger)arg1;
- (void)setDisplayNameOrdering:(NSUInteger)arg1;
- (void)resetSortKeyToHeaderStringDictionary;
- (struct __CFDictionary { }*)headerSortKeyToHeaderStringDictionary;
- (BOOL)shouldUsePartialLoadingForGroupWrapper:(id)arg1;
- (long)resetPartialSectionListWithMaximumCount:(NSInteger)arg1 headerSortKeyToHeaderString:(struct __CFDictionary { }*)arg2;
- (long)resetFullSectionList:(struct __CFDictionary { }*)arg1 maximumSectionCount:(NSInteger)arg2;
- (void)resetSectionList;
- (void)setFilteredDisplayedMembers:(struct __CFArray { }*)arg1;
- (NSInteger)displayedMemberSectionListsCount;
- (id)allDisplayedMembers;
- (id)_newModelRecordFromRecord:(void*)arg1;
- (void)_cachePeople:(struct __CFArray { }*)arg1 atEnd:(BOOL)arg2;
- (struct __CFArray { }*)_copyArrayOfPeopleInSelectedGroupWrapperForRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_loadMembersInBackground:(id)arg1;
- (void)_startBackgroundThreadIfNecessaryScanningForward:(BOOL)arg1;
- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)_displayedGroupMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)displayedMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (long)indexForDisplayedMember:(void*)arg1;
- (void)copyDisplayedNamePieces:(id*)arg1 isGroup:(BOOL*)arg2 highlightIndex:(NSInteger*)arg3 forMember:(const void**)arg4 atindex:(NSUInteger)arg5;
- (struct { struct { /* ? */ } *x1; NSInteger x2; NSInteger x3; }*)displayedMemberSectionLists;
- (void)prepareDisplayedMembersInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)invalidateDisplayedGroups;
- (void)setSelectedPeople:(id)arg1;
- (void*)selectedPerson;
- (void)setSelectedGroup:(void*)arg1;
- (void*)selectedGroup;
- (id)lastSelectedGroupWrapper;
- (void)setLastSelectedGroupWrapper:(id)arg1;
- (void)invalidateLastSelectedGroupWrapper;
- (id)selectedGroupWrapper;
- (void)modifiedDisplayedMember:(void*)arg1;
- (void)addDisplayedMember:(void*)arg1;
- (void)removeDisplayedMember:(void*)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)_notifyDelegatesOfDatabaseChangeWithDeletedGroup:(BOOL)arg1 deletedPerson:(BOOL)arg2;
- (void)_modelDatabaseChanged:(struct __CFDictionary { }*)arg1;
- (void)setAutoInvalidateOnDatabaseChange:(BOOL)arg1;
- (void)removeDatabaseChangeDelegate:(id)arg1;
- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2;
- (struct __CFArray { }*)_databaseChangeDelegates;

@end

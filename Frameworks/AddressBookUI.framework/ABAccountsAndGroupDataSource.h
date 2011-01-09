/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class AccountsManager, NSArray, ABModel, NSDictionary, NSMutableDictionary;



@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    ABModel *_model;
    NSArray *_accountIdentifiers;
    NSArray *_accountDisplayNames;
    NSDictionary *_groupsByAccountIdentifier;
    NSMutableDictionary *_headerViewsBySection;
    BOOL _hidesSearchableStores;
    AccountsManager *_accountsManager;
}

@property(retain) ABModel *model;
@property(retain) AccountsManager *accountsManager;
@property BOOL hidesSearchableStores;


- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)model;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (id)init;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)dealloc;
- (void)reloadData;
- (id)defaultGroupWrapper;
- (void)reloadDataIncludingAccountsManager:(BOOL)arg1;
- (NSInteger)preferredTableViewStyle;
- (NSInteger)numberOfGroupsInAccountAtIndex:(NSInteger)arg1;
- (NSInteger)numberOfAccounts;
- (id)groupNameForIndexPath:(id)arg1;
- (id)accountDisplayNameAtIndex:(NSInteger)arg1;
- (id)cachedHeaderViewForSection:(NSUInteger)arg1;
- (void)cacheHeaderView:(id)arg1 forSection:(NSUInteger)arg2;
- (NSInteger)numberOfGroupsForAccountIdentifier:(id)arg1;
- (void)setAccountsManager:(id)arg1;
- (id)accountsManager;
- (BOOL)hasMultipleAccountsOrGroups;
- (id)accountGroupWrappers;
- (id)indexPathForGroupWrapper:(id)arg1;
- (id)groupWrapperForIndexPath:(id)arg1;
- (BOOL)hidesSearchableStores;
- (void)setHidesSearchableStores:(BOOL)arg1;
- (void)setModel:(id)arg1;

@end

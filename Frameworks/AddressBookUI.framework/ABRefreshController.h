/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSMutableDictionary, AccountsManager;



@interface ABRefreshController : NSObject 
{
    NSMutableDictionary *_lastAccountRefreshDates;
    NSMutableDictionary *_lastGroupListRefreshDates;
    AccountsManager *_accountsManager;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)accountsChanged;
- (id)mobileAccounts;
- (void)_actuallyRefreshOrphanedAccountsWithAddressBook:(void*)arg1;
- (void)refreshGroupWrapper:(id)arg1;
- (BOOL)accountGroupListNeedsRefresh:(id)arg1;
- (void)refreshAccountGroupList:(id)arg1;
- (BOOL)groupWrapperNeedsRefresh:(id)arg1;
- (void)startRefreshingOrphanedAccountsWithAddressBook:(void*)arg1;

@end

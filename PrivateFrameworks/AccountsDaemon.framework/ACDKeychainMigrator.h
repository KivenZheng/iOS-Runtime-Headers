/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychainMigrator : NSObject {
    NSMutableDictionary * _accountTypeLookupCache;
    NSObject<OS_dispatch_queue> * _accountTypeLookupQueue;
    ACAccountStore * _store;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)_keychainItemFromAttributes:(id)arg1;
- (id)_keychainItemFromAttributesArray:(id)arg1;
- (id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2;
- (void)_migrateUUIDKeychainItems:(id)arg1;
- (void)_setAccountType:(id)arg1 forAccountTypeIdentifier:(id)arg2;
- (void)_validateKeychainItemClass:(id)arg1;
- (id)allKeychainItems;
- (id)init;
- (void)migrateAllKeychainItems;
- (BOOL)migrateKeychainItem:(id)arg1;

@end
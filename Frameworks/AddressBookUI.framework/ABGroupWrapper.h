/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, AccountsManager;



@interface ABGroupWrapper : NSObject 
{
    void *_addressBook;
    NSString *_accountIdentifier;
    void *_source;
    void *_group;
    NSString *_cachedName;
    AccountsManager *_accountsManager;
}

@property(readonly) NSString *name;
@property(readonly) NSUInteger numberOfContacts;
@property(readonly) void *sourceForNewRecords;
@property(readonly) BOOL showLinkedPeople;
@property(readonly) NSInteger sourceType;
@property(readonly) BOOL isEditable;
@property(readonly) NSString *_accountDescriptionBasedOnIdentifier;
@property(readonly) void *group;
@property(readonly) void *source;
@property(readonly) void *addressBook;
@property(readonly) NSString *accountIdentifier;
@property(retain) AccountsManager *accountsManager;

+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountsManager:(id)arg3 excludingSearchableStores:(BOOL)arg4 isSoleAccount:(BOOL)arg5;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 accountsManager:(id)arg3;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2;
+ (id)newGroupWrappersWithAccountIdentifier:(id)arg1 addressBook:(void*)arg2 excludingSearchableStores:(BOOL)arg3;
+ (id)newGroupWrapperFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;

- (id)accountIdentifier;
- (void*)addressBook;
- (void*)source;
- (NSInteger)sourceType;
- (BOOL)isEditable;
- (void*)group;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)description;
- (void)setAccountsManager:(id)arg1;
- (NSUInteger)numberOfContacts;
- (id)accountManager;
- (NSInteger)score;
- (NSInteger)compareToGroupWrapper:(id)arg1;
- (id)_accountDescriptionBasedOnIdentifier;
- (id)accountsManager;
- (BOOL)isContainerWrapper;
- (BOOL)isDirectoryWrapper;
- (id)initWithAddressBook:(void*)arg1 accountIdentifier:(id)arg2 source:(void*)arg3 group:(void*)arg4;
- (void*)sourceForNewRecords;
- (BOOL)isGlobalWrapper;
- (BOOL)showLinkedPeople;
- (id)copyDictionaryRepresentation;

@end

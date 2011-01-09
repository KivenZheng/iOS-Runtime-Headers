/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@interface Account : BasicAccount <WeaklyReferencedObject, ASDynamicAccountClassLoader, AccountCreationProtocol>
{
    unsigned int _isOffline : 1;
    unsigned int _autosynchronizingEnabled : 1;
    unsigned int _isActive : 2;
}

+ (void)initialize;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (BOOL)isSSLEditable;
+ (id)readAccountsUsingKey:(id)arg1;
+ (void)saveAccounts:(id)arg1 usingKey:(id)arg2;
+ (id)basicAccountProperties;
+ (id)myFullName;
+ (void)saveAccountInfoToDefaults;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)predefinedValueForKey:(id)arg1;
+ (void)loadBundleForAccountClass:(id)arg1;
+ (BOOL)loadBundleForAccountWithProperties:(id)arg1;
+ (id)accountWithBasicAccount:(id)arg1;
+ (BOOL)haveAccountsBeenConfigured;
+ (BOOL)isPredefinedAccountType;
+ (id)supportedDataclasses;
+ (id)propertiesWhichRequireValidation;
+ (id)accountTypeString;
+ (void*)keychainProtocol;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (BOOL)allObjectsInArrayAreOffline:(id)arg1;
+ (id)saslProfileName;
+ (id)hostname;

- (void)setUsername:(id)arg1;
- (id)serviceName;
- (id)initWithProperties:(id)arg1;
- (void)setIsActive:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)password;
- (BOOL)isActive;
- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)syncStoreIdentifier;
- (void)setDomain:(id)arg1;
- (struct __CFString { }*)connectionServiceType;
- (id)certUIService;
- (id)uniqueId;
- (Class)connectionClass;
- (BOOL)shouldEnableAfterError:(id)arg1;
- (BOOL)enableAccount;
- (id)nameForMailboxUid:(id)arg1;
- (void)setPortNumber:(NSUInteger)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (BOOL)usesSSL;
- (void*)keychainAccessibility;
- (BOOL)isCommonPortNumber:(NSUInteger)arg1;
- (NSUInteger)keychainPortNumber;
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(NSUInteger)arg1;
- (id)preferredAuthScheme;
- (void)setPreferredAuthScheme:(id)arg1;
- (id)passwordFromKeychain;
- (id)username;
- (void)_queueAccountInfoDidChange;
- (NSUInteger)portNumber;
- (void)_setAccountProperties:(id)arg1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)_initializeState;
- (void)setAutosynchronizingEnabled:(BOOL)arg1;
- (id)propertiesToSave;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (id)valueInAccountPropertiesForKey:(id)arg1;
- (BOOL)canGoOffline;
- (BOOL)isOffline;
- (void)setIsOffline:(BOOL)arg1;
- (void)setHostname:(id)arg1;
- (void)setPasswordInKeychain:(id)arg1;
- (void)_removePasswordInKeychain;
- (void)setPassword:(id)arg1;
- (id)passwordFromStoredUserInfo;
- (id)promptUserForPasswordWithMessage:(id)arg1;
- (BOOL)storesPassword;
- (BOOL)needsCredentials;
- (BOOL)acquireCredentialsWithPassword:(id)arg1;
- (id)managedTag;
- (id)promptUserIfNeededForPasswordWithMessage:(id)arg1;
- (NSUInteger)defaultPortNumber;
- (NSUInteger)defaultSecurePortNumber;
- (id)secureServiceName;
- (void)validateConnections;
- (void)setTryDirectSSL:(BOOL)arg1;
- (void)accountInfoDidChange;
- (id)_newConnection;
- (BOOL)requiresAuthentication;
- (id)authenticatedConnection;
- (id)defaultConnectionSettings;
- (void)applySettingsAsDefault:(id)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (id)customTitleForError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)customTitleForAuthenticationError:(id)arg1 authScheme:(id)arg2 defaultTitle:(id)arg3;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (BOOL)isPasswordMissing;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (BOOL)_connectAndAuthenticate:(id)arg1;
- (BOOL)shouldDisplayHostnameInErrorMessages;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (id)hostname;
- (id)domain;

@end

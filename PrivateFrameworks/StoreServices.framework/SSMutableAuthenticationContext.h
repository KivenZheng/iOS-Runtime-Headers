/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */



@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying>
{
}

@property(copy) NSDictionary *signupRequestParameters;
@property BOOL shouldFollowAccountButtons;
@property(retain) NSNumber *requiredUniqueIdentifier;
@property(copy) NSDictionary *requestParameters;
@property NSInteger promptStyle;
@property(copy) NSString *preferredITunesStoreClient;
@property BOOL canCreateNewAccount;
@property NSInteger accountScope;
@property(getter=isAccountNameEditable) BOOL accountNameEditable;
@property(copy) NSString *accountName;


- (void)setAccountName:(id)arg1;
- (void)setPromptStyle:(NSInteger)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setAccountScope:(NSInteger)arg1;
- (void)setShouldFollowAccountButtons:(BOOL)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountNameEditable:(BOOL)arg1;
- (void)setCanCreateNewAccount:(BOOL)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setSignupRequestParameters:(id)arg1;

@end

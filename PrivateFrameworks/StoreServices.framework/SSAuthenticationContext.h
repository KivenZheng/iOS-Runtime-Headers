/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSDictionary;



@interface SSAuthenticationContext : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_accountName;
    BOOL _accountNameEditable;
    NSInteger _accountScope;
    BOOL _canCreateNewAccount;
    NSString *_preferredITunesStoreClient;
    NSInteger _promptStyle;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    BOOL _shouldFollowAccountButtons;
    NSDictionary *_signupRequestParameters;
}

@property(copy,readonly) NSDictionary *signupRequestParameters;
@property(readonly) BOOL shouldFollowAccountButtons;
@property(retain,readonly) NSNumber *requiredUniqueIdentifier;
@property(copy,readonly) NSDictionary *requestParameters;
@property(readonly) NSInteger promptStyle;
@property(copy,readonly) NSString *preferredITunesStoreClient;
@property(readonly) BOOL canCreateNewAccount;
@property(readonly) NSInteger accountScope;
@property(getter=isAccountNameEditable,readonly) BOOL accountNameEditable;
@property(copy,readonly) NSString *accountName;

+ (id)contextForSignIn;

- (id)requiredUniqueIdentifier;
- (id)initWithAccountIdentifier:(id)arg1;
- (NSInteger)accountScope;
- (id)initWithAccount:(id)arg1;
- (id)accountName;
- (id)requestParameters;
- (BOOL)shouldFollowAccountButtons;
- (id)preferredITunesStoreClient;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isAccountNameEditable;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)signupRequestParameters;
- (NSInteger)promptStyle;
- (BOOL)canCreateNewAccount;

@end

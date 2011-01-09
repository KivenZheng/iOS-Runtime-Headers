/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIWindow, UIAlertView, NSMutableArray, NSString, UINavigationController, GKInvite, NSArray;



@interface GKLocalPlayer : GKPlayer 
{
    BOOL _authenticated;
    NSArray *_friends;
    NSMutableArray *_emails;
    BOOL _findable;
    NSString *_accountName;
    BOOL _updating;
    GKInvite *_acceptedInvite;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _authenticationCompletionHandler;

    UIAlertView *_loginAlertView;
    UIWindow *_accountWindow;
    UINavigationController *_accountNavController;
}

@property(retain) NSMutableArray *emails;
@property(retain) NSString *accountName;
@property(retain) GKInvite *acceptedInvite;
@property(getter=isFindable) BOOL findable;
@property(retain) UIAlertView *loginAlertView;
@property(copy) ? *authenticationCompletionHandler;
@property(retain) GKInvite *acceptedInvite;
@property(retain) NSString *accountName;
@property(getter=isFindable) BOOL findable;
@property(retain) NSMutableArray *emails;
@property(retain) NSArray *friends;
@property(getter=isAuthenticated) BOOL authenticated;
@property(copy) NSString *status;

+ (void)filteredEmailsByCommunityMembership:(id)arg1 block:(id)arg2;
+ (id)localPlayer;

- (void)setAccountName:(id)arg1;
- (BOOL)isAuthenticated;
- (id)accountName;
- (id)init;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)setAcceptedInvite:(id)arg1;
- (id)friends;
- (void)setFindable:(BOOL)arg1;
- (id)authenticationCompletionHandler;
- (id)loginAlertView;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)setAuthenticated:(BOOL)arg1;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (BOOL)populateWithDictionary:(id)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (void)showAccountWindowForCreatingNewAccount:(BOOL)arg1;
- (void)removeAccountWindow;
- (void)accountViewControllerDidFinish:(id)arg1 accountCreated:(BOOL)arg2;
- (void)showAlertForTag:(NSUInteger)arg1;
- (void)setLoginAlertView:(id)arg1;
- (void)setAuthenticationCompletionHandler:(id)arg1;
- (id)acceptedInvite;
- (BOOL)isFindable;
- (id)emails;
- (void)setEmails:(id)arg1;
- (void)setFriends:(id)arg1;
- (void)authenticateWithoutLoginWithCompletionHandler:(id)arg1;
- (void)authenticateExistingAccountWithCompletionHandler:(id)arg1;
- (void)authenticateCurrentAccountWithCompletionHandler:(id)arg1;
- (void)authenticateExistingAccount:(id)arg1 password:(id)arg2 completionHandler:(id)arg3;
- (void)createNewAccountWithCompletionHandler:(id)arg1;
- (void)authorizeExistingAccountWithCompletionHandler:(id)arg1;
- (void)editAccountViewControllerWithCompletionHandler:(id)arg1;
- (void)signOutWithCompletionHandler:(id)arg1;
- (id)iTunesAccountName;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (void)cancelAuthentication;
- (void)sendFriendRequestToEmail:(id)arg1 message:(id)arg2 withCompletionHandler:(id)arg3;
- (void)sendFriendRequestToAlias:(id)arg1 message:(id)arg2 withCompletionHandler:(id)arg3;
- (void)addEmail:(id)arg1 verified:(BOOL)arg2;
- (void)setAvatar:(id)arg1 withDescription:(id)arg2 color:(id)arg3 block:(id)arg4;
- (void)loadFriendRequests:(id)arg1;
- (void)sendFriendRequest:(id)arg1 toPlayers:(id)arg2 block:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 block:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toEmailAddresses:(id)arg2 block:(id)arg3;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 block:(id)arg5;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)reset:(id)arg1;
- (void)daemonAcceptedGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)sendFriendRequestToPlayer:(id)arg1 withMessage:(id)arg2 withCompletionHandler:(id)arg3;
- (void)clearDetails;
- (void)setStatus:(id)arg1;

@end

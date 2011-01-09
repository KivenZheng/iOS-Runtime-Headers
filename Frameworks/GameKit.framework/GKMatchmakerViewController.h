/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKFriendPickerViewController, UILabel, GKMatchRequest, GKSession, UIActivityIndicatorView, UITableView, GKConnection, UIButton, UIView, <GKMatchmakerViewControllerDelegate>, NSArray, UINavigationController, UINavigationBar, GKInvite, NSMutableDictionary, NSMutableArray, GKReachability;



@interface GKMatchmakerViewController : UIViewController 
{
    <GKMatchmakerViewControllerDelegate> *_delegate;
    GKMatchRequest *_matchRequest;
    GKInvite *_acceptedInvite;
    BOOL _hosted;
    GKReachability *_reachability;
    BOOL _reachable;
    GKSession *_session;
    GKConnection *_connection;
    BOOL _loadingFriends;
    BOOL _sentAccept;
    BOOL _geniusMatching;
    UINavigationBar *_navBar;
    UIView *_navView;
    UILabel *_navTitleLabel;
    UILabel *_navPlayersLabel;
    UIActivityIndicatorView *_navSpinner;
    UIView *_matchingView;
    UIView *_backgroundView;
    UITableView *_friendTable;
    UILabel *_footerLabel;
    UIView *_addRemovePlayersView;
    UIButton *_addPlayerButton;
    UIButton *_removePlayerButton;
    NSMutableArray *_invitedFriends;
    NSMutableDictionary *_avatarImages;
    NSMutableDictionary *_ranks;
    NSMutableArray *_friendPlayers;
    NSArray *_playersToInvite;
    NSInteger _numberOfInvitesRemaining;
    NSInteger _numberAccepted;
    NSInteger _cancelIndex;
    GKFriendPickerViewController *_friendPicker;
    UINavigationController *_friendNavController;
}

@property(retain) NSMutableDictionary *ranks;
@property(copy) NSArray *playersToInvite;
@property(retain) GKSession *session;
@property(retain) GKConnection *connection;
@property(getter=isHosted) BOOL hosted;
@property(retain) GKInvite *acceptedInvite;
@property(retain) GKMatchRequest *matchRequest;
@property <GKMatchmakerViewControllerDelegate> *delegate;


- (void)reachabilityChanged:(id)arg1;
- (id)connection;
- (void)play;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)cancel;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)dealloc;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(NSInteger)arg3;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4;
- (id)session;
- (void)setSession:(id)arg1;
- (void)layoutSubviewsForInterfaceOrientation:(NSInteger)arg1;
- (void)loadImageForCellAtIndexPath:(id)arg1;
- (id)ranks;
- (id)initWithMatchRequest:(id)arg1;
- (id)initWithMatchRequest:(id)arg1 playersToInvite:(id)arg2;
- (id)initWithInvite:(id)arg1;
- (void)authenticatedStatusChanged;
- (void)loadFriends;
- (void)loadRanks;
- (void)resetUninvolvedPlayers;
- (void)updateNavViewLayoutForOrientation:(NSInteger)arg1;
- (void)showMatchingView;
- (void)removeMatchingView;
- (void)setPlayerRangeText;
- (void)setupForGeniusMatchmaking;
- (void)matchmakingDidCancel;
- (void)cancelGeniusMatchmaking;
- (id)friendWithPlayerID:(id)arg1;
- (NSInteger)indexOfPlayer:(id)arg1;
- (id)acceptedPlayers;
- (void)addPlayer;
- (void)removePlayer;
- (void)setHostedPlayerReady:(id)arg1;
- (void)acceptInvite;
- (BOOL)showAlertIfPendingInvites;
- (void)returnMatch:(id)arg1;
- (void)createAndReturnMatchWithSession:(id)arg1 matchedPlayerCount:(NSUInteger)arg2;
- (void)doneInvitingFindMorePlayers:(BOOL)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)showFriendPicker;
- (void)cancelInviteWithAlertSheetForPlayerAtIndex:(NSUInteger)arg1;
- (void)updateAddRemovePlayerButtons;
- (void)updateCellForPlayer:(id)arg1;
- (void)revertToEmptyPlayer:(id)arg1;
- (void)revertToEmptyPlayer:(id)arg1 animated:(BOOL)arg2;
- (void)failedToInvitePlayers:(id)arg1;
- (void)invitePlayers:(id)arg1 withMessage:(id)arg2 connectionData:(id)arg3;
- (void)invitePlayers:(id)arg1 withMessage:(id)arg2;
- (void)friendPickerViewController:(id)arg1 didFinishWithPlayers:(id)arg2 inviteMessage:(id)arg3;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)inviterCancelledNotification:(id)arg1;
- (void)sendStatusUpdate;
- (BOOL)haveConnectingPlayers;
- (void)playerConnected:(id)arg1;
- (void)playerDisconnected:(id)arg1;
- (void)setRanks:(id)arg1;
- (id)playersToInvite;
- (void)setPlayersToInvite:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setAcceptedInvite:(id)arg1;
- (void)setMatchRequest:(id)arg1;
- (void)setHosted:(BOOL)arg1;
- (id)matchRequest;
- (id)acceptedInvite;
- (BOOL)isHosted;
- (void)localPlayerAcceptedGameInvite:(id)arg1;

@end

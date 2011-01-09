/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableDictionary, IMMessage, NSString, NSDate, NSMutableArray, IMAccount;



@interface IMChat : NSObject <IMSecureObject>
{
    NSString *_guid;
    IMAccount *_account;
    NSString *_roomName;
    NSString *_roomNameWithoutSuffix;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSMutableArray *_chatItems;
    NSMutableDictionary *_unfinishedChatItemMap;
    NSMutableArray *_participants;
    NSMutableDictionary *_participantStates;
    IMMessage *_invitationForPendingParticipants;
    NSMutableArray *_messagesPendingJoin;
    NSMutableDictionary *_chatProperties;
    NSMutableDictionary *_participantProperties;
    NSInteger _securityLevel;
    NSUInteger _overallChatStatus;
    NSInteger _joinState;
    unsigned char _style;
    NSInteger _directConnectionStatus;
    double _joinedTimeInterval;
    NSUInteger _chatItemChangeCount;
    unsigned int _isFirstMessageInvitation : 1;
    unsigned int _wasInvitationHandled : 1;
    unsigned int _disabledEncryption : 1;
    NSUInteger _suppressEncryptionChatItems;
    unsigned int _didSendAFinishedMessage : 1;
    unsigned int _shouldAnnouncePeopleJoin : 1;
}


- (id)recipient;
- (void)setRecipient:(id)arg1;
- (id)account;
- (void)_handleIncomingMessage:(id)arg1;
- (void)setValue:(id)arg1 forChatProperty:(id)arg2;
- (id)invitationForPendingParticipants;
- (id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 directConnectionStatus:(NSInteger)arg4 roomName:(id)arg5 chatItems:(id)arg6 participants:(id)arg7;
- (void)_beginChatItemChanges;
- (void)_endChatItemChanges;
- (BOOL)_shouldDisplayInitialTypingIndicator;
- (id)_newInitialTypingIndicatorChatItem;
- (id)_dateStampForChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)_timeStampForChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_postChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_replaceChatItem:(id)arg1 withChatItem:(id)arg2;
- (NSUInteger)_insertChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_removeChatItem:(id)arg1 andTimestamp:(BOOL)arg2;
- (void)_appendChatItem:(id)arg1;
- (id)_newHeaderChatItemWithDate:(id)arg1;
- (void)_updateHeaderChatItem;
- (void)_buildInitialChatItems:(id)arg1;
- (void)_buildChatItemForDisconnectOrLogout;
- (void)_buildChatItemForDirectConnectionStatus:(NSInteger)arg1;
- (void)_buildChatItemForDecidingHandleWentOffline:(id)arg1;
- (void)_buildChatItemForOverallChatStatusFrom:(NSUInteger)arg1 to:(NSUInteger)arg2;
- (void)_buildChatItemForParticipantState:(NSInteger)arg1 handle:(id)arg2;
- (void)_buildChatItemForNewRecipient:(id)arg1 isNewAccount:(BOOL)arg2;
- (void)_buildChatItemForErrorMessage:(id)arg1;
- (void)_buildChatItemForSecurityLevelChangeFrom:(NSInteger)arg1 to:(NSInteger)arg2;
- (void)_removeInitialTypingIndicator;
- (void)_insertArchivedChatItems:(id)arg1;
- (BOOL)shouldInsertChatItem:(id)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)shouldAppendTimestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (BOOL)shouldAppendDatestampAfterChatItem:(id)arg1 andBeforeChatItem:(id)arg2;
- (void)processChatItem:(id)arg1;
- (id)chatItems;
- (void)mark;
- (void)_recomputeOverallChatStatusQuietly:(BOOL)arg1;
- (void)_handleHandleStatusChanged:(id)arg1;
- (void)_watchHandleStatusChangedForHandle:(id)arg1;
- (void)_unwatchHandleStatusChangedForHandle:(id)arg1;
- (void)_accountLoggedOut:(id)arg1;
- (void)_postNotification:(id)arg1 userInfo:(id)arg2;
- (void)_setParticipantState:(NSInteger)arg1 forHandle:(id)arg2;
- (void)_updateSecurityLevelForMessage:(id)arg1;
- (void)_setJoinState:(NSInteger)arg1;
- (void)_setDirectConnectionStatus:(NSInteger)arg1;
- (void)_participant:(id)arg1 statusChanged:(NSInteger)arg2;
- (void)_showErrorMessage:(id)arg1;
- (void)_remapHandle:(id)arg1 toHandle:(id)arg2;
- (void)_fixLastStatusMessageIfNecessary;
- (id)participantsWithState:(NSUInteger)arg1;
- (NSInteger)stateForParticipant:(id)arg1;
- (unsigned char)chatStyle;
- (id)chatIdentifier;
- (id)convertToChatStyle:(unsigned char)arg1;
- (BOOL)canHaveMultipleParticipants;
- (NSUInteger)overallChatStatus;
- (id)roomName;
- (id)roomNameWithoutSuffix;
- (id)dateModified;
- (BOOL)hasUnhandledInvitation;
- (BOOL)_isDuplicate:(id)arg1;
- (id)allChatProperties;
- (id)valueForChatProperty:(id)arg1;
- (id)allPropertiesOfParticipant:(id)arg1;
- (id)valueForProperty:(id)arg1 ofParticipant:(id)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3;
- (void)setSupressEncryptionChatItems:(BOOL)arg1;
- (BOOL)suppressEncryptionChatItems;
- (void)attemptDirectConnection;
- (NSInteger)directConnectionStatus;
- (void)leave;
- (NSInteger)joinState;
- (void)_addParticipant:(id)arg1;
- (void)inviteParticipants:(id)arg1 reason:(id)arg2;
- (void)removeParticipants:(id)arg1 reason:(id)arg2;
- (void)setInvitationForPendingParticipants:(id)arg1;
- (void)addPendingParticipants:(id)arg1;
- (BOOL)_shouldAnnouncePeopleJoin;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)join;
- (void)sendMessage:(id)arg1;
- (void)setSecurityLevel:(NSInteger)arg1;
- (NSInteger)securityLevel;
- (id)guid;
- (BOOL)canBeSecure;
- (id)participants;
- (id)dateCreated;
- (void)declineInvitation;
- (void)acceptInvitation;

@end

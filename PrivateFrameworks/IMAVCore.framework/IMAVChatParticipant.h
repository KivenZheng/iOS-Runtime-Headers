/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSOperationQueue, NSTimer, NSDictionary, NSString, IMAVChat, IMHandle, NSData;



@interface IMAVChatParticipant : NSObject 
{
    IMHandle *_imHandle;
    IMHandle *_inviter;
    IMAVChat *_avChat;
    NSString *_vcPartyID;
    NSString *_rawErrorString;
    NSString *_errorString;
    NSDictionary *_properties;
    NSData *_localICEData;
    NSData *_remoteICEData;
    NSOperationQueue *_messagingQueue;
    NSTimer *_connectTimeoutTimer;
    NSDictionary *_preemptiveRelayRequest;
    NSString *_conferenceID;
    struct __SecCertificate { } *_savedCertificate;
    NSInteger _ardRole;
    NSUInteger _state;
    NSInteger _avRelayStatus;
    NSUInteger _chatEndedReason;
    NSInteger _chatError;
    unsigned int _inviteDelivered : 1;
    unsigned int _sendingAudio : 1;
    unsigned int _sendingVideo : 1;
    unsigned int _sendingAuxVideo : 1;
    unsigned int _audioMuted : 1;
    unsigned int _videoPaused : 1;
    unsigned int _networkStalled : 1;
    unsigned int _isInitiator : 1;
    unsigned int _isAOLInterop : 1;
    unsigned int _isRecording : 1;
    unsigned int _vcSecurityVerified : 1;
    unsigned int _usingICE : 1;
}


- (BOOL)isRecording;
- (id)init;
- (id)name;
- (void)dealloc;
- (id)description;
- (void)setState:(NSUInteger)arg1;
- (NSUInteger)state;
- (void)setProperties:(id)arg1;
- (id)properties;
- (struct __SecCertificate { }*)certificate;
- (void)_setError:(NSInteger)arg1;
- (NSInteger)error;
- (void)setWaitingToConnect:(BOOL)arg1;
- (id)avChat;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(BOOL)arg3 sendingVideo:(BOOL)arg4 usingICE:(BOOL)arg5 toChat:(id)arg6 inState:(NSUInteger)arg7 withError:(NSInteger)arg8 andReason:(NSUInteger)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (BOOL)isInitiator;
- (id)remoteErrorParticipant;
- (void)_getErrorString:(id*)arg1 rawString:(id*)arg2 forError:(NSInteger)arg3;
- (void)_generateErrorStrings;
- (id)rawErrorString;
- (id)errorStringFor:(NSInteger)arg1;
- (void)_setAudioSendingState:(BOOL)arg1;
- (void)setSendingAudioToOtherParticipants:(BOOL)arg1;
- (void)_setVideoSendingState:(BOOL)arg1;
- (void)setSendingVideoToOtherParticipants:(BOOL)arg1;
- (BOOL)isSendingAuxVideo;
- (void)setSendingAuxVideo:(BOOL)arg1;
- (BOOL)isAudioMuted;
- (BOOL)isVideoPaused;
- (void)setVideoPaused:(BOOL)arg1;
- (void)setNetworkStalled:(BOOL)arg1;
- (void)setAOLInterop:(BOOL)arg1;
- (void)setRecording:(BOOL)arg1;
- (void)setAVRelayStatus:(NSInteger)arg1;
- (void)requestIconIfNecessary;
- (void)setRemoteICEData:(id)arg1;
- (id)rebuildLocalICEData;
- (void)_flushMessagesQueue;
- (void)_enqueueOperation:(id)arg1;
- (void)cancelInvitation;
- (void)resetWaitingToConnectTimer;
- (void)_connectTimeout:(id)arg1;
- (void)setStateToEndedWithReason:(NSUInteger)arg1 andError:(NSInteger)arg2;
- (void)_setState:(NSUInteger)arg1 withReason:(NSUInteger)arg2 andError:(NSInteger)arg3;
- (void)setARDRole:(NSInteger)arg1;
- (id)_preemptiveRelayInitate;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (id)initWithStatusNugget:(id)arg1 andChat:(id)arg2 account:(id)arg3;
- (void)setAudioMuted:(BOOL)arg1;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 ARDRole:(NSInteger)arg3 toChat:(id)arg4 account:(id)arg5;
- (void)_cancelMessagesQueue;
- (void)disconnectFromAVChat;
- (void)sendInvitation;
- (void)sendResponse:(NSUInteger)arg1;
- (BOOL)isLocalParticipant;
- (NSInteger)avRelayStatus;
- (BOOL)vcSecurityVerified;
- (id)errorString;
- (void)setVCPartyID:(id)arg1;
- (id)statusNugget;
- (void)sendVCUpdate;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (void)sendCounterProposal;
- (void)sendRelayProposal;
- (BOOL)isNetworkStalled;
- (id)remoteICEData;
- (id)getLocalICEData;
- (void)_handleIMAVResponse:(NSUInteger)arg1;
- (void)receivedRelayProposalRequestWithConnectionData:(id)arg1;
- (void)receivedRelayProposalAcceptWithConnectionData:(id)arg1;
- (void)setSavedCertificate:(struct __SecCertificate { }*)arg1;
- (void)setVCSecurityVerified:(BOOL)arg1;
- (void)_setPreemptiveRelayInitate:(id)arg1;
- (BOOL)isAOLInterop;
- (void)_setConferenceID:(id)arg1;
- (BOOL)isSendingAudio;
- (BOOL)isSendingVideo;
- (NSUInteger)reasonChatEnded;
- (BOOL)isUsingICE;
- (NSInteger)ardRole;
- (id)vcPartyID;
- (id)invitedBy;
- (id)imHandle;
- (void)_noteInviteDelivered;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKSendingProgressView, UIView, NSString, CKConversation, NSTimer, NSMutableSet;



@interface CKTranscriptStatusController : NSObject 
{
    UIView *_multipleRecipientTitleView;
    CKSendingProgressView *_statusView;
    NSString *_title;
    CKConversation *_conversation;
    float _lastVal;
    NSString *_lastMsg;
    NSTimer *_progressUpdateTimer;
    NSMutableSet *_currentMessages;
    BOOL _updatingProgress;
    BOOL _viewTitle;
    BOOL _finishingUp;
    id _delegate;
}

@property id delegate;
@property(copy) NSString *title;
@property(retain) CKConversation *conversation;


- (id)_title;
- (void)reset;
- (id)title;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)conversation;
- (void)setConversation:(id)arg1;
- (id)_localizedTitleForSendingPart:(NSInteger)arg1 ofPart:(NSInteger)arg2;
- (void)_updateTitle:(BOOL)arg1;
- (void)_hideName;
- (void)_updateNavItemTitleView:(BOOL)arg1;
- (void)_updateCurrentMessages;
- (void)_startUpdatingProgress;
- (void)_refreshNavigationItemView;
- (void)_refreshNavigationItemViewAnimate:(BOOL)arg1;
- (BOOL)_calcVals:(BOOL*)arg1;
- (void)_finishProgress;
- (void)_resetProgress;
- (id)_generateStatusTitle;
- (float)_generateVal;
- (id)_statusView;
- (void)brieflyShowName;
- (void)refresh;

@end

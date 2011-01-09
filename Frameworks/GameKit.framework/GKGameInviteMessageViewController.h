/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UILabel, NSString, <GKGameInviteMessageViewControllerDelegate>, UITextView;



@interface GKGameInviteMessageViewController : UIViewController 
{
    <GKGameInviteMessageViewControllerDelegate> *_delegate;
    NSString *_toPlayersString;
    UILabel *_toPlayersLabel;
    UITextView *_messageView;
}

@property(retain) NSString *toPlayersString;
@property <GKGameInviteMessageViewControllerDelegate> *delegate;


- (void)done;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)toPlayersString;
- (void)setToPlayersString:(id)arg1;
- (void)setPlayers:(id)arg1;

@end

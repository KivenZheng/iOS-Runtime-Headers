/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKInvite;



@interface GKDeclineGameInviteDataRequest : GKDataRequest 
{
    GKInvite *_invite;
    NSInteger _reason;
}

@property NSInteger reason;
@property(retain) GKInvite *invite;


- (id)key;
- (id)request;
- (void)dealloc;
- (NSInteger)reason;
- (void)setReason:(NSInteger)arg1;
- (void)setInvite:(id)arg1;
- (id)invite;

@end

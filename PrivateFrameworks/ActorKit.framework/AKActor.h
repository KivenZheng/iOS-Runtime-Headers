/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

@class AKMailbox;



@interface AKActor : NSObject <AKActor>
{
    AKMailbox *_mailbox;
}


- (id)send;
- (id)init;
- (void)dealloc;
- (id)deferredReply;
- (id)startMigrantDispatchQueue;
- (id)mailbox;
- (id)startThreadDispatchQueue;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSConditionLock;



@interface MFDAMailAccountConsumer : NSObject 
{
    NSConditionLock *_doneCondition;
}


- (id)init;
- (void)dealloc;
- (void)setDone:(BOOL)arg1;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;
- (void)waitUntilDone;

@end

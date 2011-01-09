/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSLock;



@interface SCRCTargetSelectorTimer : SCRCTargetSelector 
{
    struct __CFRunLoopTimer { } *_timer;
    id _key;
    BOOL _isCancelled;
    BOOL _isPending;
    id _object;
    NSLock *_lock;
}

+ (void)initialize;
+ (void)_runThread;

- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (void)dispatchAfterDelay:(double)arg1;
- (void)cancel;
- (void)invalidate;
- (void)dealloc;
- (BOOL)isCancelled;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (BOOL)isPending;
- (id)threadKey;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;

@end

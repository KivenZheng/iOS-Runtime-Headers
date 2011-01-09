/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */



@interface ITApplication : NSObject 
{
}

+ (id)sharedInstance;

- (void)registerForApplicationStateNotifications:(id)arg1 enteredBackgroundSelector:(SEL)arg2 enteringForegroundSelector:(SEL)arg3;
- (void)unregisterForApplicationStateNotifications:(id)arg1 enteredBackgroundSelector:(SEL)arg2 enteringForegroundSelector:(SEL)arg3;
- (id)newBackgroundTaskWithExpirationHandler:(id)arg1 debugInfo:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;

@end

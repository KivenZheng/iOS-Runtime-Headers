/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

@class NSSet;



@interface ASRuntimeFixMailAccount : NSObject <ASRuntimeFixProtocol>
{
    BOOL _shouldNotifyMobileMail;
    NSSet *_supportedMailClasses;
}


- (id)init;
- (void)dealloc;
- (NSInteger)fixBasicAccountIfNeeded:(id)arg1 loggingMessage:(id)arg2;
- (id)supportedAccountTypes;
- (BOOL)_cleanupAccountClass:(id)arg1;
- (void)accountsHaveBeenSaved:(BOOL)arg1;

@end

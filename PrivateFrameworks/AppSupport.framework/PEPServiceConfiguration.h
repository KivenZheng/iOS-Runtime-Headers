/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;



@interface PEPServiceConfiguration : NSObject 
{
    NSString *_cacheFilePath;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_postNotification;
- (void)_updateDefaults:(id)arg1;
- (void)registerNetworkDefaultsForAppID:(id)arg1;

@end

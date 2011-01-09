/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCredentialStorageInternal;



@interface NSURLCredentialStorage : NSObject 
{
    NSURLCredentialStorageInternal *_internal;
}

+ (id)sharedCredentialStorage;

- (id)allCredentials;
- (void)removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)credentialsForProtectionSpace:(id)arg1;
- (void)setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)defaultCredentialForProtectionSpace:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setCredential:(id)arg1 forProtectionSpace:(id)arg2;
- (id)_internalInit;

@end

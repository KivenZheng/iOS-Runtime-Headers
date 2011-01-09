/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData;



@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload 
{
    NSData *_pemData;
}

@property(readonly) NSData *pemData;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (void)dealloc;
- (id)description;
- (id)pemData;
- (struct __SecCertificate { }*)copyCertificate;
- (BOOL)isIdentity;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;

@end

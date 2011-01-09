/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, NSString, NSDictionary;



@interface MCWiFiPayload : MCPayload 
{
    NSString *_ssid;
    BOOL _hidden;
    NSString *_encryptionType;
    BOOL _isWEP;
    BOOL _isWPA;
    NSDictionary *_eapClientConfig;
    BOOL _passwordRequired;
    BOOL _usernameRequired;
    NSString *_password;
    NSString *_username;
    NSString *_certificateUUID;
    NSArray *_payloadCertificateAnchorUUID;
}

@property(readonly) NSArray *payloadCertificateAnchorUUID;
@property(readonly) NSString *certificateUUID;
@property(retain) NSString *password;
@property(readonly) BOOL passwordRequired;
@property(retain) NSString *username;
@property(readonly) BOOL usernameRequired;
@property(readonly) NSDictionary *eapClientConfig;
@property(readonly) BOOL isWPA;
@property(readonly) BOOL isWEP;
@property(readonly) NSString *encryptionType;
@property(readonly) BOOL isHidden;
@property(readonly) NSString *ssid;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (void)setUsername:(id)arg1;
- (id)password;
- (BOOL)isHidden;
- (void)dealloc;
- (id)description;
- (BOOL)passwordRequired;
- (BOOL)_configIsValid:(id)arg1 error:(id*)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(BOOL*)arg2;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(BOOL*)arg2;
- (id)payloadCertificateAnchorUUID;
- (id)certificateUUID;
- (BOOL)usernameRequired;
- (id)eapClientConfig;
- (BOOL)isWPA;
- (BOOL)isWEP;
- (id)encryptionType;
- (id)ssid;
- (id)subtitle1Description;
- (id)subtitle2Description;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)username;
- (void)setPassword:(id)arg1;

@end

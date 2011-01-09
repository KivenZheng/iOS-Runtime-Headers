/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;



@interface MCAPNInfo : NSObject 
{
    NSString *_apnName;
    NSString *_username;
    NSString *_password;
    NSString *_proxy;
    NSNumber *_proxyPort;
}

@property(retain) NSNumber *proxyPort;
@property(retain) NSString *proxy;
@property(retain) NSString *password;
@property(retain) NSString *username;
@property(retain) NSString *apnName;


- (void)setUsername:(id)arg1;
- (id)password;
- (void)dealloc;
- (id)description;
- (id)strippedDefaultsRepresentation;
- (id)defaultsRepresentation;
- (void)setProxyPort:(id)arg1;
- (void)setProxy:(id)arg1;
- (id)apnName;
- (void)setApnName:(id)arg1;
- (id)proxyPort;
- (id)proxy;
- (id)username;
- (void)setPassword:(id)arg1;

@end

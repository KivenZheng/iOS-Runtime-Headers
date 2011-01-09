/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSData;



@interface _MFDigestMD5Authenticator : MFSASLAuthenticator 
{
    unsigned int _maxbuf : 16;
    unsigned int _securityLevel : 2;
    NSData *_expectedResponse;
    void *_cryptInfo;
}


- (void)dealloc;
- (void)setSecurityLevel:(NSInteger)arg1;
- (NSInteger)securityLevel;
- (void)setMaxBuffer:(NSUInteger)arg1;
- (void)setCryptInfo:(void*)arg1;
- (void)setExpectedResponse:(id)arg1;
- (void)setAuthenticationState:(NSInteger)arg1;
- (id)responseForServerData:(id)arg1;

@end

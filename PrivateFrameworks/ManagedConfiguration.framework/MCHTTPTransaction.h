/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSError, NSString, NSData, NSMutableData, NSURLConnection, NSURL;



@interface MCHTTPTransaction : NSObject 
{
    NSURL *_requestURL;
    NSString *_method;
    double _timeout;
    NSString *_userAgent;
    NSString *_contentType;
    NSData *_data;
    struct __SecIdentity { } *_identity;
    NSString *_CMSSignatureHeaderName;
    NSURL *_currentURL;
    NSURL *_permanentlyRedirectedURL;
    BOOL _rememberData;
    NSMutableData *_responseData;
    NSInteger _statusCode;
    NSError *_error;
    NSURLConnection *_connection;
    struct dispatch_semaphore_s { } *_doneSema;
}

@property(readonly) NSInteger statusCode;
@property(readonly) NSURL *permanentlyRedirectedURL;
@property(readonly) NSError *error;
@property(retain) NSString *CMSSignatureHeaderName;
@property(readonly) NSData *responseData;
@property(retain) NSData *data;
@property(retain) NSString *contentType;
@property(retain) NSString *userAgent;
@property double timeout;
@property(retain) NSString *method;
@property(retain) NSURL *url;

+ (id)transactionWithURL:(id)arg1 method:(id)arg2;
+ (id)performRequestURL:(id)arg1 method:(id)arg2 timeout:(double)arg3 userAgent:(id)arg4 contentType:(id)arg5 data:(id)arg6 identity:(struct __SecIdentity { }*)arg7 outPermanentlyRedirectedURL:(id*)arg8 outError:(id*)arg9;

- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)method;
- (NSInteger)statusCode;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)data;
- (void)dealloc;
- (id)contentType;
- (void)setMethod:(id)arg1;
- (void)setData:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (id)CMSSignatureHeaderName;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (void)_beginTransaction;
- (BOOL)_shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (id)permanentlyRedirectedURL;
- (void)setCMSSignatureHeaderName:(id)arg1;
- (id)responseData;
- (struct __SecIdentity { }*)copyIdentity;
- (void)setContentType:(id)arg1;
- (id)userAgent;
- (void)performSynchronously;
- (void)setUserAgent:(id)arg1;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (id)error;

@end

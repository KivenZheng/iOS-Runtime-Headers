/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAuthenticationContext;



@interface SSAuthenticateRequest : SSRequest 
{
    SSAuthenticationContext *_authenticationContext;
}

@property(readonly) SSAuthenticationContext *authenticationContext;
@property <SSAuthenticateRequestDelegate> *delegate;


- (id)initWithAuthenticationContext:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)authenticationContext;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)handleFailureResponse:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;

@end

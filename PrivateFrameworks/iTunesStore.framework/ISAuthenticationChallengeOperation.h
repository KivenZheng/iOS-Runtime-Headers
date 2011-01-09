/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISAuthenticationChallenge;



@interface ISAuthenticationChallengeOperation : ISDialogOperation 
{
    ISAuthenticationChallenge *_challenge;
}

@property(retain) ISAuthenticationChallenge *challenge;

+ (id)operationWithChallenge:(id)arg1;

- (id)_copyCredentialForSignInResponseDictionary:(id)arg1;
- (void)handleButtonSelected:(NSInteger)arg1 withResponseDictionary:(id)arg2;
- (void)setChallenge:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)challenge;

@end

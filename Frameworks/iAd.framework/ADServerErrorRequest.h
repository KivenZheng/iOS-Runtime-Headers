/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADAdResponse;



@interface ADServerErrorRequest : PBRequest 
{
    ADAdResponse *_badResponse;
    NSInteger _errorCode;
    BOOL _hasErrorCode;
}

@property(readonly) BOOL hasBadResponse;
@property(readonly) BOOL hasErrorCode;
@property NSInteger errorCode;
@property(retain) ADAdResponse *badResponse;


- (NSInteger)errorCode;
- (void)writeTo:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (NSUInteger)requestTypeCode;
- (Class)responseClass;
- (BOOL)hasBadResponse;
- (id)badResponse;
- (void)setBadResponse:(id)arg1;
- (BOOL)hasErrorCode;
- (void)setErrorCode:(NSInteger)arg1;

@end

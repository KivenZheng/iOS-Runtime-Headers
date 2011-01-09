/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;



@interface DAMailboxSetFlagsRequest : DAMailboxRequest 
{
    unsigned long long _onFlags;
    unsigned long long _offFlags;
    NSString *_messageID;
}


- (void)dealloc;
- (id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3;
- (id)messageID;
- (unsigned long long)onFlags;
- (unsigned long long)offFlags;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSData, NSString, IMHandle;



@interface AVChatUpdateOp : IMExtendedOperation 
{
    IMHandle *_imHandle;
    NSString *_conferenceID;
    NSData *_updateData;
}


- (void)dealloc;
- (id)initWithIMHandle:(id)arg1 data:(id)arg2 avChat:(id)arg3;
- (void)didFinish;

@end

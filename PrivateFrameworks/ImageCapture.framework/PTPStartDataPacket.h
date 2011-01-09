/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */



@interface PTPStartDataPacket : NSObject 
{
    NSUInteger _transactionID;
    NSUInteger _totalDataSize;
}


- (id)description;
- (id)initWithTransactionID:(unsigned long)arg1 totalDataSize:(unsigned long)arg2;
- (void)setTotalDataSize:(unsigned long)arg1;
- (id)contentForTCP;
- (unsigned long)transactionID;
- (void)setTransactionID:(unsigned long)arg1;
- (id)initWithTCPBuffer:(void*)arg1;
- (unsigned long)totalDataSize;

@end

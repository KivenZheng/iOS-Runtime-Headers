/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@class NSString;



@interface SCRDUSBDevice : NSObject 
{
    struct IOUSBDeviceStruct300 {} **_device;
    struct IOUSBInterfaceStruct220 {} **_interface;
    BOOL _isOpen;
    BOOL _isConfigured;
    NSString *_privateRunLoopMode;
    struct IONotificationPort { } *_notificationPort;
    NSUInteger _notification;
}


- (BOOL)setConfiguration:(unsigned char)arg1;
- (BOOL)setInterface:(unsigned char)arg1;
- (BOOL)reset;
- (void)dealloc;
- (BOOL)isOpen;
- (BOOL)close;
- (BOOL)isConfigured;
- (id)initWithIOObject:(NSUInteger)arg1;
- (BOOL)openWithSeize:(BOOL)arg1;
- (long)vendor;
- (long)product;
- (unsigned char)numberOfConfigurations;
- (BOOL)setAlternateInterface:(unsigned char)arg1;
- (BOOL)sendControlRequest:(unsigned char)arg1 type:(unsigned char)arg2 value:(unsigned short)arg3 index:(unsigned short)arg4 data:(void*)arg5 size:(unsigned short)arg6 sizeTransferred:(NSUInteger*)arg7 pipe:(unsigned char)arg8 timeout:(double)arg9;
- (unsigned long)writeData:(void*)arg1 withSize:(unsigned long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4;
- (BOOL)writeData:(void*)arg1 withSize:(unsigned long)arg2 toBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned long)arg4 andCompletionTimeOut:(unsigned long)arg5;
- (unsigned long)readData:(void*)arg1 withSize:(unsigned long)arg2 fromPipe:(unsigned char)arg3 withTimeout:(double)arg4;
- (BOOL)readData:(void*)arg1 withSize:(NSUInteger*)arg2 fromPipe:(unsigned char)arg3;
- (unsigned long)readData:(void*)arg1 withSize:(unsigned long)arg2 fromBulkPipe:(unsigned char)arg3 withNoDataTimeout:(unsigned long)arg4 andCompletionTimeOut:(unsigned long)arg5;
- (unsigned long)_transferData:(void*)arg1 withSize:(unsigned long)arg2 toPipe:(unsigned char)arg3 withTimeout:(double)arg4 withFunction:(int (*)())arg5;
- (BOOL)getInformationForPipe:(unsigned char)arg1 direction:(char *)arg2 number:(char *)arg3 transferType:(char *)arg4 maxPacketSize:(unsigned short*)arg5 interval:(char *)arg6;
- (void)registerForDisconnectNotifications:(BOOL)arg1;
- (void)abortPipe:(unsigned char)arg1;
- (BOOL)clearPipe:(unsigned char)arg1 bothEnds:(BOOL)arg2;
- (BOOL)open;

@end

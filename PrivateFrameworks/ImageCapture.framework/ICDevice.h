/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */



@interface ICDevice : NSObject 
{
    void *_deviceProperties;
}

@property <ICDeviceDelegate> *delegate;
@property(copy) NSString *name;
@property(copy) NSString *productKind;
@property(readonly) CGImage *icon;
@property(copy) NSString *transportType;
@property(copy) NSString *UUIDString;
@property BOOL hasOpenSession;
@property NSInteger usbLocationID;
@property NSInteger usbProductID;
@property NSInteger usbVendorID;
@property DeviceManager *deviceManager;
@property BOOL autoOpenSession;
@property BOOL openSessionPending;
@property BOOL closeSessionPending;


- (id)transportType;
- (id)productKind;
- (void)requestOpenSession;
- (void)setName:(id)arg1;
- (struct CGImage { }*)icon;
- (void)finalize;
- (id)init;
- (id)name;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)UUIDString;
- (void)setDeviceManager:(id)arg1;
- (void)setUsbLocationID:(NSInteger)arg1;
- (void)setUsbProductID:(NSInteger)arg1;
- (void)setUUIDString:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setProductKind:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)setHasOpenSession:(BOOL)arg1;
- (void)setAutoOpenSession:(BOOL)arg1;
- (id)deviceManager;
- (BOOL)closeSessionPending;
- (BOOL)autoOpenSession;
- (NSInteger)usbLocationID;
- (NSInteger)usbProductID;
- (NSInteger)usbVendorID;
- (void)setUsbVendorID:(NSInteger)arg1;
- (BOOL)hasOpenSession;
- (BOOL)openSessionPending;
- (void)setOpenSessionPending:(BOOL)arg1;
- (void)setCloseSessionPending:(BOOL)arg1;
- (void)requestCloseSession;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)isCameraDevice;

@end

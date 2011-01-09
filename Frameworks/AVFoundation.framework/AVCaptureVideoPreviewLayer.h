/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureVideoPreviewLayerInternal;



@interface AVCaptureVideoPreviewLayer : CALayer 
{
    AVCaptureVideoPreviewLayerInternal *_internal;
}

@property(retain) AVCaptureSession *session;
@property(copy) NSString *videoGravity;
@property(getter=isOrientationSupported,readonly) BOOL orientationSupported;
@property NSInteger orientation;
@property(getter=isMirroringSupported,readonly) BOOL mirroringSupported;
@property BOOL automaticallyAdjustsMirroring;
@property(getter=isMirrored) BOOL mirrored;

+ (void)initialize;
+ (id)layerWithSession:(id)arg1;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setOrientation:(NSInteger)arg1;
- (NSInteger)orientation;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)centerSublayer;
- (id)subLayer;
- (void)setVideoGravity:(id)arg1;
- (BOOL)isOrientationSupported;
- (BOOL)isMirroringSupported;
- (BOOL)automaticallyAdjustsMirroring;
- (void)setAutomaticallyAdjustsMirroring:(BOOL)arg1;
- (BOOL)isMirrored;
- (void)setMirrored:(BOOL)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (id)connectionMediaTypes;
- (id)activeConnections;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (id)notReadyError;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (id)videoGravity;
- (void)layoutSublayers;
- (id)initWithSession:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)connections;

@end

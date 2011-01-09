/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureSessionInternal;



@interface AVCaptureSession : NSObject 
{
    AVCaptureSessionInternal *_internal;
}

@property(copy) NSString *sessionPreset;
@property(readonly) NSArray *inputs;
@property(readonly) NSArray *outputs;
@property(getter=isRunning,readonly) BOOL running;
@property(getter=isInterrupted,readonly) BOOL interrupted;

+ (void)initialize;
+ (id)avCaptureSessionPlist;

- (void)setVideoPreviewLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct OpaqueFigRecorder { }*)recorder;
- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (void)_teardownFigRecorder;
- (BOOL)canSetSessionPreset:(id)arg1;
- (id)sessionPreset;
- (void)setSessionPreset:(id)arg1;
- (void)beginConfiguration;
- (void)commitConfiguration;
- (BOOL)isBeingConfigured;
- (id)inputWithClass:(Class)arg1;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (BOOL)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (void)removeInput:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (void)removeOutput:(id)arg1;
- (id)videoPreviewLayer;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (BOOL)canAddConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (BOOL)isInterrupted;
- (void)_setInterrupted:(BOOL)arg1;
- (void)startRunning;
- (void)stopRunning;
- (BOOL)isPreviewing;
- (BOOL)_startPreviewing;
- (BOOL)_stopPreviewing;
- (void)_setRunning:(BOOL)arg1;
- (void)_rebuildGraph;
- (void)videoPreviewLayerPropertiesChanged;
- (long)_createRecorderIfNeeded;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (void)_rebuildInternalCaptureOptions;
- (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(NSInteger*)arg4;
- (id)_applyOutputOverridesToCaptureOptions:(id)arg1;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (id)_figRecorderOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (id)_connectionsForNewInputPort:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (void)_beginSessionUpdates;
- (void)_endSessionUpdates;
- (id)_stopError;
- (void)_postRuntimeError:(id)arg1;
- (BOOL)_connectionIsActive:(id)arg1;
- (void)_doDidStart;
- (void)_doDidStop:(id)arg1;
- (BOOL)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(BOOL*)arg3;
- (void)_buildAndRunGraph;
- (void)_stopAndTearDownGraph;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (id)inputs;
- (id)captureOptions;
- (void)removeConnection:(id)arg1;
- (id)outputWithClass:(Class)arg1;
- (id)outputs;
- (BOOL)canAddOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (BOOL)isRunning;

@end

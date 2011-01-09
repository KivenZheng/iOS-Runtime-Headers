/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureMovieFileOutputInternal;



@interface AVCaptureMovieFileOutput : AVCaptureFileOutput 
{
    AVCaptureMovieFileOutputInternal *_internal;
}

@property ? movieFragmentInterval;
@property(copy) NSArray *metadata;

+ (void)initialize;
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)arg1;
+ (BOOL)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;
+ (BOOL)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;

- (BOOL)isRecording;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)stopRecording;
- (id)init;
- (void)dealloc;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)connectionMediaTypes;
- (void)didStopForSession:(id)arg1 error:(id)arg2;
- (BOOL)getRecorderBoolForKey:(id)arg1 withDefault:(BOOL)arg2;
- (void)setMovieFragmentInterval:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (long)_avErrorForDidStopRecordingReason:(id)arg1;
- (void)_handleStartRecordingErrorWithDomain:(id)arg1 code:(long)arg2 info:(id)arg3;
- (long)_startRecording:(id)arg1;
- (long)_stopRecording;
- (id)outputFileURL;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (BOOL)isRecordingPaused;
- (void)pauseRecording;
- (void)resumeRecording;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })movieFragmentInterval;

@end

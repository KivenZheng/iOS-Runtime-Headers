/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterSampleBufferInputInternal;



@interface AVAssetWriterSampleBufferInput : AVAssetWriterInput 
{
    AVAssetWriterSampleBufferInputInternal *_sampleBufferInputInternal;
}

+ (id)assetWriterSampleBufferInputWithMediaType:(id)arg1 mediaFileType:(id)arg2 outputSettings:(id)arg3;

- (BOOL)canAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKImageData;



@interface CKCompressibleImageMediaObject : CKMediaObject 
{
    CKImageData *_imageData;
}

+ (id)mimeTypesToFileExtensions;
+ (id)previewDataMIMEType;
+ (struct CGSize { float x1; float x2; })transcodeMaxSize;

- (NSInteger)mediaType;
- (void)dealloc;
- (id)imageData;
- (float)balloonHeightWithPreviewData:(id)arg1;
- (id)newTranscodingForMMSWithMaxByteLength:(NSInteger)arg1;
- (id)newPreview:(NSInteger)arg1 highlight:(BOOL)arg2;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (id)_newTranscodedMediaObjectWithMaxByteLength:(NSInteger)arg1;
- (BOOL)shouldTranscodeForMMS;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (void)copyToPasteboard:(id)arg1;
- (BOOL)shouldGeneratePreviewInBackground;

@end

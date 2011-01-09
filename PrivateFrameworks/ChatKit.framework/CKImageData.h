/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSData;



@interface CKImageData : NSObject 
{
    struct CGImageSource { } *_imageSource;
    NSData *_data;
}

@property(readonly) NSData *data;


- (id)imageType;
- (id)mimeType;
- (id)image;
- (struct CGSize { float x1; float x2; })size;
- (id)data;
- (NSInteger)imageOrientation;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (NSInteger)imageCount;
- (id)_newImageWithMaxLength:(NSInteger)arg1 transformOrientation:(BOOL)arg2;
- (struct CGImage { }*)_newCGImageWithMaxLength:(NSInteger)arg1 transformOrientation:(BOOL)arg2;
- (struct CGImageSource { }*)_imageSource;
- (id)jpegDataWithMaxLength:(NSInteger)arg1 compression:(float)arg2;
- (id)pngDataWithMaxLength:(NSInteger)arg1;
- (id)imageWithMaxLength:(NSInteger)arg1;

@end

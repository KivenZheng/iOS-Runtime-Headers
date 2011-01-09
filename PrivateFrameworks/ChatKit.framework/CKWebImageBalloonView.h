/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView;



@interface CKWebImageBalloonView : CKWebBalloonView 
{
    struct CGSize { 
        float width; 
        float height; 
    } _originalImageSize;
    UIImageView *_stillImage;
}

@property CGSize originalImageSize;

+ (struct CGPoint { float x1; float x2; })offsetForBubbleInsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (float)additionalHeightForBubbleWhenInsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;

- (void)setText:(id)arg1;
- (void)dealloc;
- (void)setStillImage:(id)arg1;
- (struct CGSize { float x1; float x2; })originalImageSize;
- (void)setImage:(id)arg1 mimeType:(id)arg2;
- (void)setImageWithFilename:(id)arg1;
- (id)_htmlForImageWithFilename:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)_htmlForImageWithData:(id)arg1 mimeType:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (struct CGSize { float x1; float x2; })_scaledImageSize;
- (void)_wvSetHTML:(id)arg1;
- (void)setOriginalImageSize:(struct CGSize { float x1; float x2; })arg1;
- (float)tightenedWidth;
- (float)heightForWidth:(float)arg1;
- (void)tighten;

@end

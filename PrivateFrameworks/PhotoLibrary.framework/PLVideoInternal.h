/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVController, AVItem, NSString, NSURL;



@interface PLVideoInternal : MLPhotoMemoryStorage 
{
    NSURL *_url;
    AVController *_avController;
    AVItem *_avItem;
    NSString *_temporaryPath;
    NSString *_previewImagePath;
    unsigned int _canCreateImages : 1;
    unsigned int _previewImageIsTemporary : 1;
    NSUInteger _videoWasCaptured;
}


- (id)pathForVideoPreviewFile;
- (NSInteger)imageID;
- (BOOL)isVideo;
- (id)imageWithFormat:(NSInteger)arg1;
- (void)deletePreviewImageIfNecessary;
- (id)createLowResolutionFullScreenImage;
- (id)createFullScreenImage:(const struct __CFDictionary {}**)arg1;
- (id)createFullSizeImage;
- (id)_createImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_ensureAVItemIsLoaded;
- (void)setPathForVideoPreviewFile:(id)arg1;
- (void)setVideoWasCaptured:(BOOL)arg1;
- (BOOL)hasFullSizeImage;
- (id)title;
- (void)dealloc;

@end

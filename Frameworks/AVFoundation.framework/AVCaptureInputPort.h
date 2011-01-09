/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureInputPortInternal;



@interface AVCaptureInputPort : NSObject 
{
    AVCaptureInputPortInternal *_internal;
}

@property(readonly) AVCaptureInput *input;
@property(readonly) NSString *mediaType;
@property(readonly) opaqueCMFormatDescription *formatDescription;
@property(getter=isEnabled) BOOL enabled;

+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;

- (id)mediaType;
- (id)input;
- (BOOL)isEnabled;
- (id)init;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (void)setOwner:(id)arg1;
- (id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription { }*)arg3 enabled:(BOOL)arg4;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (struct opaqueCMFormatDescription { }*)formatDescription;

@end

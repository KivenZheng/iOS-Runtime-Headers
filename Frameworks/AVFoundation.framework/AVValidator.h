/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVValidatorInternal;



@interface AVValidator : NSObject 
{
    AVValidatorInternal *_priv;
}

@property(readonly) NSInteger status;
@property(readonly) BOOL resourceIsInspectable;
@property(readonly) BOOL resourceIsPlayable;
@property(readonly) NSURL *resolvedURL;
@property(readonly) NSURL *initialURL;
@property(readonly) float progress;

+ (void)initialize;
+ (BOOL)_containsStreamingResource:(id)arg1;
+ (BOOL)isSupportedMIMEType:(id)arg1;
+ (BOOL)isSupportedType:(id)arg1;
+ (BOOL)isSupportedURL:(id)arg1;
+ (BOOL)isPlayableResource:(id)arg1;

- (NSInteger)status;
- (id)initWithURL:(id)arg1;
- (float)progress;
- (void)dealloc;
- (void)validateAsynchronouslyWithCompletionHandler:(id)arg1;
- (id)initialURL;
- (BOOL)resourceIsInspectable;
- (BOOL)resourceIsPlayable;
- (id)resolvedURL;
- (void)cancelValidation;

@end

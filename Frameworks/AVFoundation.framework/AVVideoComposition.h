/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVVideoCompositionInternal;



@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying>
{
    AVVideoCompositionInternal *_videoComposition;
}

@property(readonly) ? frameDuration;
@property(readonly) CGSize renderSize;
@property(readonly) float renderScale;
@property(copy,readonly) NSArray *instructions;
@property(retain,readonly) AVVideoCompositionCoreAnimationTool *animationTool;


- (id)instructions;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (void)setCompositor:(id)arg1;
- (void)setFrameDuration:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1;
- (void)setRenderSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRenderScale:(float)arg1;
- (void)setInstructions:(id)arg1;
- (id)animationTool;
- (void)setAnimationTool:(id)arg1;
- (NSInteger)_auxiliaryTrackID;
- (BOOL)_hasPostProcessingLayers;
- (BOOL)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayer;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })frameDuration;
- (struct CGSize { float x1; float x2; })renderSize;
- (float)renderScale;
- (id)_serializableInstructions;
- (id)compositor;
- (BOOL)_isValid;

@end

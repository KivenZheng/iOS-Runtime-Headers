/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAudioMixInputParametersInternal;



@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInputParametersInternal *_inputParameters;
}

@property(readonly) NSInteger trackID;


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (BOOL)getVolumeRampForTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg1 startVolume:(float*)arg2 endVolume:(float*)arg3 timeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; }*)arg4;
- (void)_setRamps:(id)arg1;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(struct { struct { long long x_1_1_1; NSInteger x_1_1_2; NSUInteger x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; NSInteger x_2_1_2; NSUInteger x_2_1_3; long long x_2_1_4; } x2; })arg3;
- (void)setVolume:(float)arg1 atTime:(struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })arg2;
- (void)setTrackID:(NSInteger)arg1;
- (id)_audioVolumeCurve;
- (NSInteger)trackID;

@end

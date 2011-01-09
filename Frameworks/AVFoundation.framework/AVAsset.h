/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInternal;



@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetInternal *_assetInternal;
}

@property(readonly) ? duration;
@property(readonly) float preferredRate;
@property(readonly) float preferredVolume;
@property(readonly) CGAffineTransform preferredTransform;
@property(readonly) CGSize naturalSize;

+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingNaturalSize;

- (id)lyrics;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (void)release;
- (void)dealloc;
- (float)preferredVolume;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)availableMetadataFormats;
- (id)trackReferences;
- (BOOL)providesPreciseDurationAndTiming;
- (NSInteger)naturalTimeScale;
- (NSInteger)unusedTrackID;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)trackWithTrackID:(NSInteger)arg1;
- (id)_weakReference;
- (NSInteger)statusOfValueForKey:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)commonMetadata;
- (id)metadataForFormat:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (float)preferredRate;
- (NSInteger)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (id)alternateTrackGroups;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (void)_serverHasDied;
- (void)_tracksDidChange;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (void)cancelLoading;
- (id)tracks;
- (struct __CFURL { }*)_URL;

@end

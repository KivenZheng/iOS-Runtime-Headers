/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */



@interface AVAssetInspector : NSObject <NSCopying>
{
}

@property(readonly) ? duration;
@property(readonly) float preferredRate;
@property(readonly) float preferredVolume;
@property(readonly) CGAffineTransform preferredTransform;
@property(readonly) CGSize naturalSize;
@property(readonly) NSInteger naturalTimeScale;
@property(readonly) BOOL providesPreciseDurationAndTiming;
@property(readonly) NSInteger trackCount;
@property(readonly) NSArray *alternateTrackGroups;
@property(readonly) NSDictionary *trackReferences;
@property(readonly) NSString *lyrics;
@property(readonly) NSArray *commonMetadata;
@property(readonly) NSArray *availableMetadataFormats;


- (id)lyrics;
- (struct CGSize { float x1; float x2; })naturalSize;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })duration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_stringForProperty:(struct __CFString { }*)arg1;
- (float)preferredVolume;
- (id)availableMetadataFormats;
- (id)trackReferences;
- (BOOL)providesPreciseDurationAndTiming;
- (NSInteger)naturalTimeScale;
- (struct { long long x1; NSInteger x2; NSUInteger x3; long long x4; })_CMTimeForProperty:(struct __CFString { }*)arg1;
- (float)_floatForProperty:(struct __CFString { }*)arg1;
- (long)_SInt32ForProperty:(struct __CFString { }*)arg1;
- (unsigned char)_booleanForProperty:(struct __CFString { }*)arg1;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString { }*)arg1;
- (id)_arrayForProperty:(struct __CFString { }*)arg1;
- (id)_dictionaryForProperty:(struct __CFString { }*)arg1;
- (void*)_propertyAccessor:(struct __CFString { }*)arg1;
- (long)trackCount;
- (id)commonMetadata;
- (id)metadataForFormat:(id)arg1;
- (float)preferredRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (id)alternateTrackGroups;

@end

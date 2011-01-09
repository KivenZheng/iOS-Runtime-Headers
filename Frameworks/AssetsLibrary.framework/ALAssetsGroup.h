/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */



@interface ALAssetsGroup : NSObject 
{
    id _internal;
}

@property(retain) ALAssetsGroupPrivate *internal;


- (struct CGImage { }*)posterImage;
- (BOOL)isValid;
- (id)valueForProperty:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithPhotoAlbum:(id)arg1 library:(id)arg2 type:(NSUInteger)arg3;
- (void)setAssetsFilter:(id)arg1;
- (NSInteger)numberOfAssets;
- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3;
- (void)enumerateAssetsUsingBlock:(id)arg1;
- (void)enumerateAssetsWithOptions:(NSUInteger)arg1 usingBlock:(id)arg2;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3;
- (id)_typeAsString;

@end

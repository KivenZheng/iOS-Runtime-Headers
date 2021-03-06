/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider> {
    CNCache * _cache;
}

@property (nonatomic, readonly) CNCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)imageNameForDiameter:(float)arg1;

- (void).cxx_destruct;
- (struct CGImage { }*)_cnui_imageForSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_cnui_likenessForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_cnui_likenessForSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (unsigned int)_cnui_likenessType;
- (id)cache;
- (id)init;
- (struct CGImage { }*)renderImageForSilhouetteImage:(struct CGImage { }*)arg1 size:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3;

@end

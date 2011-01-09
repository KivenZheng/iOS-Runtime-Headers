/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDAContent;



@interface WMOfficeArtMapper : CMDrawableMapper 
{
    BOOL mFloating;
    BOOL mIsMapped;
    BOOL mIsInsideGroup;
    WDAContent *mContent;
    NSUInteger mCurrentPage;
}


- (void)setCurrentPage:(NSUInteger)arg1;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (BOOL)isInsideGroup;
- (void)setIsInsideGroup:(BOOL)arg1;
- (id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 origin:(struct CGPoint { float x1; float x2; })arg3 parent:(id)arg4;
- (void)setWithClientData:(id)arg1 state:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (struct CGSize { float x1; float x2; })expandedSizeForTextBox:(id)arg1 withState:(id)arg2;
- (id)blipAtIndex:(NSUInteger)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end

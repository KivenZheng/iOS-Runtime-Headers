/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */



@interface CPLayoutArea : CPRegion 
{
    BOOL isFirstLayout;
}


- (id)init;
- (id)description;
- (id)properties;
- (BOOL)isGraphicalRegion;
- (BOOL)isRowRegion;
- (BOOL)isImageRegion;
- (BOOL)isSimilarTo:(id)arg1;
- (BOOL)isInMainFlow;
- (void)setIsFirstLayout:(BOOL)arg1;
- (void)addColumnBreaks;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutAreaBounds;
- (BOOL)isFirstLayout;
- (BOOL)isBoxRegion;
- (void)setIsImageRegion:(BOOL)arg1;
- (BOOL)isShapeRegion;
- (float)selectionBottom;
- (void)accept:(id)arg1;

@end

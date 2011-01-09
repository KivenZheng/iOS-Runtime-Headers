/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;



@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper 
{
    NSMutableDictionary *mNodeInfoMap;
    BOOL mIsLayered;
}


- (void)dealloc;
- (struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)mapRangesForNode:(id)arg1;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (struct CGSize { float x1; float x2; })sizeForNode:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)setUpLayers;
- (id)infoForNode:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForNode:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector { struct ODIHRange {} *x1; struct ODIHRange {} *x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)arg1;
- (void)createInfoForNode:(id)arg1 depth:(NSInteger)arg2;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(NSInteger)arg2 parentXOffset:(float)arg3 index:(NSInteger)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end

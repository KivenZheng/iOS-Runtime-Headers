/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface CMShapeUtils : NSObject 
{
}

+ (id)transformFromBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toOrientedBounds:(id)arg2;
+ (double)mapAdjustCoord:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg1 geometry:(id)arg2;
+ (void)setCoordSpaceForCustomeGeometry:(id)arg1 fromSize:(struct CGSize { float x1; float x2; })arg2;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (double)mapFormulaOfType:(NSInteger)arg1 argValues:(double*)arg2 isEscher:(BOOL)arg3;
+ (double)getFormulaResultFromCustomGeometry:(id)arg1 atIndex:(NSUInteger)arg2;
+ (double)nativeAngleToRad:(long)arg1 isEscher:(BOOL)arg2;
+ (long)radToNativeAngle:(double)arg1 isEscher:(BOOL)arg2;
+ (double)fixedPointDegToRad:(long)arg1;
+ (double)fixedPointDegToRad:(long)arg1;
+ (long)radToFixedPointDeg:(double)arg1;
+ (long)radToFixedPointDeg:(double)arg1;
+ (double)milliMinutesToRad:(long)arg1;
+ (long)radToMilliMinutes:(double)arg1;
+ (float)normalizedAngle:(float)arg1;
+ (long)mapFormulaKeywordValue:(NSInteger)arg1 geometry:(id)arg2;
+ (BOOL)isShapeALine:(id)arg1;
+ (id)transformedBoundsWithBounds:(id)arg1 transform:(id)arg2;
+ (id)internalBoundsWithBounds:(id)arg1 scaleBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)inscribedBoundsWithBounds:(id)arg1 logicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg1 parentBounds:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(BOOL)arg2 nodeSize:(struct CGSize { float x1; float x2; })arg3;
+ (float)fontSizeForText:(id)arg1 insideRectangle:(struct CGSize { float x1; float x2; })arg2;


@end

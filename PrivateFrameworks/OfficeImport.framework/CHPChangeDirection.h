/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CHPChangeDirection : EDProcessor 
{
}


- (void)changeChartDirection:(id)arg1 sheet:(id)arg2;
- (id)createNewSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;
- (id)getSeriesCollectionForOrthogonalDirection:(id)arg1 forChart:(id)arg2;
- (void)mapSeriesCollection:(id)arg1 from:(id)arg2 forChart:(id)arg3;
- (void)mapSeriesValues:(id)arg1 to:(id)arg2 forIndex:(NSUInteger)arg3 byRow:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg4 forChart:(id)arg5;
     /* Encoded args for previous method: v28@0:4@8@12I16B20@24 */

- (id)getGraphicPropertiesForSeriesWithIndex:(NSInteger)arg1 fromCollection:(id)arg2 isVaryColors:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg3 forChart:(id)arg4;
     /* Encoded args for previous method: @24@0:4i8@12B16@20 */

- (void)addDataValue:(id)arg1 to:(id)arg2 withIndex:(NSInteger)arg3;
- (void)cleanUpOldSeriesCollection:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectSupported:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;

@end

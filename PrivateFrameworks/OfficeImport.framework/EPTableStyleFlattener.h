/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDTable;



@interface EPTableStyleFlattener : EPStyleFlattener 
{
    EDTable *mTable;
    NSUInteger mHeaderRowCount;
    NSUInteger mTotalsRowCount;
}


- (id)extractGlobalStyleElements:(id)arg1;
- (id)collectionFromWorksheet:(id)arg1;
- (id)styleFromObject:(id)arg1;
- (id)extractRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(NSInteger)arg3;
- (id)extractCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(NSInteger)arg3 column:(NSInteger)arg4;
- (id)keysInTheOrderTheyShouldBeApplied;
- (NSInteger)borderFlagsForStyleType:(NSInteger)arg1 row:(NSInteger)arg2 column:(NSInteger)arg3;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (void)clearCache;
- (NSInteger)stripeOffset:(NSInteger)arg1 row:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: i16@0:4i8B12 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isObjectSupported:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */


@end

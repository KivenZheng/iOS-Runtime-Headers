/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDCollection, EDReference;



@interface EDPivotArea : NSObject 
{

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mGrandCol;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mGrandRow;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mOutline;

    NSInteger mType;
    EDCollection *mReferences;
    EDReference *mOffset;
}

+ (id)pivotArea;

- (id)references;
- (void)setOffset:(id)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (id)offset;
- (id)init;
- (void)dealloc;
- (void)setOutline:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setGrandRow:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)grandRow;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)grandCol;
     /* Encoded args for previous method: B8@0:4 */

- (void)setGrandCol:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)outline;
     /* Encoded args for previous method: B8@0:4 */


@end

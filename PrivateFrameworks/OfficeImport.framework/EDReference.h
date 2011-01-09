/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EDReference : NSObject <NSCopying>
{
    struct EDAreaReference { 
        NSInteger firstRow; 
        NSInteger firstColumn; 
        NSInteger lastRow; 
        NSInteger lastColumn; 
    } mAreaReference;
}

+ (id)referenceWithFirstRow:(NSInteger)arg1 lastRow:(NSInteger)arg2 firstColumn:(NSInteger)arg3 lastColumn:(NSInteger)arg4;
+ (id)reference;
+ (id)referenceWithAreaReference:(struct EDAreaReference { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)unionWithRow:(NSInteger)arg1 column:(NSInteger)arg2;
- (void)unionWithFirstRow:(NSInteger)arg1 lastRow:(NSInteger)arg2 firstColumn:(NSInteger)arg3 lastColumn:(NSInteger)arg4;
- (id)initWithFirstRow:(NSInteger)arg1 lastRow:(NSInteger)arg2 firstColumn:(NSInteger)arg3 lastColumn:(NSInteger)arg4;
- (id)initWithAreaReference:(struct EDAreaReference { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; }*)arg1;
- (struct EDAreaReference { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; })areaReference;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)containsRow:(NSInteger)arg1 column:(NSInteger)arg2;
     /* Encoded args for previous method: B16@0:4i8i12 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isCellReference;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isValidCellReference;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isValidAreaReference;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)fullyAdjacentToReference:(id)arg1;
     /* Encoded args for previous method: B12@0:4@8 */

- (BOOL)isEqualToReference:(id)arg1;
- (void)unionWithReference:(id)arg1;
- (NSUInteger)countOfCellsBeingReferenced;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isRowReference;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isColumnReference;
     /* Encoded args for previous method: B8@0:4 */

- (void)setFirstRow:(NSInteger)arg1;
- (NSInteger)lastRow;
- (void)setLastRow:(NSInteger)arg1;
- (void)setLastColumn:(NSInteger)arg1;
- (NSInteger)lastColumn;
- (NSInteger)firstColumn;
- (NSInteger)firstRow;
- (void)setFirstColumn:(NSInteger)arg1;

@end

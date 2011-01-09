/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EDReference, EDWorksheet, EDResources;



@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject>
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    NSInteger mWidth;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHidden;

    EDReference *mRange;
    NSUInteger mStyleIndex;
    unsigned char mOutlineLevel;
}

+ (id)columnInfoWithResources:(id)arg1 worksheet:(id)arg2;

- (NSUInteger)key;
- (void)setWidth:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setHidden:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (id)range;
- (double)width;
- (void)setStyle:(id)arg1;
- (id)style;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHidden;
     /* Encoded args for previous method: B8@0:4 */

- (void)dealloc;
- (void)setOutlineLevel:(unsigned char)arg1;
- (void)setStyleIndex:(NSUInteger)arg1;
- (NSUInteger)styleIndex;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (unsigned char)outlineLevel;
- (void)setRange:(id)arg1;
- (void)setRangeWithFirstColumn:(NSInteger)arg1 lastColumn:(NSInteger)arg2;
- (NSInteger)widthInXlUnits;
- (void)setWidthInXlUnits:(NSInteger)arg1;

@end

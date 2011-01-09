/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQSDocument, GQHXML, <GQHContext>, GQHTableState;



@interface GQHState : NSObject 
{
    GQHXML *mHtmlDoc;
    struct CGSize { 
        float width; 
        float height; 
    } mScale;
    struct __CFString { } *mStyleData;
    GQHTableState *mTableState;
    GQSDocument *mProcessorState;
    struct __CFDictionary { } *mStyleIndexes;
    struct __CFDictionary { } *mStyleNameMap;
    struct __CFArray { } *mImplicitStyles;
    NSInteger mColoredBackgroundLayerCount;
    NSInteger mMultiColumnedDepth;
    struct __CFArray { } *mGraphicPropertiesStack;
    NSInteger mParagraphCount;
    NSInteger mParagraphIndex;
    NSInteger mCachedCellStyleIndex;
    struct __CFDictionary { } *mCachedTableStyles;
    NSInteger mCachedTextStyleIndex;
    struct __CFDictionary { } *mCachedTextStyles;
    NSInteger mInlineStyleIndex;
    struct __CFDictionary { } *mInlineStyles;
    struct __CFDictionary { } *mColorStrings;
    <GQHContext> *mShapeContext;
    NSInteger mOutlineLevel;
    NSInteger mOutlineStyleType;
    NSInteger mShapeIDCounter;
    NSUInteger mTextScale;
}


- (void)setScale:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })scale;
- (void)setOutlineLevel:(NSInteger)arg1;
- (id)initWithState:(id)arg1;
- (NSInteger)outlineLevel;
- (NSInteger)paragraphCount;
- (NSUInteger)textScale;
- (struct __CFString { }*)cachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(NSInteger)arg4 outlineType:(NSInteger)arg5 isSpan:(BOOL)arg6;
- (struct __CFString { }*)cssZOrderClassForDrawable:(id)arg1;
- (void)setParagraphIndex:(NSInteger)arg1;
- (struct __CFString { }*)cachedClassStringForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6;
- (BOOL)needAbsolutelyPositionedTables;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1;
- (id)initWithState:(id)arg1 needIndexFile:(BOOL)arg2 documentSize:(struct CGSize { float x1; float x2; })arg3;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1 inDocument:(id)arg2;
- (id)processorState;
- (struct __CFString { }*)createStyleName:(id)arg1 type:(const char *)arg2;
- (void)pushImplicitStyle:(id)arg1;
- (void)setMultiColumned:(BOOL)arg1;
- (BOOL)multiColumned;
- (void)setParagraphCount:(NSInteger)arg1;
- (struct __CFString { }*)addCacheForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (struct __CFString { }*)getColorString:(id)arg1;
- (void)invalidateTextScale;
- (NSInteger)indexForStyle:(const char *)arg1;
- (void)setTextScale:(NSUInteger)arg1;
- (id)implicitStyle;
- (void)popImplicitStyle;
- (BOOL)coloredBackground;
- (NSInteger)paragraphIndex;
- (struct __CFString { }*)addCachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(NSInteger)arg4 outlineType:(NSInteger)arg5 isSpan:(BOOL)arg6 baseClassString:(struct __CFString { }*)arg7 cssCachedStyle:(id)arg8;
- (BOOL)useOutline;
- (void)setOutlineStyleType:(NSInteger)arg1;
- (BOOL)allowInlineWrap;
- (BOOL)finishMainHtml;
- (id)shapeContext;
- (struct __CFString { }*)className:(id)arg1;
- (void)addCachedStyle:(struct __CFString { }*)arg1;
- (void)addedDrawableWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct __CFString { }*)cssZOrderClassForDrawableUid:(const char *)arg1;
- (void)enterGraphicObject;
- (struct __CFString { }*)createUniqueShapeId:(const char *)arg1;
- (void)leaveGraphicObject;
- (void)setColoredBackground:(BOOL)arg1;
- (BOOL)drawablesNeedCssZOrdering;
- (id)htmlDoc;
- (BOOL)shouldMapLinkWithUrl:(struct __CFString { }*)arg1;
- (id)tableState;
- (NSInteger)outlineStyleType;

@end

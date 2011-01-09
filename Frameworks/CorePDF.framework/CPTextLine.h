/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPCharSequence, NSArray;



@interface CPTextLine : CPTextObject <CPDisposable>
{
    CPCharSequence *charSequence;
    struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x5; } *wordArray;
    NSUInteger wordCount;
    NSInteger lineNumber;
    NSInteger columnNumber;
    float baseline;
    BOOL baseLineIsNull;
    BOOL hasBeenSplit;
    BOOL hasBeenProcessed;
    BOOL maySplit;
    NSInteger lineBreak;
    BOOL hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    float minimumOffset;
    NSInteger levels;
    float maximumLetterGap;
    float maximumWordGap;
    NSInteger tabsBefore;
    BOOL irregular;
    BOOL isListItem;
    NSUInteger listSpacerIndex;
    BOOL disposed;
}

@property NSUInteger listSpacerIndex;
@property BOOL isListItem;


- (struct CGPoint { float x1; float x2; })anchor;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)setBaseline:(float)arg1;
- (NSInteger)align;
- (float)baseline;
- (BOOL)isListItem;
- (id)properties;
- (void)append:(id)arg1;
- (void)setIsListItem:(BOOL)arg1;
- (void)setListSpacerIndex:(NSUInteger)arg1;
- (id)charSequence;
- (float)maximumWordGap;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArray;
- (BOOL)changesFontAt:(id)arg1;
- (BOOL)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (void)setCharSequence:(id)arg1;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordArrayOfSize:(NSUInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfWordAtIndex:(NSUInteger)arg1;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)wordAtIndex:(NSUInteger)arg1;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)firstWord;
- (struct { NSUInteger x1; NSUInteger x2; NSInteger x3; NSInteger x4; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_5_1_2; } x5; }*)lastWord;
- (BOOL)hasJustifiedAlignment;
- (id)newTextLineFromWordAt:(NSUInteger)arg1 lengthInWords:(NSUInteger)arg2;
- (BOOL)removeTextLines:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (BOOL)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (BOOL)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (void)prepend:(id)arg1;
- (BOOL)joinFrom:(id)arg1;
- (void)setHasBeenSplit:(BOOL)arg1;
- (void)setHasBeenProcessed:(BOOL)arg1;
- (void)setColumnBreaks:(id)arg1;
- (void)setHasTabs:(BOOL)arg1;
- (void)setTabsBefore:(NSInteger)arg1;
- (NSInteger)baseLineAscending:(id)arg1;
- (NSInteger)baseLineDescending:(id)arg1;
- (BOOL)overlapsWith:(id)arg1;
- (BOOL)overlapsHorizontally:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLineBreak:(NSInteger)arg1;
- (BOOL)hyphenated;
- (void)setBaselineToNull;
- (void)recomputeBaseline;
- (BOOL)styleIsUniform:(struct CPPDFStyle {}**)arg1 styleFlags:(unsigned short)arg2;
- (void)setLevels:(NSInteger)arg1;
- (void)recomputeLevels;
- (void)setMaximumLetterGap:(float)arg1;
- (void)setMaximumWordGap:(float)arg1;
- (void)setIrregular:(BOOL)arg1;
- (NSInteger)topIsAbove:(id)arg1;
- (float)medianFontSize;
- (NSUInteger)listSpacerIndex;
- (BOOL)irregular;
- (NSInteger)tabsBefore;
- (float)maximumLetterGap;
- (NSInteger)levels;
- (id)columnBreaks;
- (BOOL)hasTabs;
- (NSInteger)lineBreak;
- (BOOL)hasBeenProcessed;
- (BOOL)hasBeenSplit;
- (NSUInteger)wordCount;
- (BOOL)hasDropCap;
- (void)dispose;
- (BOOL)isIndivisible;
- (void)accept:(id)arg1;
- (void)fitBoundsToChildren;
- (void)translateObjectYBy:(float)arg1;
- (long)zOrder;

@end

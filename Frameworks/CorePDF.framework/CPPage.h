/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class CPChunk, NSMutableArray;



@interface CPPage : CPChunk <CPDisposable>
{
    NSInteger pageNumber;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } pageCropBox;
    BOOL hasZones;
    BOOL hasTextLines;
    BOOL isDirty;
    BOOL isStartOfSection;
    long maxLayoutZOrder;
    CPChunk *background;
    float complexity;
    NSInteger rotation;
    NSMutableArray *shapesOnPage;
    NSMutableArray *imagesOnPage;
    NSMutableArray *graphicsOnPage;
    NSMutableArray *columnsOnPage;
    struct CPPDFContext { struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x1; NSUInteger x2; struct CPPDFGraphicState {} *x3; struct CPPDFGraphicState {} *x4; struct CGPDFContentStream {} *x5[250]; NSUInteger x6; struct PrimitiveBuffer { 
            void *data; 
            void *pos; 
            void *limit; 
            NSUInteger size; 
            NSUInteger previousSize; 
            NSUInteger count; 
            NSUInteger previousCount; 
            NSInteger index; 
        } x7; struct PrimitiveBuffer { 
            void *data; 
            void *pos; 
            void *limit; 
            NSUInteger size; 
            NSUInteger previousSize; 
            NSUInteger count; 
            NSUInteger previousCount; 
            NSInteger index; 
        } x8; struct PrimitiveBuffer { 
            void *data; 
            void *pos; 
            void *limit; 
            NSUInteger size; 
            NSUInteger previousSize; 
            NSUInteger count; 
            NSUInteger previousCount; 
            NSInteger index; 
        } x9; struct CPPDFClipBuffer { 
            NSUInteger top; 
            NSUInteger currentIndex; 
            NSUInteger *data; 
            NSUInteger size; 
        } x10; struct __CFDictionary {} *x11; struct __CFDictionary {} *x12; struct CPPDFStyle {} *x13; NSInteger *x14; NSUInteger x15; NSUInteger x16; NSInteger x17; } *pdfContext;
    BOOL contextOwner;
    struct CGPDFPage { } *pdfPage;
    NSMutableArray *textLinesOnPage;
    void *_layout;
    id hitTest;
    BOOL reconstructed;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } mutex;
}

+ (void)sortByReadingOrder:(id)arg1;

- (NSInteger)rotation;
- (void)setRotation:(NSInteger)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (struct CGPDFLayout { }*)layout;
- (void)addImage:(id)arg1;
- (void)setBackground:(id)arg1;
- (id)background;
- (id)init;
- (void)dealloc;
- (id)parent;
- (id)children;
- (BOOL)populatePDFLayout:(struct CGPDFLayout { }*)arg1;
- (struct CPPDFContext { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; NSUInteger x2; struct CPPDFGraphicState {} *x3; struct CPPDFGraphicState {} *x4; struct CGPDFContentStream {} *x5[250]; NSUInteger x6; struct PrimitiveBuffer { void *x_7_1_1; void *x_7_1_2; void *x_7_1_3; NSUInteger x_7_1_4; NSUInteger x_7_1_5; NSUInteger x_7_1_6; NSUInteger x_7_1_7; NSInteger x_7_1_8; } x7; struct PrimitiveBuffer { void *x_8_1_1; void *x_8_1_2; void *x_8_1_3; NSUInteger x_8_1_4; NSUInteger x_8_1_5; NSUInteger x_8_1_6; NSUInteger x_8_1_7; NSInteger x_8_1_8; } x8; struct PrimitiveBuffer { void *x_9_1_1; void *x_9_1_2; void *x_9_1_3; NSUInteger x_9_1_4; NSUInteger x_9_1_5; NSUInteger x_9_1_6; NSUInteger x_9_1_7; NSInteger x_9_1_8; } x9; struct CPPDFClipBuffer { NSUInteger x_10_1_1; NSUInteger x_10_1_2; NSUInteger *x_10_1_3; NSUInteger x_10_1_4; } x10; struct __CFDictionary {} *x11; struct __CFDictionary {} *x12; struct CPPDFStyle {} *x13; NSInteger *x14; NSUInteger x15; NSUInteger x16; NSInteger x17; }*)PDFContext;
- (void)dispose;
- (id)initWithPDFPage:(struct CGPDFPage { }*)arg1;
- (void)reconstruct;
- (void)setPDFContext:(struct CPPDFContext { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; NSUInteger x2; struct CPPDFGraphicState {} *x3; struct CPPDFGraphicState {} *x4; struct CGPDFContentStream {} *x5[250]; NSUInteger x6; struct PrimitiveBuffer { void *x_7_1_1; void *x_7_1_2; void *x_7_1_3; NSUInteger x_7_1_4; NSUInteger x_7_1_5; NSUInteger x_7_1_6; NSUInteger x_7_1_7; NSInteger x_7_1_8; } x7; struct PrimitiveBuffer { void *x_8_1_1; void *x_8_1_2; void *x_8_1_3; NSUInteger x_8_1_4; NSUInteger x_8_1_5; NSUInteger x_8_1_6; NSUInteger x_8_1_7; NSInteger x_8_1_8; } x8; struct PrimitiveBuffer { void *x_9_1_1; void *x_9_1_2; void *x_9_1_3; NSUInteger x_9_1_4; NSUInteger x_9_1_5; NSUInteger x_9_1_6; NSUInteger x_9_1_7; NSInteger x_9_1_8; } x9; struct CPPDFClipBuffer { NSUInteger x_10_1_1; NSUInteger x_10_1_2; NSUInteger *x_10_1_3; NSUInteger x_10_1_4; } x10; struct __CFDictionary {} *x11; struct __CFDictionary {} *x12; struct CPPDFStyle {} *x13; NSInteger *x14; NSUInteger x15; NSUInteger x16; NSInteger x17; }*)arg1;
- (void)setPageCropBox:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setComplexity:(float)arg1;
- (void)setPageNumber:(NSInteger)arg1;
- (void)addShape:(id)arg1;
- (void)setHasZones:(BOOL)arg1;
- (id)bodyZone;
- (void)setHasTextLines:(BOOL)arg1;
- (void)setIsStartOfSection:(BOOL)arg1;
- (void)restoreBackGroundObjectToPage;
- (NSUInteger)traverse:(id)arg1 ordinal:(NSUInteger)arg2;
- (NSUInteger)setPositionsOf:(id)arg1 from:(NSUInteger)arg2;
- (NSUInteger)setCellPositionsOf:(id)arg1 from:(NSUInteger)arg2;
- (NSUInteger)setGraphicPositions:(id)arg1 from:(NSUInteger)arg2;
- (NSUInteger)setReadingOrder:(id)arg1 from:(NSUInteger)arg2;
- (void)sortByReadingOrder;
- (void)layDownObjectsOnPageOld;
- (void)addColumns:(id)arg1;
- (id)hitTest;
- (id)textLinesOnPage;
- (struct CGPDFPage { }*)pdfPage;
- (id)columnsOnPage;
- (id)graphicsOnPage;
- (id)shapesOnPage;
- (float)complexity;
- (BOOL)isStartOfSection;
- (BOOL)hasTextLines;
- (BOOL)hasZones;
- (NSInteger)pageNumber;
- (id)imagesOnPage;
- (void)accept:(id)arg1;
- (void)layDownObjectsOnPage;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pageCropBox;

@end

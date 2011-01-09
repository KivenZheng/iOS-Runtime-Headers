/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class NSMutableArray, CPChunk;



@interface CPGraphicObject : CPChunk 
{
    NSMutableArray *clips;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } renderedBounds;
    NSInteger wrapType;
    float margin;
    float baselineOffset;
    BOOL canContainText;
    BOOL isInZoneBorder;
    NSInteger zoneGraphicType;
    CPChunk *user;
}


- (BOOL)isVisible;
- (id)user;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setMargin:(float)arg1;
- (id)init;
- (void)dealloc;
- (void)setWrapType:(NSInteger)arg1;
- (NSInteger)wrapType;
- (float)baselineOffset;
- (BOOL)canBeContainer;
- (NSInteger)zoneGraphicType;
- (NSUInteger)clipPathCount;
- (unsigned short)unicode;
- (void)setBaselineOffset:(float)arg1;
- (BOOL)isNarrow;
- (BOOL)clipped;
- (struct CGPath { }*)clipPathAtIndex:(NSUInteger)arg1 winding:(NSInteger*)arg2;
- (BOOL)isIndivisible;
- (void)setCanContainText:(BOOL)arg1;
- (void)setIsInZoneBorder:(BOOL)arg1;
- (void)setZoneGraphicType:(NSInteger)arg1;
- (void)setUser:(id)arg1;
- (BOOL)isInZoneBorder;
- (BOOL)canContainText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })renderedBounds;
- (void)addClipPath:(struct CGPath { }*)arg1 winding:(NSInteger)arg2;
- (float)margin;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, MFDeviceContext, NSObject<MFDeviceDriver>, NSMutableArray, MFObjectTable;



@interface MFGraphicsDevice : NSObject 
{
    MFDeviceContext *m_currentDC;
    NSMutableArray *m_savedDC;
    NSObject<MFDeviceDriver> *m_deviceDriver;
    MFObjectTable *m_objectTable;
    MFObjectTable *m_stockObjects;
    NSDictionary *m_colorMap;
    NSDictionary *m_fillMap;
}


- (void)done;
- (void)dealloc;
- (NSInteger)setMiterLimit:(double)arg1;
- (NSInteger)setViewportExt:(NSInteger)arg1 :(NSInteger)arg2;
- (id)createBitmap:(NSUInteger)arg1 :(NSUInteger)arg2 :(NSUInteger)arg3 :(NSUInteger)arg4 :(const char *)arg5 :(NSUInteger)arg6;
- (NSInteger)setTextColour:(const id)arg1;
- (NSInteger)saveDC;
- (NSInteger)moveTo:(double)arg1 :(double)arg2;
- (NSInteger)polyline:(struct CGPoint { float x1; float x2; }*)arg1 :(NSInteger)arg2;
- (NSInteger)arc:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8;
- (NSInteger)pie:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8;
- (NSInteger)chord:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8;
- (NSInteger)roundRect:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(double)arg5 :(double)arg6;
- (NSInteger)scaleWindowExt:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4;
- (NSInteger)offsetWindowOrg:(NSInteger)arg1 :(NSInteger)arg2;
- (NSInteger)offsetViewportOrg:(NSInteger)arg1 :(NSInteger)arg2;
- (NSInteger)createFontIndirect:(long)arg1 :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg6 :(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg7 :(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg8 :(NSInteger)arg9 :(NSInteger)arg10 :(unsigned char)arg11 :(NSInteger)arg12 :(NSInteger)arg13 :(NSInteger)arg14 :(id)arg15;
     /* Encoded args for previous method: i68@0:4l8l12l16l20l24B28B32B36i40i44C48i52i56i60@64 */

- (id)createColorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 :(unsigned char)arg4;
- (NSInteger)createBrush:(NSInteger)arg1 :(id)arg2 :(NSInteger)arg3 :(NSUInteger)arg4;
- (NSInteger)createRegion:(id)arg1;
- (NSInteger)fillRgn:(NSUInteger)arg1 :(NSUInteger)arg2;
- (NSInteger)frameRegion:(NSUInteger)arg1 :(NSUInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4;
- (NSInteger)selectClipRegion:(NSUInteger)arg1 :(NSInteger)arg2;
- (id)recolor:(id)arg1 fill:(BOOL)arg2;
- (id)recolor:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3 fill:(BOOL)arg4;
- (NSInteger)comment:(id)arg1;
- (NSInteger)textOut:(NSInteger)arg1 :(NSInteger)arg2 :(id)arg3;
- (NSInteger)textOutEncoded:(NSInteger)arg1 :(NSInteger)arg2 :(id)arg3;
- (NSInteger)extTextOutEncoded:(NSInteger)arg1 :(NSInteger)arg2 :(id)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8 :(NSInteger*)arg9 :(NSInteger)arg10;
- (void)createStockObjects;
- (NSInteger)paintRgn:(NSUInteger)arg1;
- (NSInteger)invertRgn:(NSUInteger)arg1;
- (NSInteger)frameRegionWithRects:(id)arg1 :(NSUInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4;
- (id)createDIBitmap:(const char *)arg1 :(NSUInteger)arg2 :(NSInteger)arg3;
- (NSInteger)patBlt:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(unsigned long)arg5;
- (NSInteger)setTextCharExtra:(NSInteger)arg1;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setColorMap:(id)arg1 fillMap:(id)arg2;
- (NSInteger)setViewBox:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
- (NSInteger)description:(id)arg1;
- (NSInteger)setWindowExt:(NSInteger)arg1 :(NSInteger)arg2;
- (NSInteger)setWindowOrg:(NSInteger)arg1 :(NSInteger)arg2;
- (NSInteger)setWorldTransform:(const struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;
- (NSInteger)modifyWorldTransform:(const struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1 :(NSInteger)arg2;
- (NSInteger)setViewportOrg:(NSInteger)arg1 :(NSInteger)arg2;
- (NSInteger)scaleViewportExt:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4;
- (NSInteger)getStockObject:(NSUInteger)arg1;
- (NSInteger)selectObject:(NSInteger)arg1;
- (NSInteger)deleteObject:(NSInteger)arg1;
- (NSInteger)createPen:(NSInteger)arg1 :(long)arg2 :(id)arg3 :(double*)arg4 :(NSUInteger)arg5;
- (NSInteger)createPalette:(id)arg1 :(NSUInteger)arg2;
- (NSInteger)setPaletteEntries:(NSUInteger)arg1 :(id)arg2 :(NSUInteger)arg3;
- (NSInteger)resizePalette:(NSUInteger)arg1 :(NSUInteger)arg2;
- (NSInteger)realizePalette;
- (NSInteger)createFontIndirectW:(long)arg1 :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg6 :(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg7 :(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg8 :(NSInteger)arg9 :(NSInteger)arg10 :(unsigned char)arg11 :(NSInteger)arg12 :(NSInteger)arg13 :(NSInteger)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(NSUInteger)arg18 :(NSUInteger)arg19 :(NSUInteger)arg20 :(NSUInteger)arg21 :(NSUInteger)arg22 :(NSUInteger)arg23;
     /* Encoded args for previous method: i100@0:4l8l12l16l20l24B28B32B36i40i44C48i52i56i60@64@68@72I76I80I84I88I92I96 */

- (id)createDIBitmap:(const char *)arg1 :(NSUInteger)arg2 :(const char *)arg3 :(NSUInteger)arg4 :(NSInteger)arg5;
- (NSInteger)createPatternBrush:(id)arg1 :(NSUInteger)arg2 usePaletteForBilevel:(BOOL)arg3;
- (NSInteger)extTextOut:(NSInteger)arg1 :(NSInteger)arg2 :(id)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8 :(NSInteger*)arg9 :(NSInteger)arg10;
- (NSInteger)setTextAlign:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4;
     /* Encoded args for previous method: i24@0:4B8i12i16i20 */

- (NSInteger)setTextJustification:(NSInteger)arg1 :(NSInteger)arg2;
- (NSInteger)setBkColour:(id)arg1;
- (NSInteger)setBkMode:(NSInteger)arg1;
- (NSInteger)setBrushOrg:(double)arg1 :(double)arg2;
- (NSInteger)setMapMode:(NSInteger)arg1;
- (NSInteger)lineTo:(double)arg1 :(double)arg2;
- (NSInteger)bezierTo:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6;
- (NSInteger)closeCurrentPath:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: i12@0:4B8 */

- (NSInteger)bezier:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8;
- (NSInteger)polygon:(struct CGPoint { float x1; float x2; }*)arg1 :(NSInteger)arg2;
- (NSInteger)setStretchBltMode:(NSInteger)arg1;
- (NSInteger)restoreDC:(NSInteger)arg1;
- (NSInteger)setArcDirection:(NSInteger)arg1;
- (NSInteger)arcTo:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8;
- (NSInteger)ellipse:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4;
- (NSInteger)rectangle:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4;
- (NSInteger)polyPolygon:(struct CGPoint { float x1; float x2; }*)arg1 :(NSInteger*)arg2 :(NSInteger)arg3;
- (NSInteger)polyPolyline:(struct CGPoint { float x1; float x2; }*)arg1 :(NSInteger*)arg2 :(NSInteger)arg3;
- (NSInteger)angleArc:(NSInteger)arg1 :(NSInteger)arg2 :(unsigned long)arg3 :(double)arg4 :(double)arg5;
- (NSInteger)bitBlt:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(id)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(unsigned long)arg8 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg9 :(unsigned long)arg10;
- (NSInteger)stretchBlt:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(id)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8 :(NSInteger)arg9 :(unsigned long)arg10 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg11 :(unsigned long)arg12;
- (NSInteger)maskBlt:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(id)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(id)arg8 :(NSInteger)arg9 :(NSInteger)arg10 :(unsigned long)arg11 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg12 :(unsigned long)arg13;
- (NSInteger)plgBlt:(struct CGPoint { float x1; float x2; }*)arg1 :(id)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(NSInteger)arg5 :(NSInteger)arg6 :(id)arg7 :(NSInteger)arg8 :(NSInteger)arg9 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg10 :(unsigned long)arg11;
- (NSInteger)stretchBlt:(NSInteger)arg1 :(NSInteger)arg2 :(NSInteger)arg3 :(NSInteger)arg4 :(id)arg5 :(NSInteger)arg6 :(NSInteger)arg7 :(NSInteger)arg8 :(NSInteger)arg9 :(unsigned long)arg10 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg11 :(unsigned long)arg12 usePaletteForBilevel:(BOOL)arg13;
- (NSInteger)setPolyFillMode:(NSInteger)arg1;
- (NSInteger)setRop2:(NSInteger)arg1;
- (NSInteger)beginPath;
- (NSInteger)abortPath;
- (NSInteger)endPath;
- (NSInteger)widenPath;
- (NSInteger)strokeAndFillPath:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1 :(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg2;
     /* Encoded args for previous method: i16@0:4B8B12 */

- (NSInteger)selectClipPath:(NSInteger)arg1;
- (NSInteger)selectClipRegionWithRects:(id)arg1 :(NSInteger)arg2;
- (NSInteger)fillRgnWithRects:(id)arg1 :(NSUInteger)arg2;
- (NSInteger)paintRgnWithRects:(id)arg1;
- (NSInteger)invertRgnWithRects:(id)arg1;
- (NSInteger)excludeClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)intersectClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)setMetaRgn;

@end

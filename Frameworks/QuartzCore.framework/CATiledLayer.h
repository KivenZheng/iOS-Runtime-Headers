/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */



@interface CATiledLayer : CALayer 
{
}

@property CGColor *fillColor;
@property float maximumTileScale;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property NSUInteger levelsOfDetail;
@property NSUInteger levelsOfDetailBias;
@property CGSize tileSize;

+ (NSUInteger)prefetchedTiles;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (double)fadeDuration;
+ (BOOL)shouldDrawOnMainThread;
+ (id)displayDisableFadeOptions;
+ (id)displayUncollectableOptions;

- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2;
- (float)maximumTileScale;
- (void)setMaximumTileScale:(float)arg1;
- (void)displayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2 options:(id)arg3;
- (unsigned long)levelsOfDetail;
- (BOOL)isDrawingEnabled;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2 options:(id)arg3;
- (struct CGColor { }*)fillColor;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContents:(id)arg1;
- (void)invalidateContents;
- (void)dealloc;
- (unsigned long)levelsOfDetailBias;
- (BOOL)queueIsEmpty;
- (void)_dealloc;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)_display;
- (BOOL)_canDisplayConcurrently;
- (void)didChangeValueForKey:(id)arg1;
- (void)setLevelsOfDetail:(unsigned long)arg1;
- (void)setLevelsOfDetailBias:(unsigned long)arg1;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2 options:(id)arg3;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2;
- (void)displayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2 options:(id)arg3;

@end

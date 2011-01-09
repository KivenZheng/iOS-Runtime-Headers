/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface CAGradientLayer : CALayer 
{
}

@property(retain) id colorMap;
@property(copy) NSArray *colors;
@property(copy) NSArray *locations;
@property CGPoint startPoint;
@property CGPoint endPoint;
@property(copy) NSString *type;

+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;

- (void)setColors:(id)arg1;
- (id)colors;
- (id)type;
- (void)setType:(id)arg1;
- (void)setStartPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (id)colorMap;
- (void)setColorMap:(id)arg1;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (id)locations;
- (id)_implicitActionForKey:(id)arg1;
- (struct Layer { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; NSUInteger x3; unsigned short x4; unsigned short x5; float x6; struct LayerExt {} *x7; struct Handle {} *x8; struct Object {} *x9; struct Vec2<double> { double x_10_1_1; double x_10_1_2; } x10; struct Rect { double x_11_1_1; double x_11_1_2; double x_11_1_3; double x_11_1_4; } x11; struct TypedArray<CA::Render::Layer> {} *x12; struct TypedArray<CA::Render::Animation> {} *x13; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; NSInteger x2; struct HashTable<CALayer*,uintptr_t*> {} *x3; struct SpinLock {} *x4; NSUInteger x5; struct Level {} *x6; struct Command {} *x7; struct Deleted {} *x8; struct List<const void*> {} *x9; struct Context {} *x10; struct HashTable<CALayer*,CALayer*> {} *x11; struct __CFRunLoop {} *x12; struct __CFRunLoopObserver {} *x13; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; }*)arg1 layerFlags:(NSUInteger)arg2 commitFlags:(NSUInteger*)arg3;
- (void)setLocations:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)_renderLayerDefinesProperty:(NSUInteger)arg1;
     /* Encoded args for previous method: B12@0:4I8 */

- (NSUInteger)_renderLayerPropertyAnimationFlags:(NSUInteger)arg1;
- (struct CGPoint { float x1; float x2; })endPoint;
- (void)didChangeValueForKey:(id)arg1;

@end

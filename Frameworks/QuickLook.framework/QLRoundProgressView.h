/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLRoundProgressView : UIView

@property (nonatomic) float progress;

+ (Class)layerClass;

- (void)didMoveToWindow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)progress;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;

@end

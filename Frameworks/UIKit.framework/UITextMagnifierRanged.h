/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UITextMagnifierTimeWeightedPoint, UIView<UITextSelectingContainer>, UITextSelection;



@interface UITextMagnifierRanged : UIView <UITextMagnifier>
{
    UITextSelection *_selection;
    UIView<UITextSelectingContainer> *_target;
    struct CGPoint { 
        float x; 
        float y; 
    } _magnificationPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _animationPoint;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    NSInteger _autoscrollDirections;
    float _touchOffsetFromMagnificationPoint;
    float _magnifierOffsetFromTouch;
}

@property CGPoint magnificationPoint;
@property(readonly) BOOL terminalPointPlacedCarefully;
@property(readonly) CGPoint terminalPoint;
@property CGPoint animationPoint;
@property(retain) UIView<UITextSelectingContainer> *target;
@property(retain) UITextSelection *selection;

+ (id)sharedRangedMagnifier;

- (NSInteger)horizontalMovementAtTime:(double)arg1;
- (struct CGPoint { float x1; float x2; })magnificationPoint;
- (BOOL)wasPlacedCarefullyAtTime:(double)arg1;
- (float)offsetFromMagnificationPoint;
- (void)updateFrame;
- (void)detectLostTouches:(id)arg1;
- (void)beginMagnifyingSelection:(id)arg1 magnificationPoint:(struct CGPoint { float x1; float x2; })arg2 offset:(struct CGPoint { float x1; float x2; })arg3 animated:(BOOL)arg4;
- (void)stopMagnifying:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })snappedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })animationPoint;
- (struct CGPoint { float x1; float x2; })terminalPoint;
- (BOOL)terminalPointPlacedCarefully;
- (id)initWithDefaultFrame;
- (void)setMagnificationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)animateToAutoscrollRenderer;
- (void)setToMagnifierRenderer;
- (void)animateToMagnifierRenderer;
- (void)zoomUpAnimation;
- (void)zoomDownAnimation;
- (void)remove;
- (void)setAnimationPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (NSInteger)horizontalMovement;
- (void)setAutoscrollDirections:(NSInteger)arg1;
- (id)target;
- (void)postAutoscrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)selection;
- (void)setTarget:(id)arg1;
- (void)setNeedsDisplay;
- (void)autoscrollWillNotStart;
- (void)setSelection:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end

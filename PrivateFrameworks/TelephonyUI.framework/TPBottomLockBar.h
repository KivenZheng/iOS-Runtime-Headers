/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class NSArray, TPLockKnobView, NSTimer, UIView, TPLockTextView;



@interface TPBottomLockBar : TPBottomBar 
{
    NSArray *_labels;
    NSInteger _currentLabelIndex;
    NSTimer *_cycleLabelTimer;
    id _delegate;
    id _representedObject;
    TPLockKnobView *_knobView;
    UIView *_trackArrow;
    TPLockTextView *_labelView;
    float _knobTrackInsetLeft;
    float _fontSize;
}

+ (id)_backgroundImage;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (float)defaultLabelFontSize;
+ (void)_initializeSafeCategory;

- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (void)startAnimating;
- (void)setOrientation:(NSInteger)arg1;
- (void)unlock;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setLabel:(id)arg1;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)setFontSize:(float)arg1;
- (float)fontSize;
- (BOOL)_canDrawContent;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)labels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobImage:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 knobColor:(NSInteger)arg2;
- (id)knob;
- (void)downInKnob;
- (void)upInKnob;
- (void)_adjustKnobOrigin;
- (void)_adjustLabelOrigin;
- (void)_setLabel:(id)arg1;
- (void)startCyclingLabels;
- (void)stopCyclingLabels;
- (void)cycleToNextLabel;
- (NSInteger)currentLabelIndex;
- (void)finishedCyclingLabelOut;
- (void)cycleToLabelAtIndex:(NSInteger)arg1;
- (void)setLabels:(id)arg1;
- (void)knobDragged:(float)arg1;
- (void)slideBack:(BOOL)arg1;
- (void)relock;
- (void)freezeKnobInUnlockedPosition;
- (float)knobTrackInsetLeft;
- (float)knobTrackInsetRight;
- (id)initForIncomingCallWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;

@end

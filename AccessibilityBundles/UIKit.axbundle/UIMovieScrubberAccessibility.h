/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */



@interface UIMovieScrubberAccessibility : UIMovieScrubberAccessibility_super 
{
}

+ (void)_initializeSafeCategory;

- (void)setThumbIsVisible:(BOOL)arg1;
- (void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_updateThumbLocation;
- (void)setTrimStartValue:(double)arg1;
- (void)setTrimEndValue:(double)arg1;
- (void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(float)arg2 actualSizeWidthDelta:(float)arg3 originXDelta:(float)arg4 minimumVisibleValue:(float)arg5 maximumVisibleValue:(float)arg6;
- (BOOL)isAccessibilityElement;
- (void)_initSubviews;
- (void)_setValue:(double)arg1 andSendAction:(BOOL)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (id)accessibilityContainerElements;
- (void)_accessibilityIncrementMockSlider:(id)arg1;
- (void)_accessibilityDecrementMockSlider:(id)arg1;
- (void)_accessibilityNotifyDelegateWillBeginEditing;
- (void)_accessibilityNotifyDelegateScrubberDidBeginScrubbingWithHandle:(NSInteger)arg1;
- (double)_accessibilitySliderDeltaForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_accessibilityNotifyDelegateEditingStartValueDidChange:(double)arg1;
- (void)_accessibilityNotifyDelegateScrubberDidEndScrubbingWithHandle:(NSInteger)arg1;
- (void)_accessibilityNotifyDelegateEditingEndValueDidChange:(double)arg1;

@end

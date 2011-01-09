/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@class <UIAccessibilityElementMockViewDelegateProtocol>, UIView;



@interface UIAccessibilityElementMockView : UIAccessibilityElement 
{
    UIView *_view;
    <UIAccessibilityElementMockViewDelegateProtocol> *_delegate;
}

@property <UIAccessibilityElementMockViewDelegateProtocol> *delegate;
@property(retain) UIView *view;


- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setAccessibilityContainer:(id)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (void)setView:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (id)view;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)_accessibilityUserTestingElementType;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (struct CGPoint { float x1; float x2; })_accessibilityMinScrubberPosition;
- (struct CGPoint { float x1; float x2; })_accessibilityMaxScrubberPosition;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)accessibilityActivate;
- (void)_accessibilityScrollToVisible;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)revalidate;
- (NSInteger)accessibilityCompareGeometry:(id)arg1;

@end

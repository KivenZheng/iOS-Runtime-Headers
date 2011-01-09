/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABResponderDelegate>, UIColor;



@interface ABHighlightingTextField : UITextField 
{
    BOOL _isHighlighted;
    BOOL _isHighlightingEnabled;
    UIColor *_savedTextColor;
    UIColor *_highlightedTextColor;
    BOOL _showsClearButtonWhenEmpty;
    <ABResponderDelegate> *_responderDelegate;
}

@property BOOL showsClearButtonWhenEmpty;
@property <ABResponderDelegate> *responderDelegate;
@property(retain) UIColor *abHighlightedTextColor; /* unknown property attribute: SabSetHighlightedTextColor: */
@property BOOL abIsHighlightingEnabled; /* unknown property attribute: SabSetHighlightingEnabled: */
@property BOOL abIsHighlighted; /* unknown property attribute: SabSetHighlighted: */

+ (void)_initializeSafeCategory;

- (void)setTextColor:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)_showsClearButtonWhenEmpty;
- (id)_nextKeyResponder;
- (id)_previousKeyResponder;
- (void)dealloc;
- (void)setResponderDelegate:(id)arg1;
- (void)abSetHighlightedTextColor:(id)arg1;
- (void)abSetHighlightingEnabled:(BOOL)arg1;
- (void)abSetHighlighted:(BOOL)arg1;
- (void)setShowsClearButtonWhenEmpty:(BOOL)arg1;
- (BOOL)showsClearButtonWhenEmpty;
- (id)responderDelegate;
- (id)abHighlightedTextColor;
- (BOOL)abIsHighlightingEnabled;
- (BOOL)abIsHighlighted;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;

@end

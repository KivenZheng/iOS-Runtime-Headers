/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABSwellTextViewDelegate>, UITextView;



@interface ABSwellTextView : UIView <UITextViewDelegate>
{
    UITextView *_textView;
    float _maxHeight;
    BOOL _allowsEditing;
    <ABSwellTextViewDelegate> *_delegate;
    struct { 
        unsigned int delegateImplementsShouldBeginEditing : 1; 
        unsigned int delegateImplementsShouldEndEditing : 1; 
        unsigned int delegateImplementsDidBeginEditing : 1; 
        unsigned int delegateImplementsDidEndEditing : 1; 
        unsigned int delegateImplementsDidChange : 1; 
    } _flags;
}

@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property(getter=isHighlighted) BOOL highlighted;
@property UIColor *highlightedTextColor;
@property NSString *text;
@property UIFont *font;
@property UIColor *textColor;
@property <ABSwellTextViewDelegate> *delegate;
@property BOOL allowsEditing;
@property float maxHeight;

+ (float)lineHeightWithFont:(id)arg1;
+ (void)_initializeSafeCategory;

- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)highlightedTextColor;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)isHighlighted;
- (void)_beginPinningInputViews;
- (void)_endPinningInputViews;
- (BOOL)resignFirstResponder;
- (id)text;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)textColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)font;
- (void)setHighlighted:(BOOL)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)_clearBecomeFirstResponderWhenCapable;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)isScrollEnabled;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (float)abUITextView:(id)arg1 heightForContentSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection;
- (void)setKeyboardSettings:(id)arg1;
- (void)textViewTextDidChange:(id)arg1;
- (void)abUITextView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (float)maxHeight;
- (void)setMaxHeight:(float)arg1;
- (id)accessibilityValue;

@end

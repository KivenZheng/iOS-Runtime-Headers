/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIButton, CKBalloonView;



@interface CKMessageCell : UITableViewCell 
{
    CKBalloonView *_balloonView;
    UIButton *_failedButton;
    float _topPadding;
    float _bottomPadding;
    id _replacementMessageBubbleData;
}

@property(retain) id replacementMessageBubbleData;
@property(readonly) CKBalloonView *balloonView;

+ (id)_exclamationGlyphImage;
+ (id)_failImage;
+ (id)_failPressedImage;
+ (void)_initializeSafeCategory;

- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)_multiselectBackgroundColor;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_failPressed:(id)arg1;
- (void)didTapBalloon:(id)arg1;
- (void)_resetBalloonFrame;
- (void)setReplacementMessageBubbleData:(id)arg1;
- (id)balloonView;
- (void)addBalloonView:(id)arg1;
- (void)setTopPadding:(float)arg1 bottomPadding:(float)arg2;
- (id)replacementMessageBubbleData;
- (void)setFailed:(BOOL)arg1;
- (void)accessibilityActivate;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end

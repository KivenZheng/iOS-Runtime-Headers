/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardEmojiScrollView, UIButton, UIKeyboardEmojiFactory, UIKeyboardEmojiCategoryController, UIKeyboardEmojiRecentsController, UIKeyboardEmojiCategoriesControl;



@interface UIKeyboardLayoutEmoji : UIKeyboardLayout <UIKeyboardEmojiController>
{
    UIKeyboardEmojiScrollView *_emojiView;
    UIButton *_globeButton;
    UIButton *_deleteButton;
    UIKeyboardEmojiCategoriesControl *_categoriesView;
    UIKeyboardEmojiFactory *_emojiFactory;
    UIKeyboardEmojiRecentsController *_recentsController;
    UIKeyboardEmojiCategoryController *_categoryController;
}

+ (void)_initializeSafeCategory;

- (id)defaultsDictionary;
- (void)updateCornerButtonImages;
- (id)emojiForCodePoint:(id)arg1;
- (void)emojiSelected:(id)arg1;
- (id)recents;
- (void)save:(id)arg1;
- (void)globeLongPressGestureRecognized:(id)arg1;
- (void)globeDown;
- (void)globeSwitch;
- (void)deleteBegin;
- (void)deleteEnd;
- (void)categoryChangedNoSounds;
- (void)categoryChanged;
- (void)categoryReselected;
- (void)deactivateActiveKeys;
- (BOOL)shouldShowIndicator;
- (void)showKeyboardType:(NSInteger)arg1 withAppearance:(NSInteger)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityContainerElements;

@end

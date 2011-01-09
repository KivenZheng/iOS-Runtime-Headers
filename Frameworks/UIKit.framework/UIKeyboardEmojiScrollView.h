/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPageControl, UILabel, <UIKeyboardEmojiController>, UIScrollView, UIKeyboardEmojiCategory, NSMutableArray;



@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate>
{
    UIKeyboardEmojiCategory *_category;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    UILabel *_categoryLabel;
    NSMutableArray *_pages;
    NSInteger _currentPage;
    <UIKeyboardEmojiController> *_controller;
}

@property <UIKeyboardEmojiController> *controller;

+ (void)_initializeSafeCategory;

- (NSInteger)currentPage;
- (void)setController:(id)arg1;
- (void)doLayout;
- (id)localizedStringForKey:(id)arg1;
- (void)layoutRecents;
- (void)delayedLayout:(id)arg1;
- (void)layoutPages;
- (void)interruptScrolling;
- (void)clearPages;
- (void)pageChanged;
- (void)ensureSurrounded:(NSInteger)arg1;
- (void)setScrollDelay:(double)arg1;
- (void)setCategory:(id)arg1;
- (void)goToFirstPage;
- (id)controller;
- (void)forceLayout;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)_accessibilityDelayedPost;

@end

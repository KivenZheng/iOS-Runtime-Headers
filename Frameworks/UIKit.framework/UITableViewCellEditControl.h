/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCell;



@interface UITableViewCellEditControl : UIControl 
{
    UITableViewCell *_cell;
    unsigned int _style : 2;
    unsigned int _rotated : 1;
    unsigned int _rotating : 1;
    unsigned int _hiding : 1;
    unsigned int _reserved : 27;
}

@property(getter=isRotated) BOOL rotated;
@property(getter=isHiding) BOOL hiding;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_minusRect;
+ (id)_deleteImageBackground;
+ (id)_deleteImage;
+ (id)_insertImage;
+ (id)_multiSelectNotSelectedImage;
+ (id)_multiSelectSelectedImage;
+ (id)_multiSelectHighlightedImage;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (void)_initializeSafeCategory;

- (id)_minusView;
- (void)_updateImageView;
- (void)_toggleRotate;
- (id)_currentImage;
- (void)setRotated:(BOOL)arg1;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isRotated;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(NSInteger)arg2;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isHiding;
- (void)setHiding:(BOOL)arg1;
- (BOOL)isRotating;
- (void)_multiselectColorChanged;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;

@end

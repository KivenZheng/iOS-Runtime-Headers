/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage;



@interface UIShadowView : UIView 
{
    UIImage *_image;
}

+ (id)topShadowImage;
+ (id)bottomShadowImage;

- (void)setShadowImage:(id)arg1 forEdge:(NSInteger)arg2 inside:(BOOL)arg3;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)ignoresMouseEvents;

@end

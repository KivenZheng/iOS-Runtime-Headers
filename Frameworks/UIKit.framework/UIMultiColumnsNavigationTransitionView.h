/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIColor, UIView;



@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding>
{
    id _delegate;
    NSInteger _transition;
    UIView *_firstResponderViewToRestore;
    unsigned int _isTransitioning : 1;
    float _columnWidth;
    NSInteger _columnCount;
    NSArray *_fromViews;
    NSArray *_toViews;
    NSArray *_viewsToRemove;
    NSArray *_viewsToAdd;
    NSArray *_displayedViews;
    struct __CFDictionary { } *_dividerViews;
    struct __CFDictionary { } *_containerViews;
    UIColor *_dividersColor;
    float _dividersWidth;
}

@property NSInteger columnCount;
@property float columnWidth;
@property id delegate;

+ (double)defaultDurationForTransition:(NSInteger)arg1;

- (NSInteger)columnCount;
- (BOOL)transition:(NSInteger)arg1 toViews:(id)arg2;
- (BOOL)transition:(NSInteger)arg1 fromViews:(id)arg2 toViews:(id)arg3;
- (BOOL)isTransitioning;
- (id)_dividerViewForView:(id)arg1;
- (void)_removeDividerViewForView:(id)arg1;
- (id)_containerViewForView:(id)arg1;
- (void)_removeContainerViewForView:(id)arg1;
- (void)setColumnCount:(NSInteger)arg1;
- (float)columnWidth;
- (void)setColumnWidth:(float)arg1;
- (void)_navigationTransitionDidStop;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

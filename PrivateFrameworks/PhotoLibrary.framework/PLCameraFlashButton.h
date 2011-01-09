/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraFlashLabelView, UIImageView, <PLCameraFlashButtonDelegate>, PLSpacerView;



@interface PLCameraFlashButton : PLReorientingButton <UIAlertViewDelegate>
{
    PLCameraFlashLabelView *_warningIndicatorLabel;
    PLCameraFlashLabelView *_onLabel;
    PLCameraFlashLabelView *_offLabel;
    PLCameraFlashLabelView *_autoLabel;
    PLSpacerView *_spacer1;
    PLSpacerView *_spacer2;
    PLSpacerView *_spacer3;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    NSInteger _flashMode;
    BOOL _enabled;
    BOOL _showsWarningIndicator;
    BOOL _showingAllModes;
    BOOL _hideAuto;
    <PLCameraFlashButtonDelegate> *_delegate;
}

@property NSInteger flashMode;
@property BOOL enabled;
@property BOOL showsWarningIndicator;
@property BOOL hideAuto;
@property <PLCameraFlashButtonDelegate> *delegate;

+ (void)_initializeSafeCategory;

- (BOOL)hideAuto;
- (id)_currentLabel;
- (void)setFlashMode:(NSInteger)arg1;
- (void)setShowsWarningIndicator:(BOOL)arg1;
- (BOOL)showsWarningIndicator;
- (void)_cancelCollapse;
- (void)_scheduleCollapse;
- (void)setButtonOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (float)_expandedWidth;
- (void)_showAllModes;
- (void)_collapseAndSetMode:(NSInteger)arg1;
- (void)_collapse;
- (void)setHideAuto:(BOOL)arg1;
- (void)_handleSingleTap:(id)arg1;
- (void)setFlashMode:(NSInteger)arg1 notifyDelegate:(BOOL)arg2;
- (NSInteger)flashMode;
- (BOOL)enabled;
- (BOOL)isExpanded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isAccessibilityElement;

@end

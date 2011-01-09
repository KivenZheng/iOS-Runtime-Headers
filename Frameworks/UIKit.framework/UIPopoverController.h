/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIView, UIBarButtonItem, UIViewController;



@interface UIPopoverController : NSObject 
{
    id _delegate;
    UIViewController *_contentViewController;
    UIView *_popoverView;
    NSArray *_passthroughViews;
    NSUInteger _popoverArrowDirection;
    NSUInteger _popoverBackgroundStyle;
    struct CGSize { 
        float width; 
        float height; 
    } _popoverContentSize;
    UIBarButtonItem *_targetBarButtonItem;
    NSUInteger _toViewAutoResizingMask;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    UIViewController *_slidingViewController;
    id _target;
    SEL _didEndSelector;
    struct { 
        unsigned int isPresentingOrDismissing : 1; 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int needsRepresentAfterRotation : 1; 
        unsigned int dimsWhenModal : 1; 
    } _popoverControllerFlags;
}

@property(retain) UIViewController *contentViewController;
@property CGSize popoverContentSize;
@property(getter=isPopoverVisible,readonly) BOOL popoverVisible;
@property(copy) NSArray *passthroughViews;
@property CGRect popoverFrame;
@property NSUInteger popoverArrowDirection;
@property <UIPopoverControllerDelegate> *delegate;


- (void)setContentViewController:(id)arg1;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3;
- (BOOL)_dimmingViewDimsWhenModal;
- (void)_setDimmingViewDimsWhenModal:(BOOL)arg1;
- (void)_disableAutomaticKeyboard:(id)arg1;
- (void)_adjustPopoverForNewContentSize:(id)arg1;
- (id)popoverView;
- (void)_setupIncomingViewController:(id)arg1 presenting:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_teardownOutgoingViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popoverFrame;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })popoverContentSize;
- (BOOL)_canRepresentAutomatically;
- (void)_hostingWindowWillRotate:(id)arg1;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_startWatchingForWindowRotations;
- (void)_stopWatchingForWindowRotations;
- (void)_popoverPresentAnimationCompleted;
- (void)_popoverDismissAnimationCompleted;
- (void)_popoverIncomingAnimationCompleted;
- (void)_setPopoverRasterizesLayer:(BOOL)arg1;
- (BOOL)_popoverRasterizesLayer;
- (void)_setPopoverBackgroundStyle:(NSInteger)arg1;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)_preparePopoverViewForModalPresentation;
- (void)_restorePopOverViewAfterModalPresentation;
- (void)_preparePopoverViewForActionSheetPresentation;
- (void)_restorePopOverViewAfterActionSheetPresentation;
- (BOOL)isPresentingOrDismissing;
- (void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (NSUInteger)popoverArrowDirection;
- (void)setPopoverArrowDirection:(NSUInteger)arg1;
- (NSInteger)_popoverBackgroundStyle;
- (BOOL)_popoverShouldBeDismissed:(id)arg1;
- (void)_dismissPopoverAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_popoverDidDismiss:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (id)passthroughViews;
- (void)setPassthroughViews:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(NSUInteger)arg3 animated:(BOOL)arg4;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (id)contentViewController;
- (void)_containedViewControllerModalStateChanged;
- (BOOL)isPopoverVisible;
- (void)_modalTransition:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)copyScriptPopOver;

@end

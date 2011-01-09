/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewControllerReserved;



@interface QLPreviewController : UIViewController <UIDocumentInteractionControllerDelegate>
{
    QLPreviewControllerReserved *_reserved;
}

@property <QLPreviewControllerDataSource> *dataSource;
@property NSInteger currentPreviewItemIndex;
@property(readonly) <QLPreviewItem> *currentPreviewItem;
@property id delegate;

+ (BOOL)canPreviewItem:(id)arg1;
+ (BOOL)canPreviewMIMEType:(id)arg1;

- (void)doneButtonClicked:(id)arg1;
- (void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)_viewWillStartPresentWithTransition;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)modalTransitionStyle;
- (BOOL)hidesBottomBarWhenPushed;
- (void)_commonInit;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)previewView:(id)arg1 willRemoveDisplayBundle:(id)arg2;
- (void)previewView:(id)arg1 didLoadItem:(id)arg2 withError:(id)arg3;
- (BOOL)_isInNavigationController;
- (id)_currentNavigationController;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (void)setBlockRemoteImages:(BOOL)arg1;
- (BOOL)blockRemoteImages;
- (id)currentPreviewItem;
- (void)setCurrentPreviewItemIndex:(NSInteger)arg1;
- (NSInteger)currentPreviewItemIndex;
- (void)refreshCurrentPreviewItem;
- (void)previewView:(id)arg1 willAddDisplayBundle:(id)arg2;
- (id)_titleForPreviewItem:(id)arg1;
- (void)_loadToolbarItems;
- (void)_loadInternalViews;
- (void)_removeOverlayIdleTimer;
- (void)_updateArrows;
- (void)_updateNavigationBarWithPreviewItem:(id)arg1;
- (id)previewView:(id)arg1 willSendRequest:(id)arg2;
- (BOOL)previewView:(id)arg1 decidePolicyForNavigationType:(NSInteger)arg2 request:(id)arg3;
- (id)_documentProxy;
- (void)_openURL:(id)arg1 withApplicationProxy:(id)arg2;
- (id)interactionController;
- (void)actionButtonTapped:(id)arg1;
- (void)leftArrowAction:(id)arg1;
- (void)rightArrowAction:(id)arg1;
- (void)_showOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setControlsOverlayVisible:(BOOL)arg1 withStatusBar:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_addFadeAnimationToView:(id)arg1 fromAlpha:(float)arg2 toAlpha:(float)arg3 duration:(double)arg4 withCurve:(NSInteger)arg5;
- (void)_prepareTransitionImageForZoomingIn:(BOOL)arg1;
- (void)_setClippingViewActive:(BOOL)arg1;
- (void)_prepareForFullScreenZoomIn;
- (void)_zoomToFullScreenWithDuration:(double)arg1;
- (void)_prepareForFullScreenZoomOut;
- (void)_dismissFromFullScreenWithDuration:(double)arg1;
- (void)previewViewWasTapped:(id)arg1;
- (void)_showOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_fireOverlayIdleTimer:(id)arg1;
- (void)_resetOverlayIdleTimer;

@end

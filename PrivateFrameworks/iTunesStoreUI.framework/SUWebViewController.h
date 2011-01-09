/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUWebView, SUObjectPool, SUDelayedNavigationItem, SUStorePageProtocol, SUTableViewController, SUItem, SUStructuredPage, NSURL;



@interface SUWebViewController : SUViewController <SUWebViewDelegate>
{
    SUDelayedNavigationItem *_delayedNavigationItem;
    BOOL _hasEverAppeared;
    NSInteger _lastKnownOrientation;
    SUObjectPool *_objectPool;
    NSInteger _rotationState;
    SUItem *_rootItem;
    NSInteger _scheduledOrientation;
    SUStorePageProtocol *_storePageProtocol;
    NSInteger _style;
    SUStructuredPage *_trackList;
    SUTableViewController *_trackListController;
    NSURL *_url;
    BOOL _viewIsReady;
    SUWebView *_webView;
}

@property(retain,readonly) SUWebView *webView;
@property BOOL viewIsReady;
@property NSInteger style;

+ (void)_initializeSafeCategory;

- (void)webView:(id)arg1 willInjectScriptObject:(id)arg2;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (id)copyScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)newDataProviderToProcessProtocol;
- (id)newViewControllerForTrackList:(id)arg1;
- (id)copyDefaultScriptProperties;
- (void)invalidateForMemoryPurge;
- (id)navigationItemForScriptInterface;
- (void)_performScheduledRotation;
- (void)_scheduleRotationToInterfaceOrientation:(NSInteger)arg1;
- (void)webView:(id)arg1 performPurchaseAnimationWithView:(id)arg2;
- (void)_addPlaceholderBackgroundView;
- (void)_applyScriptProperties:(id)arg1;
- (void)_handleProtocol:(id)arg1;
- (void)_handleRootObject:(id)arg1;
- (void)_handleTrackList:(id)arg1;
- (BOOL)_orientationAffectsWebViewFrame;
- (id)_placeholderBackgroundView;
- (void)_reloadObjectPool;
- (void)_reloadPlaceholderBackgroundView;
- (void)_reloadUI;
- (void)_removePlaceholderBackgroundView;
- (void)_selectTrackListItemWithIdentifier:(id)arg1;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(NSInteger)arg1;
- (void)_setTrackListController:(id)arg1;
- (void)_updateTrackListRootItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_webViewFrameForOrientation:(NSInteger)arg1;
- (void)setViewIsReady:(BOOL)arg1;
- (void)operationFinished:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setStorePageProtocol:(id)arg1;
- (BOOL)viewIsReady;
- (id)storePageProtocol;
- (void)setScriptProperties:(id)arg1;
- (void)storePageProtocolDidChange;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (id)parentViewControllerForWebView:(id)arg1;
- (void)webView:(id)arg1 foundPropertyList:(id)arg2 ofType:(NSInteger)arg3;
- (void)webView:(id)arg1 receivedEventOfType:(NSInteger)arg2 userInfo:(id)arg3;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)webView;
- (BOOL)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)style;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(NSInteger)arg2;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;

@end

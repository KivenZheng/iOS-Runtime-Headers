/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUPageSectionGroup, UISegmentedControl, SUNavigationMenuViewController, ISURLRequest, SUSearchFieldController, SUStorePageProtocol, NSString, SUViewController, UIPopoverController, SSAuthenticationContext;



@interface SUStorePageViewController : SUViewController <ISURLOperationDelegate>
{
    SUViewController *_activeChildViewController;
    struct __CFSet { } *_allowedInterfaceOrientations;
    double _expirationTime;
    NSInteger _pageType;
    SUViewController *_pendingChildViewController;
    SUStorePageProtocol *_lastValidProtocol;
    UIPopoverController *_navigationMenuPopover;
    SUNavigationMenuViewController *_navigationMenuViewController;
    SUSearchFieldController *_searchFieldController;
    BOOL _externalRequest;
    BOOL _loadingForSectionChange;
    BOOL _reloadOnAppear;
    SSAuthenticationContext *_authContext;
    ISURLRequest *_urlRequest;
    BOOL _needsAuthentication;
    NSString *_urlBagKey;
    NSInteger _activeSectionIndex;
    UISegmentedControl *_sectionSwitchControl;
    SUPageSectionGroup *_sectionsGroup;
}

@property(copy) ISURLRequest *URLRequest;
@property(retain) NSString *urlBagKey;
@property(readonly) UISegmentedControl *sectionSegmentedControl;
@property(readonly) SUPageSectionGroup *sectionGroup;
@property(readonly) SUSearchFieldController *searchFieldController;
@property BOOL needsAuthentication;
@property(getter=isExternalRequest) BOOL externalRequest;
@property(retain) SSAuthenticationContext *authenticationContext;
@property(readonly) SUViewController *activeChildViewController;

+ (void)_initializeSafeCategory;

- (void)handleApplicationURL:(id)arg1;
- (void)resetNavigationItem:(id)arg1;
- (void)setUrlBagKey:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(NSInteger)arg2;
- (id)copyScriptProperties;
- (id)displayedURL;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(NSInteger)arg2 returningError:(id*)arg3;
- (void)handleFailureWithError:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (BOOL)reloadForSectionsWithGroup:(id)arg1;
- (id)copyDefaultScriptProperties;
- (void)invalidateForMemoryPurge;
- (id)navigationItemForScriptInterface;
- (void)restoreArchivableContext:(id)arg1;
- (BOOL)reloadWithURLRequest:(id)arg1;
- (BOOL)loadMoreWithURL:(id)arg1;
- (void)setURLRequest:(id)arg1;
- (BOOL)decidePolicyForWebNavigationAction:(id)arg1 request:(id)arg2 decisionListener:(id)arg3;
- (id)newFetchOperation;
- (void)reloadWithStorePage:(id)arg1 ofType:(NSInteger)arg2 forURL:(id)arg3;
- (void)showPlaceholderViewController;
- (void)applicationWillEnterForeground;
- (id)copyScriptViewController;
- (void)reloadForNetworkTypeChange;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (id)parentViewControllerForSearchFieldController:(id)arg1;
- (void)_sendFailureAfterDialogsFinished:(id)arg1;
- (void)_navigationButtonAction:(id)arg1;
- (void)_navigationMenuButtonAction:(id)arg1;
- (void)_sectionControlAction:(id)arg1;
- (void)_applyPropertiesToViewController:(id)arg1;
- (void)_delayedFetchPage;
- (void)_dismissNavigationMenuViewController;
- (void)_fetchPage:(BOOL)arg1;
- (void)_finishHandlingFailure;
- (void)_finishSuccessfulLoad;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForActiveViewController;
- (void)_handleViewControllerBecameReady:(id)arg1;
- (BOOL)_isBlankPage;
- (void)_moveChildViewController:(id)arg1 toOverlayForProtocol:(id)arg2;
- (void)_moveToRootSectionForChildViewController:(id)arg1;
- (id)_newSegmentedControlWithItems:(id)arg1;
- (void)_reloadForAppearance:(BOOL)arg1;
- (void)_reloadNavigationBar;
- (void)_reloadNavigationButtons;
- (void)_reloadNavigationMenus;
- (void)_reloadSearchFieldWithSection:(id)arg1;
- (void)_reloadSectionsControlWithGroup:(id)arg1;
- (void)_repositionForChildViewController:(id)arg1;
- (void)_setActiveChildViewController:(id)arg1;
- (void)_setAllowedOrientations:(id)arg1;
- (void)_setLeftNavigationItem:(id)arg1 forTag:(NSInteger)arg2;
- (void)_setPendingChildViewController:(id)arg1;
- (void)_setRightNavigationItem:(id)arg1 forTag:(NSInteger)arg2;
- (BOOL)_shouldDisplaySectionsInNavigationBar:(id)arg1;
- (BOOL)_shouldFetchAutomatically;
- (void)_tearDownNavigationMenu;
- (void)_verifyStorePageProtocol:(id)arg1;
- (id)URLRequest;
- (id)sectionSegmentedControl;
- (id)sectionGroup;
- (id)searchFieldController;
- (BOOL)needsAuthentication;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (BOOL)isExternalRequest;
- (void)setExternalRequest:(BOOL)arg1;
- (id)authenticationContext;
- (id)activeChildViewController;
- (BOOL)pushStorePage:(id)arg1 withTarget:(NSInteger)arg2 animated:(BOOL)arg3;
- (id)setDisplayedSectionGroup:(id)arg1;
- (id)urlBagKey;
- (void)setSection:(id)arg1;
- (id)newPlaceholderViewController;
- (id)storePageProtocol;
- (BOOL)shouldExcludeFromNavigationHistory;
- (double)defaultPNGExpirationTime;
- (void)applicationDidEnterBackground;
- (void)setScriptProperties:(id)arg1;
- (void)storePageProtocolDidChange;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (id)copyArchivableContext;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (BOOL)isLoaded;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reload;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg1;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLAlbumsController, UINavigationItem, NSArray;



@interface PLPhotoScrollerViewController : UIViewController 
{
    id _delegate;
    PLAlbumsController *_albumsController;
    NSUInteger _itemIndex;
    UINavigationItem *_navItem;
    NSArray *_items;
    NSInteger _previousInterfaceOrientation;
    unsigned int _canShowCopyCallout : 1;
    unsigned int _didDisplay : 1;
    unsigned int _modalSheetIsPresent : 1;
    unsigned int _dontChangeStatusBar : 1;
    unsigned int _toolbarWasHiddenWhenSelfWasPushed : 1;
    unsigned int _viewDidUnload : 1;
}

@property NSUInteger visibleItemIndex;
@property BOOL canShowCopyCallout;
@property <PLPhotoScrollerViewControllerDelegate> *delegate;


- (id)_initWithAlbum:(id)arg1 lockStatusBar:(BOOL)arg2 currentImageIndex:(NSInteger)arg3;
- (void)_setCurrentImageIndex:(NSUInteger)arg1;
- (void)setDontChangeStatusBar:(BOOL)arg1;
- (BOOL)dontChangeStatusBar;
- (BOOL)albumsControllerShowActionSheet:(id)arg1 inView:(id)arg2;
- (NSUInteger)visibleItemIndex;
- (void)setVisibleItemIndex:(NSUInteger)arg1;
- (id)itemAtIndex:(NSUInteger)arg1;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (void)photoDidChange:(id)arg1;
- (BOOL)_visibleItemAllowsRotation;
- (void)_forceRotationToPortaitIfNecessary;
- (void)albumDidChange:(id)arg1;
- (void)albumsController:(id)arg1 didMoveToPhotoAtIndex:(NSUInteger)arg2;
- (void)_updateNavigationItemTitle;
- (BOOL)albumsControllerShouldShowActionItem:(id)arg1;
- (BOOL)canShowCopyCallout;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)copy:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidUnload;
- (void)setParentViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)rotatingFooterView;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (id)toolbarItems;
- (id)navigationItem;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

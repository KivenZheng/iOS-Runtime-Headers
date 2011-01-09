/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UISearchDisplayDelegate>, UITableView, UISearchBar, UILabel, UIView, <UITableViewDataSource>, UIViewController, NSString, <UITableViewDelegate>, UIPopoverController;



@interface UISearchDisplayController : NSObject 
{
    UIViewController *_viewController;
    UITableView *_tableView;
    UIView *_dimmingView;
    UISearchBar *_searchBar;
    UILabel *_noResultsLabel;
    NSString *_noResultsMessage;
    <UISearchDisplayDelegate> *_delegate;
    <UITableViewDataSource> *_tableViewDataSource;
    <UITableViewDelegate> *_tableViewDelegate;
    struct __CFArray { } *_containingScrollViews;
    float _lastKeyboardAdjustment;
    float _lastFooterAdjustment;
    UIPopoverController *_popoverController;
    NSInteger _searchResultsTableViewStyle;
    struct { 
        unsigned int visible : 1; 
        unsigned int animating : 1; 
        unsigned int hidIndexBar : 1; 
        unsigned int hidNavigationBar : 1; 
        unsigned int noResultsMessageVisible : 1; 
        unsigned int noResultsMessageAutoDisplay : 1; 
        unsigned int navigationBarHidingEnabled : 1; 
        unsigned int dimTableViewOnEmptySearchString : 1; 
        unsigned int isRotatingWithPopover : 1; 
        unsigned int cancelButtonManagementDisabled : 1; 
    } _searchDisplayControllerFlags;
}

@property(getter=isActive) BOOL active;
@property BOOL noResultsMessageVisible;
@property BOOL automaticallyShowsNoResultsMessage;
@property(copy) NSString *noResultsMessage;
@property(getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;
@property BOOL dimTableViewOnEmptySearchString;
@property(getter=_isCancelButtonManagementDisabled) BOOL cancelButtonManagementDisabled; /* unknown property attribute: S_setCancelButtonManagementDisabled: */
@property(readonly) UITableView *searchResultsTableView;
@property <UITableViewDelegate> *searchResultsDelegate;
@property <UITableViewDataSource> *searchResultsDataSource;
@property(readonly) UISearchBar *searchBar;
@property(readonly) UIViewController *searchContentsController;
@property <UISearchDisplayDelegate> *delegate;

+ (void)_initializeSafeCategory;

- (id)searchContentsController;
- (id)searchResultsDataSource;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(NSInteger)arg3;
- (void)_configureSearchBarForTableView;
- (void)_cleanUpSearchBar;
- (void)_configureNewSearchBar;
- (void)setSearchBar:(id)arg1;
- (void)_setupNoResultsLabelIfNecessary;
- (void)setSearchContentsController:(id)arg1;
- (id)_containingViewOfClass:(Class)arg1;
- (id)_containingTableView;
- (BOOL)_isSearchBarInBar;
- (void)_popoverKeyboardDidShow:(id)arg1;
- (void)_popoverKeyboardDidHide:(id)arg1;
- (void)_popoverClearButtonPressed:(id)arg1;
- (id)_createPopoverController;
- (void)_destroyManagedTableView;
- (void)_disableParentScrollViews;
- (void)_enableParentScrollViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tableViewFrame;
- (void)_adjustTableViewContentInsets;
- (void)_setTableViewVisible:(BOOL)arg1 inView:(id)arg2;
- (void)_updateSearchBarForTableViewIndexBar:(id)arg1;
- (void)_indexBarFrameChanged:(id)arg1;
- (void)_searchBarSuperviewWillChange;
- (void)showHideAnimationDidFinish;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)windowWillAnimateRotation:(id)arg1;
- (void)windowDidRotate:(id)arg1;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)navigationControllerWillShowViewController:(id)arg1;
- (void)navigationControllerDidShowViewController:(id)arg1;
- (void)_updateNoSearchResultsMessageVisiblity;
- (void)_managedTableViewDidScroll;
- (void)popoverController:(id)arg1 animationCompleted:(NSInteger)arg2;
- (id)searchResultsTableView;
- (void)setSearchResultsDataSource:(id)arg1;
- (void)setSearchResultsDelegate:(id)arg1;
- (void)setNoResultsMessageVisible:(BOOL)arg1;
- (BOOL)noResultsMessageVisible;
- (void)setAutomaticallyShowsNoResultsMessage:(BOOL)arg1;
- (BOOL)automaticallyShowsNoResultsMessage;
- (void)setNoResultsMessage:(id)arg1;
- (id)noResultsMessage;
- (BOOL)isNavigationBarHidingEnabled;
- (void)setNavigationBarHidingEnabled:(BOOL)arg1;
- (void)setDimTableViewOnEmptySearchString:(BOOL)arg1;
- (BOOL)dimTableViewOnEmptySearchString;
- (BOOL)_isCancelButtonManagementDisabled;
- (void)_setCancelButtonManagementDisabled:(BOOL)arg1;
- (id)_noResultsMessageLabel;
- (id)searchResultsDelegate;
- (id)searchBar;
- (void)_searchBarSuperviewChanged;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(NSInteger)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (BOOL)isActive;
- (void)_clearViewController;
- (void)_keyboardWillShow:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UINavigationController;



@interface SUScriptNavigationController : SUScriptViewController 
{
    UINavigationController *_navController;
}

@property(readonly) SUScriptNavigationBar *navigationBar;
@property BOOL navigationBarHidden;
@property(readonly) SUScriptViewController *topViewController;
@property(retain) id viewControllers;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)didPerformBatchedInvocations;
- (void)willPerformBatchedInvocations;
- (BOOL)navigationBarHidden;
- (void)setTopViewController:(id)arg1;
- (id)_copyNavigationBar;
- (id)_copyTopViewController;
- (id)_copyViewControllers;
- (void)_initWithRootScriptViewController:(id)arg1;
- (BOOL)_isNavigationBarHidden;
- (void)_popToRootViewControllerAnimated:(BOOL)arg1;
- (void)_popViewControllerAnimated:(BOOL)arg1;
- (void)_pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;
- (id)_filteredViewControllers;
- (id)newNativeViewController;
- (id)initWithRootScriptViewController:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)_navigationController;
- (void)setViewControllers:(id)arg1;
- (id)navigationBar;
- (id)viewControllers;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)topViewController;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)setNavigationBar:(id)arg1;
- (void)dealloc;
- (id)attributeKeys;

@end

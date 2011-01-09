/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class UIImageView, ADBannerView, UIColor, UIView, <ADRemoteViewControllerDelegate>, ADRemoteView;



@interface ADRemoteViewController : UIViewController 
{
    <ADRemoteViewControllerDelegate> *_delegate;
    NSInteger _initialOrientation;
    NSInteger _supportedOrientations;
    struct CGImage { } *_screenBeforeTransition;
    ADBannerView *_transitionFromBanner;
    ADRemoteView *_remoteView;
    UIColor *_backgroundColor;
    UIImageView *_screenshotTopView;
    UIImageView *_screenshotBottomView;
    UIImageView *_fullScreenAdImageView;
    UIView *_containerView;
    struct { 
        unsigned int statusBarWasHidden : 1; 
        unsigned int isPresenting : 1; 
        unsigned int transitionIsComplete : 1; 
        unsigned int remoteContentIsReady : 1; 
        unsigned int hasRemoteContextId : 1; 
        unsigned int willPresent : 1; 
        unsigned int willDismiss : 1; 
    } _flags;
    BOOL _remoteVideoPlayerIsFullScreen;
}

@property BOOL remoteVideoPlayerIsFullScreen;
@property(retain) ADBannerView *transitionFromBanner;
@property NSInteger supportedOrientations;
@property NSInteger initialOrientation;
@property(retain) UIColor *backgroundColor;
@property <ADRemoteViewControllerDelegate> *delegate;


- (void)_viewWillStartPresentWithTransition;
- (void)_startPresentCustomTransitionWithDuration:(double)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (NSInteger)modalTransitionStyle;
- (id)backgroundColor;
- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)remoteVideoPlayerIsFullScreen;
- (void)_updateForRemoteView;
- (void)adSheetReadyToDisplay;
- (void)setRemoteVideoPlayerIsFullScreen:(BOOL)arg1;
- (id)transitionFromBanner;
- (void)setTransitionFromBanner:(id)arg1;
- (NSInteger)supportedOrientations;
- (void)setSupportedOrientations:(NSInteger)arg1;
- (NSInteger)initialOrientation;
- (id)_remoteView;
- (void)willDismissModalViewController;
- (void)setRemoteWindowContextId:(NSUInteger)arg1;
- (void)setInitialOrientation:(NSInteger)arg1;
- (void)willPresentModalViewController;

@end

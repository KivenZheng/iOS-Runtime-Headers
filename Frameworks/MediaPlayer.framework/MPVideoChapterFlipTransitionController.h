/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UITextLabel, UINavigationItem, UINavigationBar;



@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController 
{
    UINavigationBar *_navigationBar;
    UINavigationItem *_originalNavigationItem;
    UITextLabel *_chapterGuideTitleLabel;
    unsigned int _shouldPlayAfterFlip : 1;
}

@property BOOL playAfterFlip;
@property(retain) UINavigationBar *navigationBar;


- (NSInteger)_interfaceOrientation;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg1;
- (void)dealloc;
- (void)setPlayAfterFlip:(BOOL)arg1;
- (BOOL)playAfterFlip;
- (BOOL)leaveSpaceForStatusBarAndNavigationBarInOrientation:(NSInteger)arg1;
- (void)_done:(id)arg1;
- (void)_hideNavigationBarAnimationDidFinish:(id)arg1;
- (id)_copySwizzledNavigationViews;
- (void)_hideNavigationAndStatusBars;
- (void)_restoreOriginalNavigationViews:(BOOL)arg1;
- (void)_showChapterGuideNavigationViews;
- (id)_chapterGuideTitleLabel;
- (void)transition:(NSUInteger)arg1;

@end

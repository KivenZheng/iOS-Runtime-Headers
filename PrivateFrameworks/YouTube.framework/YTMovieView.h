/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class UIImageView, NSArray, UIMoviePlayerController, YTSearchRequest, YTVideo, NSURL;



@interface YTMovieView : UIView 
{
    id _delegate;
    YTVideo *_video;
    NSArray *_videoList;
    NSURL *_youTubeURL;
    YTSearchRequest *_videoInfoRequest;
    UIMoviePlayerController *_moviePlayer;
    UIImageView *_bugView;
    UIImageView *_gradientView;
    BOOL _canAutoPlay;
    BOOL _shownFromExternalURL;
    BOOL _switchingVideos;
    BOOL _controlsShown;
    BOOL _useSmallLogo;
    double _seekTime;
}


- (void)setFullscreen:(BOOL)arg1;
- (BOOL)moviePlayerExitRequest:(id)arg1 exitReason:(NSInteger)arg2;
- (BOOL)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)play;
- (BOOL)isPlaying;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(NSUInteger)arg3 videosRemaining:(NSUInteger)arg4;
- (void)setSeekTime:(double)arg1;
- (void)_destroyMoviePlayer;
- (BOOL)_canShare;
- (BOOL)_canBookmark;
- (void)_setupBackground;
- (void)_switchToVideo:(id)arg1;
- (void)_loadVideoFromURL:(BOOL)arg1;
- (void)_loadVideoInfoWithID:(id)arg1;
- (void)_cancelVideoInfoRequest;
- (void)willShowForVideo:(id)arg1 inList:(id)arg2 orVideoID:(id)arg3;
- (void)didShow;
- (void)willHide;
- (void)didHide;
- (void)setCanAutoPlay:(BOOL)arg1;
- (void)willShowAlert;
- (void)useSmallLogo:(BOOL)arg1;
- (void)_hideOverlay;
- (void)_hideBug;
- (void)shareSheetDidHide;
- (void)_presentAlertForError:(id)arg1;
- (void)forceControlsVisible:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)orientation;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)video;
- (id)moviePlayer;
- (BOOL)moviePlayerAddBookmarkButtonPressed:(id)arg1;
- (BOOL)moviePlayerBackwardButtonPressed:(id)arg1;
- (BOOL)moviePlayerEmailButtonPressed:(id)arg1;
- (BOOL)moviePlayerForwardButtonPressed:(id)arg1;
- (void)moviePlayerWillEnterFullscreen:(id)arg1;
- (void)moviePlayerWillExitFullscreen:(id)arg1;
- (void)moviePlayerDidExitFullscreen:(id)arg1;
- (void)moviePlayerWillShowOverlay:(id)arg1;
- (void)moviePlayerDidShowOverlay:(id)arg1;
- (void)moviePlayerWillHideOverlay:(id)arg1;
- (void)moviePlayerDidHideOverlay:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })moviePlayerFrameAfterFullscreenExit:(id)arg1;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(NSUInteger)arg2;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (BOOL)moviePlayer:(id)arg1 validateAction:(SEL)arg2;
- (id)fullscreenView;
- (BOOL)canContinuePlayingWhenLocked;
- (void)pause;

@end

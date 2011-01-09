/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImageView, MPAVController, NSString, NSTimer, UILabel;



@interface MPVolumeSlider : UISlider 
{
    NSTimer *_commitTimer;
    MPAVController *_avController;
    NSString *_volumeAudioCategory;
    NSInteger _style;
    UILabel *_routeNameLabel;
    UIImageView *_thumbImageView;
    UIImageView *_thumbMaskImageView;
    unsigned int _superviewIsVolumeView : 1;
}

@property(retain) MPAVController *MPAVController;
@property(copy) NSString *volumeAudioCategory;
@property(readonly) NSInteger style;

+ (void)_disableSystemVolumeHUDForAudioCategory:(id)arg1;
+ (void)_enableSystemVolumeHUDForAudioCategory:(id)arg1;
+ (void)_initializeSafeCategory;

- (void)cancelTrackingWithEvent:(id)arg1;
- (float)minimumValue;
- (id)createThumbView;
- (void)didMoveToSuperview;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (float)maximumValue;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (NSInteger)style;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)_endTracking;
- (id)volumeAudioCategory;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_updateVolumeFromAVController;
- (void)_commitVolumeChange;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_volumeDidChange:(id)arg1;
- (id)_thumbImageForStyle:(NSInteger)arg1;
- (id)_minTrackImageForStyle:(NSInteger)arg1;
- (id)_maxTrackImageForStyle:(NSInteger)arg1;
- (void)_layoutMaskForThumb;
- (void)_layoutForAvailableRoutes;
- (void)_routeNameLabelAnimationDidEnd;
- (void)setMPAVController:(id)arg1;
- (id)MPAVController;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (id)accessibilityLabel;

@end

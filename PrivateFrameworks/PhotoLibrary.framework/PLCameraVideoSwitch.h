/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIImage;



@interface PLCameraVideoSwitch : UIControl 
{
    UIImageView *_wellImageView;
    UIImageView *_handleImageView;
    UIImageView *_cameraImageView;
    UIImageView *_videoImageView;
    UIImageView *_backgroundImageView;
    UIImage *_backgroundImage;
    UIImage *_wellImage;
    UIImage *_handleImage;
    UIImage *_handleDownImage;
    UIImage *_cameraImage;
    UIImage *_cameraLandscapeImage;
    UIImage *_videoImage;
    UIImage *_videoLandscapeImage;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    NSInteger _orientation;
    BOOL _watchingOrientationChanges;
    float _trackingHorizontalLocation;
    unsigned int _on : 1;
    unsigned int _didLayoutViews : 1;
    unsigned int _didMove : 1;
    unsigned int _lockEnabled : 1;
}

@property(getter=isOn) BOOL on;

+ (void)_initializeSafeCategory;

- (void)setButtonOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_updateEnabledness;
- (void)_loadImages;
- (void)_setOn:(BOOL)arg1 animationDuration:(float)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_rotationTransformForDeviceOrientation:(NSInteger)arg1;
- (void)_animateImageView:(id)arg1 toTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 withImage:(id)arg3 animated:(BOOL)arg4;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)setLockEnabled:(BOOL)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (NSInteger)orientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityValue;

@end

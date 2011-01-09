/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, AVController, NSTimer;



@interface MPVolumeController : NSObject 
{
    AVController *_avController;
    id _delegate;
    float _volume;
    float _unmutedVolume;
    NSTimer *_fadeTimer;
    float _fadeVolume;
    NSString *_debugName;
    NSInteger _volumeBehaviorWhenEnabled;
    struct { 
        unsigned int fadeIncreasesVolume : 1; 
        unsigned int enabled : 1; 
        unsigned int isSuspending : 1; 
        unsigned int shouldPushLocalVolumeToServer : 1; 
        unsigned int unused : 28; 
    } _vcBitfields;
}

+ (void)setCurrentVolumeController:(id)arg1;
+ (void)removeCurrentVolumeController:(id)arg1;
+ (void)forgetController:(id)arg1;
+ (id)currentVolumeController;

- (void)applicationWillSuspend:(id)arg1;
- (BOOL)isEnabled;
- (id)init;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (float)volume;
- (BOOL)setVolume:(float)arg1;
- (void)setDebugName:(id)arg1;
- (void)setAVController:(id)arg1 pushLocalVolume:(BOOL)arg2;
- (void)activateAndPushLocalVolumeToServerIfNecessary;
- (void)_postVolumeChangedNotification;
- (void)postCurrentVolumeNotification;
- (void)systemSoundControllerVolumeDidChange:(id)arg1;
- (void)avControllerVolumeDidChange:(id)arg1;
- (void)avControllerMutedDidChange:(id)arg1;
- (void)applicationDidSuspendOrResume:(id)arg1;
- (void)_updateAVControllerVolumeBehavior;
- (void)_didOrderOut;
- (void)_didBecomeCurrent;
- (void)setVolumeBehaviorWhenEnabled:(NSInteger)arg1;
- (NSInteger)volumeBehaviorWhenEnabled;
- (void)_setPlayerVolume:(float)arg1;
- (float)_playerVolume;
- (void)toggleMuted;
- (void)setMuted:(BOOL)arg1;
- (BOOL)muted;
- (void)_stopFade;
- (void)_delayedFadeEndedForDirection:(NSInteger)arg1;
- (void)_delayedDidFinishFadeOut;
- (void)_delayedDidFinishFadeIn;
- (void)_handleFadeEvent:(id)arg1;
- (void)_startFade;
- (void)fadeIn;
- (void)fadeOut;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */



@interface TPPhonePad : UIControl 
{
    NSInteger _downKey;
    id _delegate;
    BOOL _playsSounds;
    float _topHeight;
    float _midHeight;
    float _bottomHeight;
    float _leftWidth;
    float _midWidth;
    float _rightWidth;
    struct __CFSet { } *_inflightSounds;
    struct __CFDictionary { } *_keyToButtonMap;
    NSUInteger _incompleteSounds;
    unsigned int _delegateSoundCallbacks : 1;
    unsigned int _soundsActivated : 1;
}

+ (BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;
+ (BOOL)launchFieldTestIfNeeded:(id)arg1;
+ (void)_delayedDeactivate;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)__original_resolveClassMethod:(SEL)arg1;
+ (void)_initializeSafeCategory;

- (BOOL)pointMostlyInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)cancelTouchTracking;
- (void)setHighlighted:(BOOL)arg1;
- (void)removeFromSuperview;
- (void)movedFromWindow:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (id)scriptingInfoWithChildren;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)_activateSounds:(BOOL)arg1;
- (void)_appSuspended;
- (void)_appResumed;
- (void)setPlaysSounds:(BOOL)arg1;
- (void)setButton:(id)arg1 forKeyAtIndex:(NSInteger)arg2;
- (id)_buttonForKeyAtIndex:(NSInteger)arg1;
- (void)setNeedsDisplayForKey:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })_keypadOrigin;
- (id)_pressedImage;
- (id)_keypadImage;
- (float)_yFudge;
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;
- (void)_handleKeyPressAndHold:(id)arg1;
- (NSInteger)_keyForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectForKey:(NSInteger)arg1;
- (void)_notifySoundCompletionIfNecessary:(unsigned long)arg1;
- (void)_playSoundForKey:(NSInteger)arg1;
- (void)_stopSoundForKey:(NSInteger)arg1;
- (void)_stopAllSoundsForcingCallbacks:(BOOL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)__original_forwardingTargetForSelector:(SEL)arg1;
- (id)_accessibilityInternalChildren;
- (id)accessibilityContainerElements;
- (BOOL)isAccessibilityElement;

@end

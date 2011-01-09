/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSTimer, UITouch;



@interface MPTapGestureRecognizer : UIGestureRecognizer 
{
    NSUInteger _lastTapCount;
    struct CGPoint { 
        float x; 
        float y; 
    } _tapLocation;
    UITouch *_trackingTouch;
    NSTimer *_tapHandleTimer;
}

@property NSUInteger tapCount;


- (void)reset;
- (NSUInteger)tapCount;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)setTapCount:(NSUInteger)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_setTapTimerWithDuration:(double)arg1;
- (void)_resetTapTimer;
- (void)_delayedHandleTaps:(id)arg1;

@end

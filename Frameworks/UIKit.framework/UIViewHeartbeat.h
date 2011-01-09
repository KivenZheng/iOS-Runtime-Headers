/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;



@interface UIViewHeartbeat : NSObject 
{
    UIView *_view;
    SEL _selector;
    struct __GSHeartbeat { } *_heartbeat;
}

+ (void)startHeartbeatWithView:(id)arg1 selector:(SEL)arg2 inRunLoopMode:(id)arg3;
+ (void)stopHeartbeatWithView:(id)arg1 selector:(SEL)arg2;

- (void)dealloc;

@end

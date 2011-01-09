/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMTouchEvent : DOMUIEvent 
{
}

@property(retain,readonly) DOMTouchList *touches;
@property(retain,readonly) DOMTouchList *targetTouches;
@property(retain,readonly) DOMTouchList *changedTouches;
@property(readonly) float scale;
@property(readonly) float rotation;
@property(readonly) BOOL ctrlKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL metaKey;


- (float)rotation;
- (id)touches;
- (float)scale;
- (id)changedTouches;
- (id)targetTouches;
- (BOOL)altKey;
- (BOOL)ctrlKey;
- (void)initTouchEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(NSInteger)arg5 screenX:(NSInteger)arg6 screenY:(NSInteger)arg7 clientX:(NSInteger)arg8 clientY:(NSInteger)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 touches:(id)arg14 targetTouches:(id)arg15 changedTouches:(id)arg16 scale:(float)arg17 rotation:(float)arg18;
- (BOOL)metaKey;
- (BOOL)shiftKey;

@end

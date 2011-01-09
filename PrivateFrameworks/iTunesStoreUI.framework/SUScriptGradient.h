/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUGradient;



@interface SUScriptGradient : SUScriptObject 
{
    SUGradient *_nativeGradient;
}

@property(readonly) NSString *type;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)initLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (id)initRadialGraidentWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6;
- (id)copyNativeGradient;
- (void)addColorStopWithOffset:(float)arg1 color:(id)arg2;
- (id)initWithGradient:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)type;
- (id)init;
- (void)dealloc;
- (id)attributeKeys;

@end

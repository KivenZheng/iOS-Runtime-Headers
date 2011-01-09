/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSURLRequest, NSString, <WebPluginContainerCheckController>, WebPolicyDecisionListener;



@interface WebPluginContainerCheck : NSObject 
{
    NSURLRequest *_request;
    NSString *_target;
    <WebPluginContainerCheckController> *_controller;
    id _resultObject;
    SEL _resultSelector;
    id _contextInfo;
    BOOL _done;
    WebPolicyDecisionListener *_listener;
}

+ (id)checkWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;

- (void)start;
- (void)finalize;
- (void)cancel;
- (void)dealloc;
- (id)contextInfo;
- (id)initWithRequest:(id)arg1 target:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 controller:(id)arg5 contextInfo:(id)arg6;
- (void)_continueWithPolicy:(NSInteger)arg1;
- (id)_actionInformationWithURL:(id)arg1;
- (BOOL)_isForbiddenFileLoad;
- (void)_askPolicyDelegate;

@end

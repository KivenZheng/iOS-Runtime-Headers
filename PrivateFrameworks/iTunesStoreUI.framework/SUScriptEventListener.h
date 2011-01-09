/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class WebScriptObject, NSString;



@interface SUScriptEventListener : NSObject 
{
    WebScriptObject *_callback;
    NSString *_name;
    BOOL _useCapture;
}

@property BOOL shouldUseCapture;
@property(retain) NSString *name;
@property(retain) WebScriptObject *callback;


- (BOOL)shouldUseCapture;
- (void)setShouldUseCapture:(BOOL)arg1;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;

@end

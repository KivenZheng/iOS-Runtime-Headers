/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIWebView, GKBackgroundView;



@interface GKServerWebViewController : UIViewController <UIWebViewDelegate>
{
    GKBackgroundView *_backgroundView;
    UIWebView *_webView;
}


- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(NSUInteger)arg3;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITransitionView, NSDictionary;



@interface PLUIController : NSObject 
{
    id _delegate;
    struct { 
        unsigned int showingCamera : 1; 
    } _flags;
    UITransitionView *_fullScreenTransitionView;
    NSDictionary *_configuration;
}

+ (id)sharedInstance;

- (id)contentViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (id)configuration;
- (BOOL)showCamera;
- (void)setShowCamera:(BOOL)arg1;
- (id)defaultPNGName;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end

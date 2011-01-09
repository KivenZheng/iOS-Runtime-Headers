/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIPlacardButton;



@interface CKTranscriptHeaderView : UIView 
{
    id _delegate;
    UIPlacardButton *_firstButton;
    UIPlacardButton *_secondButton;
    UIPlacardButton *_loadMoreButton;
}

+ (float)defaultHeight;

- (void)_buttonClicked:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withFirstTitle:(id)arg2 withSecondTitle:(id)arg3 displayLoadPrevious:(BOOL)arg4;
- (void)setButtonsEnabled:(BOOL)arg1;
- (void)_loadMore;

@end

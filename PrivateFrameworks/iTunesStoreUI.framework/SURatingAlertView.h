/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SURatingControl;



@interface SURatingAlertView : UIAlertView 
{
    SURatingControl *_ratingControl;
}

@property float rating;


- (float)rating;
- (void)setRating:(float)arg1;
- (void)_ratingControlChanged:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end

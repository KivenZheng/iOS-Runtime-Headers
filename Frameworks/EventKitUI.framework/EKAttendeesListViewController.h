/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, EKAttendeesListView;



@interface EKAttendeesListViewController : UIViewController 
{
    EKEvent *_event;
    EKAttendeesListView *_contentView;
}


- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidUnload;
- (id)title;
- (void)dealloc;
- (id)initWithEvent:(id)arg1;
- (void)attendeeSelected:(id)arg1;

@end

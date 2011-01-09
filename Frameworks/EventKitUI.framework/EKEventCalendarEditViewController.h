/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarChooser, EKEventStore, EKCalendar;



@interface EKEventCalendarEditViewController : EKEventEditItemViewController 
{
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    EKCalendar *_selectedCalendar;
}

@property(retain) EKCalendar *selectedCalendar;


- (void)loadView;
- (void)viewDidUnload;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 store:(id)arg2;
- (void)setSelectedCalendar:(id)arg1;
- (id)selectedCalendar;

@end

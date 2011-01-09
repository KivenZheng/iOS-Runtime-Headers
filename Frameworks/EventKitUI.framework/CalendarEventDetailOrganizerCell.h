/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, UILabel;



@interface CalendarEventDetailOrganizerCell : CalendarEventDetailCell 
{
    NSString *_organizerName;
    UILabel *_organizerView;
    UILabel *_titleView;
}


- (BOOL)update;
- (id)_titleView;
- (void)dealloc;
- (BOOL)hasCustomLayout;
- (id)viewControllerPreparedWithModel:(id)arg1;
- (id)_organizerView;
- (id)initWithEditModel:(id)arg1;
- (BOOL)shouldDisplayForEditModel;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;

@end

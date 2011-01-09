/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;



@interface CalendarEventDetailAlarmCell : CalendarEventDetailCell 
{
    UILabel *_alertTitleView;
    UILabel *_alertView;
    UILabel *_alert2View;
    NSUInteger _visibleItems;
}


- (id)_alertView;
- (BOOL)update;
- (BOOL)isEditable;
- (void)dealloc;
- (BOOL)hasCustomLayout;
- (void)editModelWillChange;
- (void)editModelDidChange;
- (id)viewControllerPreparedWithModel:(id)arg1;
- (void)_alarmsChanged;
- (id)_alert2View;
- (id)_alertTitleView;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;

@end

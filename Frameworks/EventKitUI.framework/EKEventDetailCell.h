/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, EKEventDetailView;



@interface EKEventDetailCell : UITableViewCell 
{
    EKEventDetailView *_owner;
    EKEvent *_event;
    BOOL _editable;
}

@property(readonly) BOOL isEditable;
@property EKEventDetailView *owner;


- (void)setEvent:(id)arg1;
- (BOOL)update;
- (BOOL)isEditable;
- (id)owner;
- (void)setOwner:(id)arg1;
- (BOOL)hasCustomLayout;
- (void)setNeedsUpdate;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 style:(NSInteger)arg3;
- (id)viewControllerForCell;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2;
- (void)eventWillChange;
- (void)eventDidChange;

@end

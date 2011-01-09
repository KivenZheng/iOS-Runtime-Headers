/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventEditModel, <CalendarEventEditViewDelegate>, NSArray;



@interface CalendarEventEditView : CalendarPreferencesTable <UITableViewDelegate, UITableViewDataSource, CalendarEventEditItemDelegate>
{
    CalendarEventEditModel *_editModel;
    NSArray *_currentItems;
    BOOL _editable;
    BOOL _deleteable;
    BOOL _showCalendar;
    BOOL _canChangeCalendar;
    BOOL _isChangingCalendar;
    BOOL _simpleView;
    <CalendarEventEditViewDelegate> *_editDelegate;
}

+ (id)_editItems;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (BOOL)isEditable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)dealloc;
- (void)setEditDelegate:(id)arg1;
- (id)editDelegate;
- (id)editModel;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1 occurrence:(struct CalEventOccurrence { }*)arg2;
- (void)_calendarChanged:(id)arg1;
- (void)selectItemWithIdentifier:(id)arg1 subitemIndex:(NSInteger)arg2;
- (void)_deleteClicked:(id)arg1;
- (void)calendarEventEditItemViewDidComplete:(id)arg1;
- (BOOL)calendarEventEditItem:(id)arg1 shouldCompleteInlineEditForSubitem:(NSInteger)arg2;
- (void)calendarEventEditItem:(id)arg1 didCompleteInlineEditForSubitem:(NSInteger)arg2;
- (struct { NSInteger x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })calendarEventRecurrenceEditItemMinimumEndDate:(id)arg1;
- (void)saveIntoEvent:(void*)arg1;
- (BOOL)setupForOccurrence:(struct CalEventOccurrence { }*)arg1 givenModel:(id)arg2 useDate:(NSInteger)arg3 skippingItem:(id)arg4;
- (float)tableHeight;
- (void)setEditModel:(id)arg1;
- (BOOL)isAddingNewEvent;
- (void)_localeChanged;

@end

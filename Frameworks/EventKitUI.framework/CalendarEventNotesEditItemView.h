/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarNotesCell, UITableView;



@interface CalendarEventNotesEditItemView : CalendarEventEditItemView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_table;
    CalendarNotesCell *_cell;
}


- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)dealloc;
- (id)navigationTitle;
- (void)absorbValueFromSerializedValue:(id)arg1;
- (id)noteText;
- (void)setNoteText:(id)arg1;

@end

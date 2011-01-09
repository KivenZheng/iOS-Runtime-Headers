/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarModel, UITransitionView, UINavigationBar, CalendarEventEditItemViewController, CalendarEventEditView, CalendarEventEditModel, UIActionSheet, CalendarEventEditItem;



@interface CalendarEventEditOverlayView : UIView <CalendarView, CalendarEventEditViewDelegate, CalendarEventEditModelDelegate, UIActionSheetDelegate>
{
    UITransitionView *_transitionView;
    UINavigationBar *_navBar;
    UIActionSheet *_alertSheet;
    CalendarModel *_model;
    CalendarEventEditModel *_editModel;
    CalendarEventEditView *_editView;
    CalendarEventEditItemViewController *_itemViewController;
    CalendarEventEditItem *_currentSaveItem;
    id _delegate;
    id _dirtyValue;
    unsigned int _backNavigating : 1;
    unsigned int _dirtyFromResume : 1;
    unsigned int _addingNew : 1;
}

+ (void)_clearDirtyOccurrenceValues;
+ (BOOL)willResumeToEditor;
+ (struct CalEventOccurrence { }*)copyDirtyOccurrenceToRestoreFromDatabase:(struct CalDatabase { }*)arg1;
+ (id)navigationTitleForModel:(id)arg1;

- (void)dismiss;
- (void)cleanUp;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)navigationBar:(id)arg1 poppedItem:(id)arg2;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)setDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)calendarEventEditViewItemCompletedEditing:(id)arg1;
- (void)showDetailView;
- (void)calendarEventEditView:(id)arg1 transitionToEditItemView:(id)arg2;
- (void)performSaveOfEditItem;
- (void)_presentDetachSheetFromItem:(id)arg1 inView:(id)arg2 detachTag:(NSInteger)arg3 detachFutureTag:(NSInteger)arg4;
- (BOOL)calendarEventEditItemShouldCompleteInlineEditing:(id)arg1 forSubitem:(NSInteger)arg2;
- (void)calendarEventEditItemCompletedInlineEditing:(id)arg1 forSubitem:(NSInteger)arg2;
- (id)defaultEventPropertiesForCalendarEventEditView:(id)arg1;
- (void)_editedOccurrenceDateChanged:(id)arg1;
- (BOOL)calendarEventEditViewItemShouldCompleteEditing:(id)arg1;
- (void)performDeleteOfSelectedOccurrence:(BOOL)arg1;
- (void)deleteSelectedOccurrence;
- (void)calendarEventEditViewDeleteClicked:(id)arg1;
- (void)setEditModel:(id)arg1;
- (void)_save;
- (BOOL)isAddingNewEvent;
- (BOOL)shouldCancelEditing;
- (void)_updateNavBarButtons;
- (float)editViewHeight;
- (void)_occurrencesChanged:(id)arg1;
- (void)_cancelSheetButtonPressed:(NSInteger)arg1;
- (void)_detachSheetButtonPressed:(NSInteger)arg1;
- (void)_deleteSheetButtonPressed:(NSInteger)arg1;
- (void)_deleteRecurringSheetButtonPressed:(NSInteger)arg1;
- (void)_selectedOccurrenceChanged:(id)arg1;
- (void)finishedTransitionIn;
- (void*)copyDefaultCalendarForEditModel:(id)arg1;
- (BOOL)isDirty;

@end

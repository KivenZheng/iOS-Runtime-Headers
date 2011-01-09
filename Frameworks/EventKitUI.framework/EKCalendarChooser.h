/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableDictionary, NSArray, NSMutableSet, NSIndexPath, EKEventStore, <EKCalendarChooserDelegate>;



@interface EKCalendarChooser : UITableViewController 
{
    <EKCalendarChooserDelegate> *_delegate;
    EKEventStore *_store;
    NSArray *_groups;
    NSMutableDictionary *_storeGroupMap;
    NSMutableSet *_selectedCalendars;
    NSIndexPath *_checkedRow;
    NSInteger _style;
    unsigned int _listIsFlat : 1;
    unsigned int _showAll : 1;
    unsigned int _showColors : 1;
    unsigned int _allSelected : 1;
    unsigned int _allowsRotation : 1;
}

@property BOOL allowsRotation;
@property(readonly) BOOL tableIsFlat;
@property(retain) EKCalendar *checkedCalendar;
@property(copy) NSSet *selectedCalendars;
@property(readonly) NSInteger style;
@property <EKCalendarChooserDelegate> *delegate;


- (BOOL)allowsRotation;
- (void)done:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)viewDidUnload;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)style;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setAllowsRotation:(BOOL)arg1;
- (id)_groupForSource:(id)arg1;
- (id)_saveSelection;
- (void)_restoreSelection:(id)arg1 newCalendars:(id)arg2;
- (void)calendarsChanged:(id)arg1;
- (id)_loadCalendars;
- (void)_applySelection;
- (void)_setCalendars:(id)arg1;
- (id)checkedCalendar;
- (void)setSelectedCalendars:(id)arg1;
- (id)selectedCalendars;
- (id)_indexPathForCalendar:(id)arg1 source:(id)arg2;
- (NSInteger)_numSelectedGroups;
- (void)_selectGroup:(id)arg1 selected:(BOOL)arg2;
- (void)_selectCalendar:(id)arg1 selected:(BOOL)arg2;
- (void)_selectAllCalendarsAndStores:(BOOL)arg1;
- (id)initWithChooserStyle:(NSInteger)arg1 store:(id)arg2;
- (void)setCheckedCalendar:(id)arg1;
- (BOOL)tableIsFlat;
- (void)setCheckedRow:(id)arg1;

@end

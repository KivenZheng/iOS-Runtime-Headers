/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUTableDataSource;



@interface SUGridViewController : SUViewController <SUGridViewDataSource, SUGridViewDelegate>
{
    SUTableDataSource *_dataSource;
    NSInteger _disappearOrientation;
    float _tableMargin;
    NSInteger _tableViewStyle;
}

@property(readonly) SUGridView *gridView;
@property float tableMargin;
@property(retain) SUTableDataSource *dataSource;


- (id)initWithTableViewStyle:(NSInteger)arg1;
- (BOOL)deleteCellAtIndexPath:(id)arg1;
- (id)_existingGridView;
- (float)tableMargin;
- (void)setTableMargin:(float)arg1;
- (id)gridView;
- (void)gridView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forCellAtIndexPath:(id)arg3;
- (NSInteger)numberOfSectionsInGridView:(id)arg1;
- (id)gridView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (NSInteger)gridView:(id)arg1 editingStyleForCellAtIndexPath:(id)arg2;
- (float)gridView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (float)marginForGridView:(id)arg1;
- (id)gridView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)gridView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;
- (NSInteger)gridView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)gridView:(id)arg1 numberOfColumnsInSection:(NSInteger)arg2;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)dealloc;
- (void)reloadData;

@end

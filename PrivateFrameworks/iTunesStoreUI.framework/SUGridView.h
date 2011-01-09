/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UITableView, <SUGridViewDataSource>, SUGridRowTableViewCellLayoutManager, <SUGridViewDelegate>, UIControl, NSMutableDictionary;



@interface SUGridView : UIView 
{
    NSInteger _animationCount;
    struct __CFArray { } *_columnCountBySection;
    <SUGridViewDataSource> *_dataSource;
    <SUGridViewDelegate> *_delegate;
    SUGridRowTableViewCellLayoutManager *_layoutManager;
    struct { 
        unsigned int commitEditing : 1; 
        unsigned int deleteConfirmationTitle : 1; 
        unsigned int editingStyle : 1; 
        unsigned int heightForHeader : 1; 
        unsigned int margin : 1; 
        unsigned int numberOfSections : 1; 
        unsigned int titleForHeader : 1; 
        unsigned int viewForHeader : 1; 
        unsigned int willDisplayCell : 1; 
    } _respondFlags;
    NSMutableDictionary *_reusableCells;
    UITableView *_tableView;
    UIControl *_touchCaptureView;
}

@property(readonly) UITableView *tableView;
@property <SUGridViewDataSource> *dataSource;
@property <SUGridViewDelegate> *delegate;


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tableViewStyle:(NSInteger)arg2;
- (void)deleteCellsAtIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (NSInteger)globalIndexForCellAtIndexPath:(id)arg1;
- (id)indexPathForCellAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_gridSwipeGesture:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)_deleteAnimationStopped;
- (void)_animateDeletionOfCell:(id)arg1;
- (NSInteger)_minimumColumnCount;
- (void)_reuseColumnCellsForCell:(id)arg1;
- (void)_animateDeletionOfCellsAtIndexPaths:(id)arg1;
- (BOOL)_canDeleteCellAtIndexPath:(id)arg1;
- (id)_copyCellSetForIndexPaths:(id)arg1;
- (void)_endSwipeToDelete;
- (void)_reloadColumnCounts;
- (id)cellForIndexPath:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)dataSource;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)marginForTableView:(id)arg1;
- (NSInteger)globalRowForRowAtIndexPath:(id)arg1;
- (void)deleteSections:(id)arg1 withRowAnimation:(NSInteger)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

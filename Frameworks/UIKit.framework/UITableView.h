/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIColor, <UITableViewDataSource>, NSIndexPath, UIView, NSMutableArray, UITableViewCell, NSMutableDictionary;



@interface UITableView : UIScrollView <NSCoding>
{
    NSInteger _style;
    <UITableViewDataSource> *_dataSource;
    id _rowData;
    float _rowHeight;
    float _sectionHeaderHeight;
    float _sectionFooterHeight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleBounds;
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _visibleRows;
    NSMutableArray *_visibleCells;
    NSIndexPath *_firstResponderIndexPath;
    UIView *_firstResponderView;
    NSUInteger _firstResponderViewType;
    NSMutableDictionary *_reusableTableCells;
    UITableViewCell *_topSeparatorCell;
    id _topSeparator;
    NSMutableArray *_extraSeparators;
    struct __CFDictionary { } *_visibleHeaderViews;
    struct __CFDictionary { } *_visibleFooterViews;
    NSMutableArray *_reusableHeaderViews;
    NSMutableArray *_reusableFooterViews;
    NSMutableArray *_reusableTransparentHeaderViews;
    NSMutableArray *_reusableTransparentFooterViews;
    NSMutableArray *_highlightedIndexPaths;
    NSMutableArray *_selectedIndexPaths;
    NSInteger _swipeToDeleteSection;
    NSInteger _swipeToDeleteRow;
    NSIndexPath *_pendingSelectionIndexPath;
    NSArray *_pendingDeselectionIndexPaths;
    UIView *_touchedContentView;
    UIView *_newContentView;
    id _deleteAnimationSupport;
    id _reorderingSupport;
    UIView *_backgroundView;
    UIView *_index;
    UIView *_tableHeaderBackgroundView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    id _countLabel;
    NSInteger _tableReloadingSuspendedCount;
    NSInteger _tableDisplaySuspendedCount;
    NSInteger _sectionIndexMinimumDisplayRowCount;
    NSInteger _itemCountFooterMinimumDisplayRowCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    UIColor *_separatorColor;
    UIColor *_separatorTopShadowColor;
    UIColor *_separatorBottomShadowColor;
    UIColor *_checkmarkColor;
    UIColor *_sectionBorderColor;
    NSArray *_defaultSectionIndexTitles;
    NSInteger _updateCount;
    id _reserved;
    struct { 
        unsigned int dataSourceNumberOfRowsInSection : 1; 
        unsigned int dataSourceCellForRow : 1; 
        unsigned int dataSourceNumberOfSectionsInTableView : 1; 
        unsigned int dataSourceTitleForHeaderInSection : 1; 
        unsigned int dataSourceTitleForFooterInSection : 1; 
        unsigned int dataSourceCommitEditingStyle : 1; 
        unsigned int dataSourceSectionIndexTitlesForTableView : 1; 
        unsigned int dataSourceSectionForSectionIndexTitle : 1; 
        unsigned int dataSourceCanEditRow : 1; 
        unsigned int dataSourceCanMoveRow : 1; 
        unsigned int dataSourceCanUpdateRow : 1; 
        unsigned int dataSourceShouldShowMenu : 1; 
        unsigned int dataSourceCanPerformAction : 1; 
        unsigned int dataSourcePerformAction : 1; 
        unsigned int dataSourceIndexPathForSectionIndexTitle : 1; 
        unsigned int delegateEditingStyleForRowAtIndexPath : 1; 
        unsigned int delegateTitleForDeleteConfirmationButtonForRowAtIndexPath : 1; 
        unsigned int delegateShouldIndentWhileEditing : 1; 
        unsigned int dataSourceMoveRow : 1; 
        unsigned int delegateCellForRow : 1; 
        unsigned int delegateWillDisplayCell : 1; 
        unsigned int delegateHeightForRow : 1; 
        unsigned int delegateHeightForSectionHeader : 1; 
        unsigned int delegateTitleWidthForSectionHeader : 1; 
        unsigned int delegateHeightForSectionFooter : 1; 
        unsigned int delegateTitleWidthForSectionFooter : 1; 
        unsigned int delegateViewForHeaderInSection : 1; 
        unsigned int delegateViewForFooterInSection : 1; 
        unsigned int delegateDisplayedItemCountForRowCount : 1; 
        unsigned int delegateDisplayStringForRowCount : 1; 
        unsigned int delegateAccessoryTypeForRow : 1; 
        unsigned int delegateAccessoryButtonTappedForRow : 1; 
        unsigned int delegateWillSelectRow : 1; 
        unsigned int delegateWillDeselectRow : 1; 
        unsigned int delegateDidSelectRow : 1; 
        unsigned int delegateDidDeselectRow : 1; 
        unsigned int delegateWillBeginEditing : 1; 
        unsigned int delegateDidEndEditing : 1; 
        unsigned int delegateWillMoveToRow : 1; 
        unsigned int delegateIndentationLevelForRow : 1; 
        unsigned int delegateWantsHeaderForSection : 1; 
        unsigned int delegateHeightForRowsInSection : 1; 
        unsigned int delegateMargin : 1; 
        unsigned int delegateHeaderTitleAlignment : 1; 
        unsigned int delegateFooterTitleAlignment : 1; 
        unsigned int delegateFrameForSectionIndexGivenProposedFrame : 1; 
        unsigned int delegateDidFinishReload : 1; 
        unsigned int delegateHeightForHeader : 1; 
        unsigned int delegateHeightForFooter : 1; 
        unsigned int delegateViewForHeader : 1; 
        unsigned int delegateViewForFooter : 1; 
        unsigned int style : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int wasEditing : 1; 
        unsigned int isEditing : 1; 
        unsigned int scrollsToSelection : 1; 
        unsigned int reloadSkippedDuringSuspension : 1; 
        unsigned int updating : 1; 
        unsigned int displaySkippedDuringSuspension : 1; 
        unsigned int needsReload : 1; 
        unsigned int updatingVisibleCellsManually : 1; 
        unsigned int scheduledUpdateVisibleCells : 1; 
        unsigned int scheduledUpdateVisibleCellsFrames : 1; 
        unsigned int warnForForcedCellUpdateDisabled : 1; 
        unsigned int displayTopSeparator : 1; 
        unsigned int countStringInsignificantRowCount : 4; 
        unsigned int needToAdjustExtraSeparators : 1; 
        unsigned int overlapsSectionHeaderViews : 1; 
        unsigned int ignoreDragSwipe : 1; 
        unsigned int ignoreTouchSelect : 1; 
        unsigned int lastHighlightedRowActive : 1; 
        unsigned int reloading : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsSelectionDuringEditing : 1; 
        unsigned int showsSelectionImmediatelyOnTouchBegin : 1; 
        unsigned int indexHidden : 1; 
        unsigned int indexHiddenForSearch : 1; 
        unsigned int defaultShowsHorizontalScrollIndicator : 1; 
        unsigned int defaultShowsVerticalScrollIndicator : 1; 
        unsigned int sectionIndexTitlesLoaded : 1; 
        unsigned int tableHeaderViewShouldAutoHide : 1; 
        unsigned int tableHeaderViewIsHidden : 1; 
        unsigned int tableHeaderViewWasHidden : 1; 
        unsigned int hideScrollIndicators : 1; 
        unsigned int sendReloadFinished : 1; 
        unsigned int keepFirstResponderWhenInteractionDisabled : 1; 
    } _tableFlags;
    NSUInteger _selectedSection;
    NSUInteger _selectedRow;
    NSUInteger _lastSelectedSection;
    NSUInteger _lastSelectedRow;
}

@property(readonly) NSInteger style;
@property <UITableViewDataSource> *dataSource;
@property <UITableViewDelegate> *delegate;
@property float rowHeight;
@property float sectionHeaderHeight;
@property float sectionFooterHeight;
@property(retain) UIView *backgroundView;
@property(getter=isEditing) BOOL editing;
@property BOOL allowsSelection;
@property BOOL allowsSelectionDuringEditing;
@property NSInteger separatorStyle;
@property(retain) UIColor *separatorColor;
@property(retain) UIView *tableHeaderView;
@property(retain) UIView *tableFooterView;
@property NSInteger sectionIndexMinimumDisplayRowCount;
@property(retain) id scrollTestParameters;

+ (void)_beginIgnoringResponderChanges;
+ (void)_endIgnoringResponderChanges;
+ (void)_initializeSafeCategory;

- (void)setBackgroundView:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)indexPathForRowAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })_contentSize;
- (float)_spacingForExtraSeparators;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })indexFrame;
- (void)_numberOfRowsDidChange;
- (id)indexPathForCell:(id)arg1;
- (id)sectionBorderColor;
- (NSInteger)numberOfRowsInSection:(NSInteger)arg1;
- (BOOL)_isEditingRowAtIndexPath:(id)arg1;
- (void)_setupCell:(id)arg1 forEditing:(BOOL)arg2 atIndexPath:(id)arg3 animated:(BOOL)arg4;
- (id)_reorderingCell;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForHeaderInSection:(NSInteger)arg1;
- (void)_addContentSubview:(id)arg1 atBack:(BOOL)arg2;
- (id)_sectionHeaderViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSection:(NSInteger)arg2 opaque:(BOOL)arg3 reuseViewIfPossible:(BOOL)arg4;
- (BOOL)_wasEditingRowAtIndexPath:(id)arg1;
- (BOOL)_usesNewHeaderFooterBehavior;
- (id)tableFooterView;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)flashScrollIndicators;
- (BOOL)_canPerformAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_finishedRemovingRemovalButtonForTableCell:(id)arg1;
- (id)titleForDeleteConfirmationButton:(id)arg1;
- (id)backgroundView;
- (id)separatorColor;
- (void)setSectionBorderColor:(id)arg1;
- (BOOL)_dataSourceImplementsTitleForHeaderInSection;
- (BOOL)_delegateWantsFooterForSection:(NSInteger)arg1;
- (BOOL)_delegateImplementsHeightForFooterInSection;
- (BOOL)_delegateImplementsHeightForRowsInSection;
- (BOOL)_delegateImplementsMarginForTableView;
- (float)heightForAutohidingTableHeaderView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForFooterInSection:(NSInteger)arg1;
- (void)setCountStringInsignificantRowCount:(NSUInteger)arg1;
- (void)setCountString:(id)arg1;
- (id)visibleCells;
- (void)_beginReorderingForCell:(id)arg1;
- (void)_updateVisibleCellsImmediatelyIfNecessary;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(NSInteger)arg2 animated:(BOOL)arg3;
- (id)indexPathForSelectedRow;
- (id)cellForRowAtIndexPath:(id)arg1;
- (float)rowHeight;
- (id)dataSource;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1;
- (BOOL)canHandleSwipes;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)setDataSource:(id)arg1;
- (NSInteger)numberOfSections;
- (void)encodeWithCoder:(id)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)animateDeletionOfRowWithCell:(id)arg1;
- (void)_didInsertRowForTableCell:(id)arg1;
- (void)setSeparatorStyle:(NSInteger)arg1;
- (id)_scriptingInfo;
- (void)_performScrollTest:(id)arg1 iterations:(NSInteger)arg2 delta:(NSInteger)arg3;
- (void)_performScrollTest:(id)arg1 iterations:(NSInteger)arg2 delta:(NSInteger)arg3 length:(NSInteger)arg4;
- (void)_scroll;
- (id)_swipeGestureRecognizer;
- (float)_animationDuration;
- (void)_ensureRowDataIsLoaded;
- (void)_updateRowData;
- (void)_scheduleAdjustExtraSeparators;
- (void)_adjustCountLabel;
- (void)_adjustReusableTableCells;
- (void)_suspendReloads;
- (void)_resumeReloads;
- (NSUInteger)_countStringRowCount;
- (void)_setRowCount:(NSInteger)arg1;
- (void)setTableHeaderBackgroundColor:(id)arg1;
- (id)tableHeaderBackgroundColor;
- (void)setMultiselectCheckmarkColor:(id)arg1;
- (id)multiselectCheckmarkColor;
- (void)_adjustTableHeaderAndFooterViews;
- (void)_setHeightForTableHeaderViewHiding:(float)arg1;
- (float)heightForTableHeaderViewHiding;
- (void)_updateContentSize;
- (void)_updateBackgroundViewFrame;
- (void)_updateBackgroundView;
- (void)_updateIndexFrame;
- (void)_updateIndexFrameSuppressingChangeNotification:(BOOL)arg1;
- (void)_updateIndexTitles:(id)arg1;
- (void)_updateIndex;
- (void)_setupCellAnimations;
- (void)_endCellAnimationsWithContext:(id)arg1;
- (void)_setNeedsVisibleCellsUpdate:(BOOL)arg1 withFrames:(BOOL)arg2;
- (void)_updateTableHeadersAndFootersNow:(BOOL)arg1;
- (void)_updateVisibleHeadersAndFootersNow:(BOOL)arg1;
- (void)_updateVisibleCellsNow:(BOOL)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_visibleGlobalRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float*)arg1;
- (void)_adjustExtraSeparators;
- (id)_tableViewCellForContentView:(id)arg1;
- (NSInteger)_editingStyleForRowAtIndexPath:(id)arg1;
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1;
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1;
- (NSInteger)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)_canMoveRowAtIndexPath:(id)arg1;
- (id)_newSectionViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSection:(NSInteger)arg2 isHeader:(BOOL)arg3;
- (void)_reuseTableViewCell:(id)arg1;
- (void)_reuseHeaderView:(id)arg1 forSection:(NSInteger)arg2;
- (void)_reuseFooterView:(id)arg1 forSection:(NSInteger)arg2;
- (void)_updateWithItems:(id)arg1 withOldRowData:(id)arg2 oldRowRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3 newRowRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg4 context:(id)arg5;
- (void)_updateAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (BOOL)_canEditRowAtIndexPath:(id)arg1;
- (void)_accessoryButtonAction:(id)arg1;
- (void)_sectionIndexChanged:(id)arg1;
- (void)_updateShowScrollIndicatorsFlag;
- (BOOL)_hasSwipeToDeleteRow;
- (BOOL)_shouldDisplayTopSeparator;
- (void)_languageChanged;
- (void)_validateCells;
- (void)_validateSectionHeadersAndFooters;
- (void)_sendWillBeginEditingForIndexPath:(id)arg1;
- (void)_sendDidEndEditingForIndexPath:(id)arg1;
- (id)deleteConfirmationIndexPath;
- (void)setDeleteConfirmationIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_scrollToTopHidingTableHeader:(BOOL)arg1;
- (void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)arg1;
- (id)_defaultBackgroundView;
- (NSInteger)_sectionForHeaderView:(id)arg1;
- (NSInteger)_sectionForFooterView:(id)arg1;
- (id)scrollTestParameters;
- (BOOL)allowsSelection;
- (float)sectionFooterHeight;
- (float)sectionHeaderHeight;
- (NSInteger)style;
- (void)_setupTableViewCommon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(NSInteger)arg2;
- (void)setSectionHeaderHeight:(float)arg1;
- (void)setSectionFooterHeight:(float)arg1;
- (void)reloadSectionIndexTitles;
- (void)noteNumberOfRowsChanged;
- (NSInteger)globalRowForRowAtIndexPath:(id)arg1;
- (id)indexPathForRowAtGlobalRow:(NSInteger)arg1;
- (void)setIndexHiddenForSearch:(BOOL)arg1;
- (void)setIndexHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isIndexHidden;
- (void)setTableHeaderViewShouldAutoHide:(BOOL)arg1;
- (BOOL)tableHeaderViewShouldAutoHide;
- (BOOL)overlapsSectionHeaderViews;
- (void)setOverlapsSectionHeaderViews:(BOOL)arg1;
- (id)rowDataDescription;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSection:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForRowAtIndexPath:(id)arg1;
- (id)indexPathsForRowsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)indexPathsForVisibleRows;
- (void)scrollToNearestSelectedRowAtScrollPosition:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)beginUpdates;
- (void)endUpdatesWithContext:(id)arg1;
- (void)endUpdates;
- (id)_arrayForUpdateAction:(NSInteger)arg1;
- (void)_updateSections:(id)arg1 updateAction:(NSInteger)arg2 withRowAnimation:(NSInteger)arg3;
- (void)insertSections:(id)arg1 withRowAnimation:(NSInteger)arg2;
- (void)deleteSections:(id)arg1 withRowAnimation:(NSInteger)arg2;
- (void)reloadSections:(id)arg1 withRowAnimation:(NSInteger)arg2;
- (void)_updateRowsAtIndexPaths:(id)arg1 updateAction:(NSInteger)arg2 withRowAnimation:(NSInteger)arg3;
- (void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(NSInteger)arg2;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(NSInteger)arg2;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(NSInteger)arg2;
- (void)setAllowsSelection:(BOOL)arg1;
- (void)setAllowsSelectionDuringEditing:(BOOL)arg1;
- (BOOL)allowsSelectionDuringEditing;
- (id)indexPathsForSelectedRows;
- (BOOL)_isRowMultiSelect:(id)arg1;
- (BOOL)_shouldHighlightInsteadOfSelectRowAtIndexPath:(id)arg1;
- (void)highlightRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(NSInteger)arg3;
- (void)unhighlightRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)_reloadDataIfNeeded;
- (void)_selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(NSInteger)arg3 notifyDelegate:(BOOL)arg4;
- (void)_userSelectRowAtIndexPath:(id)arg1;
- (void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(NSInteger)arg3;
- (void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)arg1;
- (void)_selectAllSelectedRows;
- (BOOL)showsSelectionImmediatelyOnTouchBegin;
- (NSUInteger)maximumNumberOfSectionIndexTitlesWithoutTruncation;
- (NSInteger)separatorStyle;
- (void)setSeparatorColor:(id)arg1;
- (void)setSeparatorTopShadowColor:(id)arg1;
- (id)separatorTopShadowColor;
- (void)setSeparatorBottomShadowColor:(id)arg1;
- (id)separatorBottomShadowColor;
- (void)setUsesVariableMargins:(BOOL)arg1;
- (BOOL)usesVariableMargins;
- (void)_backgroundColorAnimationDidStop;
- (void)_setBackgroundColor:(id)arg1 animated:(BOOL)arg2;
- (void)setTableHeaderView:(id)arg1;
- (id)tableHeaderView;
- (void)setTableFooterView:(id)arg1;
- (NSInteger)swipeCell:(NSInteger)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)handleSwipe:(id)arg1;
- (BOOL)_canSelectRowContainingHitView:(id)arg1;
- (void)_tableViewDeferredTouchesBegan:(id)arg1;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (BOOL)_cancelContentTouchWithEvent:(id)arg1 forced:(BOOL)arg2;
- (void)_updateTableHeaderViewForAutoHide;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)_rectChangedWithNewSize:(struct CGSize { float x1; float x2; })arg1 oldSize:(struct CGSize { float x1; float x2; })arg2;
- (void)resizeSubviewsWithOldSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (NSInteger)sectionIndexMinimumDisplayRowCount;
- (void)setSectionIndexMinimumDisplayRowCount:(NSInteger)arg1;
- (void)setScrollTestParameters:(id)arg1;
- (id)_reorderingSupport;
- (BOOL)_dataSourceImplementsNumberOfSectionsInTableView;
- (BOOL)_delegateImplementsHeightForRowAtIndexPath;
- (BOOL)_dataSourceImplementsCanUpdateRowAtIndexPath;
- (BOOL)_delegateWantsHeaderForSection:(NSInteger)arg1;
- (BOOL)_delegateWantsCustomHeaderForSection:(NSInteger)arg1;
- (BOOL)_delegateWantsHeaderTitleForSection:(NSInteger)arg1;
- (BOOL)_delegateWantsFooterTitleForSection:(NSInteger)arg1;
- (BOOL)_delegateWantsCustomFooterForSection:(NSInteger)arg1;
- (BOOL)_delegateImplementsHeightForHeaderInSection;
- (BOOL)_delegateImplementsTitleWidthForHeaderInSection;
- (BOOL)_delegateImplementsAlignmentForHeaderInSection;
- (BOOL)_delegateImplementsTitleWidthForFooterInSection;
- (BOOL)_delegateImplementsAlignmentForFooterInSection;
- (BOOL)_dataSourceImplementsTitleForFooterInSection;
- (BOOL)_delegateImplementsViewForHeaderInSection;
- (BOOL)_delegateImplementsViewForFooterInSection;
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)arg1;
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 notifyDelegate:(BOOL)arg3;
- (void)_stopAutoscrollTimer;
- (void)_tableCellAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)adjustIndexPaths:(id)arg1 forMoveOfIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)_cancelCellReorder:(BOOL)arg1;
- (void)_endCellReorderAnimation:(BOOL)arg1;
- (void)_finishedAnimatingCellReorder:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_beginReorderAnimationForCell:(id)arg1;
- (void)_endReorderAnimations;
- (void)_autoscroll:(id)arg1;
- (id)_targetIndexPathAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setTopSeparatorCell:(id)arg1;
- (id)_cellAfterIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleBounds;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_visibleGlobalRows;
- (id)_visibleCellForGlobalRow:(NSInteger)arg1;
- (BOOL)_wasEditing;
- (BOOL)_isEditingWithNoSwipedCell;
- (NSInteger)_globalReorderingRow;
- (id)_reorderingIndexPath;
- (id)_popReusableHeaderView:(BOOL)arg1 opaque:(BOOL)arg2;
- (id)_sectionHeaderView:(BOOL)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 forSection:(NSInteger)arg3 opaque:(BOOL)arg4 reuseViewIfPossible:(BOOL)arg5;
- (id)_sectionFooterViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSection:(NSInteger)arg2 opaque:(BOOL)arg3 reuseViewIfPossible:(BOOL)arg4;
- (void)_setupCell:(id)arg1 forEditing:(BOOL)arg2 canEdit:(BOOL)arg3 editingStyle:(NSInteger)arg4 shouldIndentWhileEditing:(BOOL)arg5 showsReorderControl:(BOOL)arg6 accessoryType:(NSInteger)arg7 animated:(BOOL)arg8;
- (id)_createPreparedCellForGlobalRow:(NSInteger)arg1 withIndexPath:(id)arg2;
- (id)_createPreparedCellForGlobalRow:(NSInteger)arg1;
- (id)_createPreparedCellForRowAtIndexPath:(id)arg1;
- (id)_visibleHeaderViewForSection:(NSInteger)arg1;
- (id)_visibleFooterViewForSection:(NSInteger)arg1;
- (BOOL)allowsHeaderViewsToFloat;
- (BOOL)allowsFooterViewsToFloat;
- (void)_tableHeaderHeightDidChangeToHeight:(float)arg1;
- (void)_drawExtraSeparator:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isCellReorderable:(id)arg1;
- (BOOL)_isLastRowForIndexPath:(id)arg1;
- (float)_shadowHeightOffset;
- (void)_reorderPositionChangedForCell:(id)arg1;
- (void)_reorderPositionChangedForCell:(id)arg1 withScrollFactorPercentage:(float)arg2;
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)arg1;
- (void)_removeWasCanceledForCell:(id)arg1;
- (BOOL)_isShowingIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_indexRect;
- (id)_rowData;
- (id)_indexPathForSwipeRowAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_wantsSwipes;
- (BOOL)_isTableHeaderViewHidden;
- (id)_tableHeaderView:(BOOL)arg1;
- (id)_tableFooterView:(BOOL)arg1;
- (BOOL)_shouldShowMenuForCell:(id)arg1;
- (void)_performAction:(SEL)arg1 forCell:(id)arg2 sender:(id)arg3;
- (float)_heightForSeparator;
- (float)_backgroundInset;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(BOOL)arg2 lastAdjustment:(float*)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;
- (void)setUsesGestureRecognizers:(BOOL)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_beginTouchesInContentView:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)_smoothScroll:(double)arg1;
- (NSInteger)swipe:(NSInteger)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setRowHeight:(float)arg1;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)_accessibilityIgnoresMouseEvents;
- (id)_accessibilityInternalData;
- (void)_accessibilityUpdateVisibleCellFrames;
- (id)accessibilityTableViewSectionElementAtSection:(NSInteger)arg1 isHeader:(BOOL)arg2;
- (void)_axPostLayoutChange;
- (void)_accessibilityInitializeInternalData;
- (void)setReusableCellsEnabled:(BOOL)arg1;
- (id)_accessibilityFooterElement;
- (id)_accessibilityHeaderElement;
- (void)_accessibilityClearChildren;
- (void)accessibilityFindMockParentForTableViewCell:(id)arg1;
- (id)accessibilityCellForRowAtIndexPath:(id)arg1;
- (void)accessibilityUpdateVisibleCellFrames;
- (id)accessibilityTableViewCellAccessibilityElementForTableViewCell:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityScrollStatus;
- (id)accessibilityTableViewCellElementAtGlobalRow:(NSInteger)arg1;
- (id)_accessibilitySupplementaryFooterViews;
- (void)_handleDeviceOrientationChange:(id)arg1;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (void)ab_delayedScrollRespectingCaretOfActiveTextViewToCell:(id)arg1 atIndexPath:(id)arg2 atScrollPosition:(NSInteger)arg3 animated:(BOOL)arg4;
- (void)ab_internalScrollToRowAtIndexPathRespectingCaretOfActiveTextView:(id)arg1 atScrollPosition:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)ab_scrollToRowAtIndexPathRespectingCaretOfActiveTextView:(id)arg1 atScrollPosition:(NSInteger)arg2 animated:(BOOL)arg3;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMOutlineState, WDText;



@interface WMState : CMState 
{
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    WDText *mLastHeader;
    WDText *mLastFooter;
    NSUInteger mCurrentPage;
    NSUInteger mBlockIndex;
    NSUInteger mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    BOOL mIsFrame;
    BOOL mIsFrameStart;
    BOOL mIsFrameEnd;
    float mTotalPageHeight;
}


- (void)setCurrentPage:(NSUInteger)arg1;
- (NSUInteger)currentPage;
- (id)init;
- (void)dealloc;
- (void)setTopMargin:(float)arg1;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (BOOL)isCurrentListStateOverridden;
- (void)clearCurrentListState;
- (void)setPageHeight:(float)arg1;
- (void)setLastHeader:(id)arg1;
- (id)lastHeader;
- (void)setLastFooter:(id)arg1;
- (id)lastFooter;
- (void)setBlockIndex:(NSUInteger)arg1;
- (BOOL)isFrame;
- (NSUInteger)blockIndex;
- (void)setIsFrame:(BOOL)arg1;
- (void)setIsFrameStart:(BOOL)arg1;
- (void)setIsFrameEnd:(BOOL)arg1;
- (BOOL)isFrameEnd;
- (BOOL)isFrameStart;
- (id)currentListState;
- (BOOL)isCurrentListId:(NSInteger)arg1;
- (void)setCurrentListState:(id)arg1;
- (id)outlineState;
- (void)setRunIndex:(NSUInteger)arg1;
- (float)pageOffset;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)arg1;
- (NSUInteger)runIndex;
- (float)pageHeight;
- (float)topMargin;

@end

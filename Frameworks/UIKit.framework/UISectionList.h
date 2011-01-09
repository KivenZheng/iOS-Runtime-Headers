/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISectionTable, NSSet, NSMutableArray, UISectionIndex;



@interface UISectionList : UIView 
{
    UISectionTable *_table;
    UISectionIndex *_index;
    NSMutableArray *_titles;
    NSSet *_indexTitlesAsSet;
    NSInteger _sectionCount;
    float _listWidth;
    struct { 
        unsigned int nonIndexedTitlesShownFirst : 1; 
    } _sectionListFlags;
}

+ (float)defaultIndexWidth;

- (void)setDataSource:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 showSectionIndex:(BOOL)arg2;
- (float)marginForIndexControl:(BOOL)arg1;
- (id)allTitles;
- (void)setAllowsScrollIndicators:(BOOL)arg1;
- (BOOL)showsSectionIndex;
- (void)setNonIndexedTitlesShownLast:(BOOL)arg1;
- (void)noteIndexTitlesDidChange;
- (NSInteger)numberOfSections;
- (void)_setIndexVisible:(BOOL)arg1;
- (id)table;
- (id)_indexTitlesAsSet;
- (id)titleForSection:(NSInteger)arg1;
- (NSInteger)closestSectionForTitle:(id)arg1;
- (BOOL)showsSectionHeaders;
- (void)setShouldHideHeaderInShortLists:(BOOL)arg1;
- (void)setSectionListStyle:(NSInteger)arg1;
- (id)indexTitles;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_languageChanged;
- (void)dealloc;
- (void)reloadData;

@end

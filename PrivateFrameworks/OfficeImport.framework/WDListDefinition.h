/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDStyle, NSMutableArray, WDDocument;



@interface WDListDefinition : NSObject 
{
    NSInteger mType;
    NSMutableArray *mLevels;
    NSInteger mListId;
    WDDocument *mDocument;
    WDStyle *mListStyle;
    WDStyle *mListStyleLink;
}


- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (void)dealloc;
- (NSInteger)levelCount;
- (id)listStyleLink;
- (id)initWithDocument:(id)arg1;
- (void)setListId:(NSInteger)arg1;
- (id)addLevel;
- (void)setListStyle:(id)arg1;
- (void)setListStyleLink:(id)arg1;
- (id)listStyle;
- (id)document;
- (NSInteger)listId;
- (id)levelAt:(NSInteger)arg1;

@end

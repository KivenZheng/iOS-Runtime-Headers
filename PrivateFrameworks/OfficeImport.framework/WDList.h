/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDListDefinition, NSMutableArray, WDDocument;



@interface WDList : NSObject 
{
    NSMutableArray *mLevelOverrides;
    WDDocument *mDocument;
    NSInteger mIndex;
    WDListDefinition *mListDefinition;
}


- (NSInteger)index;
- (void)dealloc;
- (NSInteger)levelOverrideCount;
- (id)levelOverrideAt:(NSInteger)arg1;
- (id)levelOverrides;
- (id)initWithDocument:(id)arg1 listDefinition:(id)arg2;
- (id)addLevelOverride;
- (id)document;
- (void)setIndex:(NSInteger)arg1;
- (NSInteger)listId;
- (id)listDefinition;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorksheet, EDResources;



@interface EDColumnInfoCollection : EDSortedCollection 
{
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}


- (void)dealloc;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (id)columnInfoCreateIfNilForColumnNumber:(NSInteger)arg1;
- (id)columnInfoForColumnNumber:(NSInteger)arg1;

@end

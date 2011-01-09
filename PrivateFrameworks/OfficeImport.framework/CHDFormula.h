/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorkbook, EDReferenceCollection;



@interface CHDFormula : EDFormula 
{
    EDReferenceCollection *mReferences;
    EDWorkbook *mWorkbook;
}

+ (id)formulaWithReference:(id)arg1;
+ (id)formulaWithReferences:(id)arg1;

- (id)references;
- (void)dealloc;
- (void)setWorkbook:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)initWithReferences:(id)arg1;
- (void)setReferences:(id)arg1;
- (void)prepareTokens;
- (id)referencesFromFormula;
- (id)initWithWorkbook:(id)arg1;
- (NSUInteger)countOfCellsBeingReferenced;

@end

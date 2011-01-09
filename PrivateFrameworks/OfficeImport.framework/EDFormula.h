/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface EDFormula : NSObject 
{
    struct __CFData { } *mPackedData;
}

+ (id)formula;
+ (id)messageForWarning:(NSInteger)arg1;

- (id)init;
- (void)dealloc;
- (id)warning;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isSupportedFormula;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isCleaned;
     /* Encoded args for previous method: B8@0:4 */

- (void)setCleaned:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (NSInteger)tokenTypeAtIndex:(NSUInteger)arg1;
- (void)updateContainsRelativeReferences:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (char *)lastExtendedDataForTokenAtIndex:(NSUInteger)arg1 length:(NSUInteger*)arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)replaceTokenAtIndex:(NSUInteger)arg1 withFormula:(id)arg2 formulaTokenIndex:(NSUInteger)arg3;
     /* Encoded args for previous method: B20@0:4I8@12I16 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)removeTokenAtIndex:(NSUInteger)arg1;
     /* Encoded args for previous method: B12@0:4I8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isContainsRelativeReferences;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isCleanedWithEvaluationStack;
     /* Encoded args for previous method: B8@0:4 */

- (void)updateCleanedWithEvaluationStack:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (void)setWarning:(NSInteger)arg1;
- (void)unarchiveFromData:(struct __CFData { }*)arg1 offset:(NSUInteger*)arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)setupTokensWithTokensCount:(NSUInteger)arg1 tokensWithDataCount:(NSUInteger)arg2 extendedDataLength:(NSUInteger)arg3 extendedDataCount:(NSUInteger)arg4;
     /* Encoded args for previous method: B24@0:4I8I12I16I20 */

- (void)replaceTokenTypeAtIndex:(NSUInteger)arg1 withType:(NSInteger)arg2;
- (char *)extendedDataForTokenAtIndex:(NSUInteger)arg1 extendedDataIndex:(NSUInteger)arg2 length:(NSUInteger*)arg3;
- (char *)addToken:(NSInteger)arg1 extendedDataLength:(NSUInteger)arg2;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)addToken:(NSInteger)arg1 extendedDataLength:(NSUInteger)arg2 extendedDataCount:(NSUInteger)arg3;
     /* Encoded args for previous method: B20@0:4i8I12I16 */

- (char *)setExtendedDataAtIndex:(NSUInteger)arg1 extendedDataIndex:(NSUInteger)arg2 length:(NSUInteger)arg3;
- (void)setupExtendedDataForTokenAtIndex:(NSUInteger)arg1 extendedDataLength:(NSUInteger)arg2 extendedDataCount:(NSUInteger)arg3;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)copyTokenAtIndex:(NSUInteger)arg1 fromFormula:(id)arg2;
     /* Encoded args for previous method: B16@0:4I8@12 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)copyTokenFromXlPtg:(struct XlPtg { char *x1; NSInteger x2; NSInteger x3; NSUInteger x4; unsigned short x5; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{XlPtg=*iiIS}8 */

- (void)removeAllTokens;
- (void)populateXlPtg:(struct XlPtg { char *x1; NSInteger x2; NSInteger x3; NSUInteger x4; unsigned short x5; }*)arg1 index:(NSUInteger)arg2;
- (struct ChVector<XlPtg*> { struct XlPtg {} **x1; struct XlPtg {} **x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; }*)xlPtgs;
- (id)originalFormulaString;
- (void)setOriginalFormulaString:(id)arg1;
- (NSInteger)warningType;
- (id)warningParameter;
- (void)setWarningParameter:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isSharedFormula;
     /* Encoded args for previous method: B8@0:4 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isBaseFormula;
     /* Encoded args for previous method: B8@0:4 */

- (struct EDToken { unsigned short x1; NSUInteger x2; }*)tokenAtIndex:(NSUInteger)arg1;
- (void)archiveByAppendingToMutableData:(struct __CFData { }*)arg1;
- (NSUInteger)tokenCount;

@end

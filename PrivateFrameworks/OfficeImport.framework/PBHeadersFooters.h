/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface PBHeadersFooters : NSObject 
{
}

+ (id)headersFootersContainerWithSlideContainer:(id)arg1 state:(id)arg2;
+ (struct PptHeadersFootersAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; NSInteger x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; }*)headersFootersAtomWithHeadersFootersContainer:(id)arg1;
     /* Encoded args for previous method: ^{PptHeadersFootersAtom=^^?S{EshHeader=iIsSC}^^?iBiBBBBBB}12@0:4@8 */

+ (id)readStringWithInstance:(NSInteger)arg1 fromContainer:(id)arg2;
+ (void)readHeaderFooterTextFromHeadersFootersContainer:(id)arg1 toPlaceholderShape:(id)arg2;
+ (void)addCopyOfHeaderFooterPlaceholderOfType:(NSInteger)arg1 toDrawables:(id)arg2 slideBase:(id)arg3 headersFootersContainer:(id)arg4 state:(id)arg5;
+ (void)readHeadersFootersTextToSlideMasterDrawables:(id)arg1 state:(id)arg2;
+ (void)readHeadersFootersToSlideLayout:(id)arg1 drawables:(id)arg2 state:(id)arg3;
+ (void)readHeadersFootersFromSlideContainer:(id)arg1 toSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4;


@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, CPTextLine, CPLayoutArea, CPList;



@interface CPListMaker : NSObject <CPDisposable>
{
    CPLayoutArea *area;
    NSArray *spacers;
    NSUInteger textLineCount;
    CPTextLine **textLines;
    CPList *list;
}

+ (void)makeListsInLayoutArea:(id)arg1;
+ (void)makeListsInChunk:(id)arg1;
+ (void)makeListsInPage:(id)arg1;

- (void)finalize;
- (void)dealloc;
- (id)initWithLayoutArea:(id)arg1;
- (void)fetchTextLine:(id)arg1;
- (void)fetchTextLinesInColumn:(id)arg1;
- (void)makeListItemFrom:(struct CPListInfo { NSUInteger x1; NSUInteger x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct __CFString {} *x4; NSInteger x5; NSUInteger x6; NSUInteger x7; NSInteger x8; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x9; void*x10; void*x11; void *x12; }*)arg1 stopAt:(NSUInteger)arg2;
     /* Encoded args for previous method: v16@0:4^{CPListInfo=II{CGRect={CGPoint=ff}{CGSize=ff}}^{__CFString}iIIiBBB^v}8I12 */

- (BOOL)makeListFrom:(struct CPListInfo { NSUInteger x1; NSUInteger x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct __CFString {} *x4; NSInteger x5; NSUInteger x6; NSUInteger x7; NSInteger x8; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x9; void*x10; void*x11; void *x12; }*)arg1;
     /* Encoded args for previous method: c12@0:4^{CPListInfo=II{CGRect={CGPoint=ff}{CGSize=ff}}^{__CFString}iIIiBBB^v}8 */

- (void)makeListsInColumn:(id)arg1;
- (void)makeLists;
- (void)dispose;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface PBSlideBase : NSObject 
{
}

+ (void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3;
+ (void)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4;
+ (BOOL)slideFollowsMasterBackground:(id)arg1;
+ (void)parseSlideShowInfo:(struct PptSSSlideInfoAtom { int (**x1)(); unsigned short x2; struct EshHeader { NSInteger x_3_1_1; NSUInteger x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); NSInteger x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; NSInteger x7; NSInteger x8; unsigned char x9; NSInteger x10; unsigned short x11; NSInteger x12; }*)arg1 slideBase:(id)arg2 state:(id)arg3;
     /* Encoded args for previous method: v20@0:4^{PptSSSlideInfoAtom=^^?S{EshHeader=iIsSC}^^?iBiiCiSi}8@12@16 */

+ (NSInteger)parseTransType:(NSInteger)arg1 direction:(long)arg2;
+ (id)createOptions:(long)arg1 transType:(NSInteger)arg2;
+ (void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3;


@end

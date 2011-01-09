/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OADAdjustRect : NSObject 
{
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mLeft;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mTop;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mRight;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        NSInteger value; 
    } mBottom;
}


- (id)initWithLeft:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg1 top:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg2 right:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg3 bottom:(struct OADAdjustCoord { BOOL x1; NSInteger x2; })arg4;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })top;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })right;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })left;
- (struct OADAdjustCoord { BOOL x1; NSInteger x2; })bottom;

@end

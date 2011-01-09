/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADStyleMatrix : NSObject 
{
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}


- (id)init;
- (void)dealloc;
- (id)strokeAtIndex:(NSUInteger)arg1;
- (id)effectsAtIndex:(NSUInteger)arg1;
- (void)addStroke:(id)arg1;
- (void)addBgFill:(id)arg1;
- (void)addFill:(id)arg1;
- (NSUInteger)fillCount;
- (id)fillAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (NSUInteger)strokeCount;
- (id)strokeAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (void)addEffects:(id)arg1;
- (NSUInteger)effectsCount;
- (id)effectsAtIndex:(NSUInteger)arg1 color:(id)arg2;
- (NSUInteger)bgFillCount;
- (id)bgFillAtIndex:(NSUInteger)arg1;
- (id)fillAtIndex:(NSUInteger)arg1;

@end

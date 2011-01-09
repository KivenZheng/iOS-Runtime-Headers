/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODIState;



@interface ODIHorizonalList3 : NSObject 
{
    NSUInteger mMaxPointCount;
    ODIState *mState;
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;

- (id)initWithState:(id)arg1;
- (void)setMaxPointCount:(NSUInteger)arg1;
- (void)map;
- (void)mapPillarPoints:(id)arg1 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;

@end

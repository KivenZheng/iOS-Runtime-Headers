/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIFloatArray : NSObject 
{
    NSInteger _count;
    NSInteger _gapCount;
    NSInteger *_gaps;
    float _gapValue;
    float _minValue;
    union { 
        float singleton; 
        float *array; 
    } _values;
    struct { 
        unsigned int valueIsSingleton : 1; 
        unsigned int hideGaps : 1; 
        unsigned int unused : 30; 
    } _floatArrayFlags;
}


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)refreshWithDataProvider:(id)arg1;
- (float)minValue;
- (BOOL)_setupValuesWithCount:(NSInteger)arg1 singleValue:(float)arg2 isRefresh:(BOOL)arg3;
- (BOOL)_setupValuesWithCount:(NSInteger)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3;
- (BOOL)_setupGapIndexesWithCount:(NSInteger)arg1 dataProvider:(id)arg2 isRefresh:(BOOL)arg3;
- (BOOL)_setupWithDataProvider:(id)arg1 valueIsSingleton:(BOOL)arg2 singletonValue:(float)arg3 isRefresh:(BOOL)arg4;
- (BOOL)refreshWithDataProvider:(id)arg1 singleValue:(float)arg2;
- (float)singleValue;
- (NSInteger)valueCount;
- (float)sum;
- (struct { float x1; float x2; })offsetsForIndex:(NSInteger)arg1;
- (struct { float x1; float x2; })offsetsForGapIndex:(NSInteger)arg1;
- (struct { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; BOOL x5; BOOL x6; })_indexesViaSingletonFromOffset:(float)arg1 toOffset:(float)arg2;
- (struct { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; BOOL x5; BOOL x6; })_indexesViaArrayFromOffset:(float)arg1 toOffset:(float)arg2;
- (struct { NSInteger x1; NSInteger x2; NSInteger x3; NSInteger x4; BOOL x5; BOOL x6; })indexesFromOffset:(float)arg1 toOffset:(float)arg2;
- (NSInteger)indexForGapIndex:(NSInteger)arg1;
- (void)hideGaps:(BOOL)arg1;
- (id)init;
- (void)dealloc;

@end

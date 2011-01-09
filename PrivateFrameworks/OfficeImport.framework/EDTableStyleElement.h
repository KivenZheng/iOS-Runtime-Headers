/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDDifferentialStyle;



@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying>
{
    EDCollection *mDifferentialStyles;
    NSInteger mType;
    NSUInteger mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

+ (id)tableStyleElementWithResources:(id)arg1;

- (NSUInteger)key;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (void)dealloc;
- (void)setDifferentialStyleWithIndex:(NSUInteger)arg1;
- (id)initWithResources:(id)arg1;
- (void)setBandSize:(NSUInteger)arg1;
- (id)differentialStyle;
- (void)setDifferentialStyle:(id)arg1;
- (NSUInteger)bandSize;

@end

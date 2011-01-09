/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OABFill : NSObject 
{
}

+ (id)readFillFromFillPropertiesManager:(id)arg1 colorPalette:(id)arg2;
+ (void)addStopsFromArray:(const struct OABGradientStop { id x1; float x2; }*)arg1 stopCount:(NSInteger)arg2 inverted:(BOOL)arg3 startPos:(float)arg4 endPos:(float)arg5 toGradientFill:(id)arg6 fillPropertiesManager:(id)arg7;
+ (void)readGradientFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3;
+ (void)readImageFill:(id)arg1 fromFillPropertiesManager:(id)arg2 colorPalette:(id)arg3;


@end

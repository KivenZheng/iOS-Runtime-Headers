/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;



@interface OADTextListStyle : NSObject 
{
    NSMutableArray *mParagraphProperties;
}


- (id)init;
- (void)dealloc;
- (id)defaultProperties;
- (void)setPropertiesForListLevel:(NSUInteger)arg1 properties:(id)arg2;
- (void)overrideWithTextStyle:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)flatten;
- (void)setParentTextListStyle:(id)arg1;
- (id)initWithDefaults;
- (id)propertiesForListLevel:(NSUInteger)arg1;

@end

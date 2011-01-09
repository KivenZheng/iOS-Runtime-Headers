/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSStyle;



@interface GQHBulletInfo : NSObject 
{
    NSInteger mType;
    NSInteger mBulletIndent;
    NSInteger mTextIndent;
    struct __CFString { } *mChar;
    BOOL mHasNumber;
    NSInteger mNumber;
    NSInteger mLabelType;
    GQDSStyle *mStyle;
}


- (NSInteger)number;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (void)setNumber:(NSInteger)arg1;
- (BOOL)hasNumber;
- (void)setHasNumber:(BOOL)arg1;
- (void)setLabelType:(NSInteger)arg1;
- (NSInteger)labelType;
- (void)setBulletChar:(struct __CFString { }*)arg1;
- (struct __CFString { }*)bulletChar;
- (struct __CFString { }*)createTierStringNumber;
- (void)setBulletIndent:(NSInteger)arg1;
- (NSInteger)bulletIndent;
- (NSInteger)textIndent;
- (void)setTextIndent:(NSInteger)arg1;

@end

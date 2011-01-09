/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSOrthography : NSObject <NSCopying, NSCoding>
{
}

@property(readonly) NSString *dominantScript;
@property(readonly) NSDictionary *languageMap;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)classForCoder;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)languageMap;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (id)dominantScript;
- (NSUInteger)orthographyFlags;
- (id)languagesForScript:(id)arg1;
- (id)dominantLanguageForScript:(id)arg1;
- (id)dominantLanguage;
- (id)allScripts;
- (id)allLanguages;

@end

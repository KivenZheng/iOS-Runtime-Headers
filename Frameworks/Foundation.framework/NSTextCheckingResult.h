/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding>
{
}

@property(readonly) unsigned long long resultType;
@property(readonly) _NSRange range;

+ (void)initialize;
+ (id)orthographyCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 orthography:(id)arg2;
+ (id)spellCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
+ (id)grammarCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 details:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 date:(id)arg2;
+ (id)dateCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
+ (id)addressCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 components:(id)arg2;
+ (id)linkCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 URL:(id)arg2;
+ (id)quoteCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementString:(id)arg2;
+ (id)dashCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementString:(id)arg2;
+ (id)replacementCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementString:(id)arg2;
+ (id)correctionCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementString:(id)arg2;
+ (id)regularExpressionCheckingResultWithRanges:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg1 count:(NSUInteger)arg2 regularExpression:(id)arg3;
+ (id)phoneNumberCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 phoneNumber:(id)arg2;
+ (id)transitInformationCheckingResultWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 components:(id)arg2;

- (id)timeZone;
- (double)duration;
- (id)replacementString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)phoneNumber;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (id)URL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)date;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeAtIndex:(NSUInteger)arg1;
- (void)encodeRangeWithCoder:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })decodeRangeWithCoder:(id)arg1;
- (id)addressComponents;
- (id)orthography;
- (id)grammarDetails;
- (id)regularExpression;
- (NSUInteger)numberOfRanges;
- (id)resultByAdjustingRangesWithOffset:(NSInteger)arg1;
- (BOOL)_adjustRangesWithOffset:(NSInteger)arg1;
- (void*)underlyingResult;
- (id)components;
- (unsigned long long)resultType;

@end

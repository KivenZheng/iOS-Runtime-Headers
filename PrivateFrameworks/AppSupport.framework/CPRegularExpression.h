/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;



@interface CPRegularExpression : NSObject <NSCopying, NSCoding>
{
    NSString *_expressionString;
    void *_reserved;
}

+ (void)initialize;
+ (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;
+ (id)regularExpressionWithString:(id)arg1;

- (id)initWithExpressionString:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })matchedRangeForString:(id)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 subexpressionRanges:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3 count:(NSUInteger)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithExpressionString:(id)arg1 options:(NSUInteger)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })matchedRangeForCString:(const char *)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 subexpressionRanges:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg3 count:(NSUInteger)arg4;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)numberOfSubexpressions;
- (id)expressionString;

@end

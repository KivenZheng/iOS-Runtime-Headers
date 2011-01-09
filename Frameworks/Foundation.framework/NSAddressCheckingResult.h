/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDictionary;



@interface NSAddressCheckingResult : NSTextCheckingResult 
{
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
    NSDictionary *_components;
    id _underlyingResult;
}

@property(readonly) void *underlyingResult;


- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 components:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 components:(id)arg2;
- (id)resultByAdjustingRangesWithOffset:(NSInteger)arg1;
- (BOOL)_adjustRangesWithOffset:(NSInteger)arg1;
- (void*)underlyingResult;
- (id)components;
- (unsigned long long)resultType;

@end

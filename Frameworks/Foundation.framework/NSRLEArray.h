/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying>
{
    struct _NSRefCountedRunArray { void *x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; struct _NSRunArrayItem { 
            NSUInteger length; 
            id obj; 
        } x8[0]; } *theList;
}


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)finalize;
- (NSUInteger)count;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray { void *x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; struct _NSRunArrayItem { NSUInteger x_8_1_1; id x_8_1_2; } x8[0]; }*)arg1;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray { void *x1; NSUInteger x2; NSUInteger x3; NSUInteger x4; NSUInteger x5; NSUInteger x6; NSUInteger x7; struct _NSRunArrayItem { NSUInteger x_8_1_1; id x_8_1_2; } x8[0]; }*)arg1;
- (id)objectAtIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2;
- (id)objectAtIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; }*)arg2 runIndex:(NSUInteger*)arg3;
- (id)objectAtRunIndex:(NSUInteger)arg1 length:(NSUInteger*)arg2;

@end

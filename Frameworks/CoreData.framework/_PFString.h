/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */



@interface _PFString : NSString 
{
    NSInteger _reserved1;
    NSInteger _cd_rc;
    NSUInteger _length;
    id _sourceData;
    NSInteger _reserved2;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)accessInstanceVariablesDirectly;

- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getCharacters:(unsigned short*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const char *)UTF8String;
- (NSUInteger)hash;
- (unsigned short)characterAtIndex:(NSUInteger)arg1;
- (const char *)cString;
- (BOOL)isEqualToString:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (NSUInteger)length;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (id)description;
- (void)getCString:(char *)arg1;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (NSUInteger)cStringLength;

@end

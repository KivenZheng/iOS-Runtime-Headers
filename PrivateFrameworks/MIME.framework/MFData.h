/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSData, NSString;



@interface MFData : NSData <NSCopying, NSMutableCopying, WeaklyReferencedObject>
{
    NSData *_internal;
    NSString *_path;
    NSData *_parent;
    BOOL _subdata;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)setDefaultMappingThresholdInBytes:(NSUInteger)arg1;

- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytes:(const void*)arg1 length:(NSUInteger)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2 freeWhenDone:(BOOL)arg3;
- (NSUInteger)length;
- (id)init;
- (id)retain;
- (void)release;
- (id)data;
- (id)initWithData:(id)arg1;
- (void)dealloc;
- (const void*)bytes;
- (NSUInteger)retainCount;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(NSUInteger)arg2;
- (id)subdataWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)initWithImmutableData:(id)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)_initWithFile:(id)arg1;
- (id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2;
- (id)_initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 from:(id)arg2 retainingParent:(BOOL)arg3;
- (BOOL)mf_immutable;

@end

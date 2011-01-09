/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData;



@interface _PFEncodedData : NSData 
{
    NSData *_aData;
    NSUInteger _byteCount;
}


- (BOOL)writeToURL:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (BOOL)writeToFile:(id)arg1 options:(NSUInteger)arg2 error:(id*)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopy;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)length;
- (id)init;
- (id)retain;
- (void)release;
- (void)getBytes:(void*)arg1 length:(NSUInteger)arg2;
- (const void*)bytes;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)retainCount;
- (id)description;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)subdataWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })rangeOfData:(id)arg1 options:(NSUInteger)arg2 range:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg3;
- (id)privateCopy;

@end

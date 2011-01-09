/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class <VMUMemory>;



@interface VMUFatArch : NSObject 
{
    NSUInteger _fileOffset;
    NSUInteger _size;
    NSUInteger _alignment;
    <VMUMemory> *_memory;
}

+ (id)fatArchWithMemory:(id)arg1 memoryView:(id)arg2;
+ (id)fatArchWithMemory:(id)arg1 fileOffset:(NSUInteger)arg2 size:(NSUInteger)arg3 alignment:(NSUInteger)arg4;

- (NSUInteger)size;
- (NSUInteger)alignment;
- (void)dealloc;
- (id)initWithMemory:(id)arg1 fileOffset:(NSUInteger)arg2 size:(NSUInteger)arg3 alignment:(NSUInteger)arg4;
- (id)initWithMemory:(id)arg1 memoryView:(id)arg2;
- (NSUInteger)fileOffset;
- (id)memory;
- (id)architecture;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMUMachTaskContainer, NSArray, <VMUMemory>;



@interface VMUTask : NSObject 
{
    <VMUMemory> *_memory;
    VMUMachTaskContainer *_machTaskContainer;
    BOOL _isTranslated;
    NSArray *_headers;
}

+ (id)taskWithMachTaskContainer:(id)arg1;
+ (BOOL)pidIsTranslated:(NSInteger)arg1;
+ (id)findDyldHeaderInMemory:(id)arg1 address:(unsigned long long)arg2;

- (void)dealloc;
- (id)initWithMachTaskContainer:(id)arg1;
- (id)memory;
- (NSInteger)pid;
- (NSUInteger)task;
- (BOOL)isTranslated;
- (id)headers;

@end

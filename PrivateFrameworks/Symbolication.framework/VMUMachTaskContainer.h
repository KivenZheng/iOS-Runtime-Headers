/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUMachTaskContainer : NSObject 
{
    NSInteger _pid;
    NSUInteger _task;
}

+ (id)machTaskContainerWithTask:(NSUInteger)arg1;
+ (id)machTaskContainerWithPid:(NSInteger)arg1;
+ (id)machTaskContainer;
+ (id)machTaskContainerWithPid:(NSInteger)arg1 task:(NSUInteger)arg2;

- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)initWithPid:(NSInteger)arg1 task:(NSUInteger)arg2;
- (NSInteger)pid;
- (NSUInteger)task;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface __NSCFInputStream : NSInputStream 
{
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { NSInteger x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (NSUInteger)streamStatus;
- (NSInteger)read:(char *)arg1 maxLength:(NSUInteger)arg2;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(NSUInteger*)arg2;
- (id)initWithURL:(id)arg1;
- (void)finalize;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (id)initWithData:(id)arg1;
- (NSUInteger)retainCount;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (id)initWithFileAtPath:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)streamError;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)open;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */



@interface MFObjectCache : NSObject 
{
    NSInteger _arrayCapacity;
    struct __CFArray { } *_keysAndValues;
    BOOL _useIsEqual;
}


- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(long)arg1;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setCapacity:(long)arg1;
- (void)setUsesIsEqualForComparison:(BOOL)arg1;
- (BOOL)isObjectInCache:(id)arg1;

@end

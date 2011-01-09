/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUPointerKeyDictionary, <TSUFlushable>, TSUMemoryWatcher, NSThread, NSCondition, TSURetainedPointerKeyDictionary;



@interface TSUFlushingManager : NSObject 
{
    TSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > { struct _Rb_tree<TSUFlushableObjectInfo*,TSUFlushableObjectInfo*,std::_Identity<TSUFlushableObjectInfo*>,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > { 
            struct _Rb_tree_impl<TSUFlushableObjectInfoPointerFlushingOrderLess,false> { 
                struct TSUFlushableObjectInfoPointerFlushingOrderLess { } _M_key_compare; 
                struct _Rb_tree_node_base { 
                    NSInteger _M_color; 
                    struct _Rb_tree_node_base {} *_M_parent; 
                    struct _Rb_tree_node_base {} *_M_left; 
                    struct _Rb_tree_node_base {} *_M_right; 
                } _M_header; 
                NSUInteger _M_node_count; 
            } _M_impl; 
        } x1; } *_sortedObjects;
    struct set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > { struct _Rb_tree<TSUFlushableObjectInfo*,TSUFlushableObjectInfo*,std::_Identity<TSUFlushableObjectInfo*>,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > { 
            struct _Rb_tree_impl<TSUFlushableObjectInfoPointerTimeStampLess,false> { 
                struct TSUFlushableObjectInfoPointerTimeStampLess { } _M_key_compare; 
                struct _Rb_tree_node_base { 
                    NSInteger _M_color; 
                    struct _Rb_tree_node_base {} *_M_parent; 
                    struct _Rb_tree_node_base {} *_M_left; 
                    struct _Rb_tree_node_base {} *_M_right; 
                } _M_header; 
                NSUInteger _M_node_count; 
            } _M_impl; 
        } x1; } *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    NSUInteger _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _isFlushing;
    <TSUFlushable> *_flushingObject;
    BOOL _isWaitingForFlush;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    TSUMemoryWatcher *_memoryWatcher;
    NSThread *_bgThread;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)_singletonAlloc;
+ (id)sharedManager;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (id)autorelease;
- (void)protectObject:(id)arg1;
- (void)stopProtectingObject:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)unsafeToFlush:(id)arg1;
- (void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2;
- (void)memoryLevelIncreased:(NSInteger)arg1 was:(NSInteger)arg2;
- (void)memoryLevelDecreased:(NSInteger)arg1 was:(NSInteger)arg2;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)_backgroundThread:(id)arg1;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x1; NSInteger x2; NSInteger x3; NSInteger x4; NSUInteger x5[2]; }*)arg1;
- (struct TSUFlushableObjectInfo { id x1; NSInteger x2; NSInteger x3; NSInteger x4; NSUInteger x5[2]; }*)eraseInfoForObject:(id)arg1;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x1; NSInteger x2; NSInteger x3; NSInteger x4; NSUInteger x5[2]; }*)arg1;
- (void)transferNewObjects;
- (void)advanceClock;
- (BOOL)controlsActiveObject:(id)arg1;
- (BOOL)controlsInactiveObject:(id)arg1;
- (void)_didUseObject:(id)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLCacheInternal;



@interface NSURLCache : NSObject 
{
    NSURLCacheInternal *_internal;
}

+ (id)sharedURLCache;
+ (void)setSharedURLCache:(id)arg1;
+ (void)_performDiskCacheSync;
+ (void)_diskCacheSyncLoop:(id)arg1;

- (void)removeAllCachedResponses;
- (id)initWithMemoryCapacity:(NSUInteger)arg1 diskCapacity:(NSUInteger)arg2 diskPath:(id)arg3;
- (id)init;
- (void)dealloc;
- (struct _CFCachedURLResponse { }*)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest { }*)arg1;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse { }*)arg1 forRequest:(struct _CFURLRequest { }*)arg2;
- (long)_nscfBridgeURLCacheDiskCapacity;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)arg1;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)arg1;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (long)_nscfBridgeURLCacheMemoryCapacity;
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long)_nscfBridgeURLCacheCurrentDiskUsage;
- (id)initWithExistingSharedCFURLCache:(struct _CFURLCache { }*)arg1;
- (id)cachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)removeCachedResponseForRequest:(id)arg1;
- (NSUInteger)memoryCapacity;
- (NSUInteger)diskCapacity;
- (void)setMemoryCapacity:(NSUInteger)arg1;
- (void)setDiskCapacity:(NSUInteger)arg1;
- (NSUInteger)currentMemoryUsage;
- (NSUInteger)currentDiskUsage;
- (struct { NSInteger x1; NSInteger x2; })_cacheStatistics;
- (struct _CFURLCache { }*)_CFURLCache;
- (void)_memoryCacheRemoveNodeFromLRUList:(id)arg1;
- (void)_memoryCacheAppendNodeToLRUList:(id)arg1;
- (void)_memoryCacheTouchNode:(id)arg1;
- (void)_memoryCacheTruncate:(NSUInteger)arg1;
- (id)_memoryCacheGet:(id)arg1;
- (void)_memoryCachePut:(id)arg1;
- (void)_memoryCacheRemove:(id)arg1;
- (void)_memoryCacheClear;
- (void)_diskCacheSetSyncTimer;
- (void)_diskCacheSync;
- (void)_diskCacheCreateLRUList:(id)arg1;
- (id)_cacheDirectory;
- (id)_diskCacheDefaultPath;
- (BOOL)_diskCacheCreateDirectory;
- (id)_diskCacheGet:(id)arg1;
- (void)_diskCacheClear;
- (void)_diskCacheTruncate:(NSUInteger)arg1;
- (void)_diskCacheScheduleWrite:(id)arg1;
- (void)_diskCacheExecuteWrite:(id)arg1;
- (void)_diskCacheScheduleRemoval:(id)arg1;
- (void)_diskCacheExecuteRemoval:(id)arg1;

@end

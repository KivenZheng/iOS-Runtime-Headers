/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMClientCapabilities, NSMutableArray;



@interface GMMDirectionsIconRequest : PBRequest 
{
    GMMClientCapabilities *_capabilities;
    NSInteger _cachedIconVersion;
    BOOL _hasCachedIconVersion;
    NSMutableArray *_cachedIconIDs;
}

@property(readonly) BOOL hasCapabilities;
@property(readonly) NSInteger cachedIconIDsCount;
@property(retain) NSMutableArray *cachedIconIDs;
@property(readonly) BOOL hasCachedIconVersion;
@property NSInteger cachedIconVersion;
@property(retain) GMMClientCapabilities *capabilities;


- (void)writeTo:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setCachedIconVersion:(NSInteger)arg1;
- (void)setCachedIconIDs:(id)arg1;
- (id)capabilities;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (NSUInteger)requestTypeCode;
- (NSInteger)cachedIconVersion;
- (id)cachedIconIDs;
- (NSInteger)cachedIconIDsCount;
- (void)setCachedIconID:(long long)arg1 atIndex:(NSUInteger)arg2;
- (long long)cachedIconIDAtIndex:(NSUInteger)arg1;
- (void)addCachedIconID:(long long)arg1;
- (BOOL)hasCachedIconVersion;
- (BOOL)hasCapabilities;
- (Class)responseClass;

@end

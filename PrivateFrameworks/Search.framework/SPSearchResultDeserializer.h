/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class CPSearchMatcher, NSString, NSArray;



@interface SPSearchResultDeserializer : PBDataReader 
{
    NSUInteger _byteVector;
    NSArray *_resultOffsetVector;
    BOOL _munmapAtDealloc;
    NSUInteger _resultCount;
    NSUInteger _domain;
    NSString *_displayIdentifier;
    NSString *_category;
    CPSearchMatcher *_matcher;
    CPSearchMatcher *_diacriticMatcher;
}

@property(readonly) CPSearchMatcher *diacriticMatcher;
@property(readonly) CPSearchMatcher *matcher;
@property(readonly) NSString *category;
@property(readonly) NSString *displayIdentifier;
@property(readonly) NSUInteger domain;
@property(readonly) NSUInteger resultCount;


- (NSInteger)read:(const char *)arg1 maxLength:(NSUInteger)arg2;
- (void)dealloc;
- (id)displayIdentifier;
- (id)readBytes:(NSUInteger)arg1;
- (id)category;
- (NSUInteger)resultCount;
- (BOOL)deserializeResultAtIndex:(NSUInteger)arg1 toCursor:(id)arg2;
- (NSUInteger)domain;
- (BOOL)readResultIntoCursor:(id)arg1;
- (void)sortResultsUsingQueryString:(id)arg1;
- (void)_prepareForRandomAccess;
- (id)initWithMappedRegion:(NSUInteger)arg1 length:(NSUInteger)arg2;
- (id)initWithMallocRegion:(NSUInteger)arg1 length:(NSUInteger)arg2;
- (id)initWithSerializer:(id)arg1;
- (id)diacriticMatcher;
- (id)matcher;

@end

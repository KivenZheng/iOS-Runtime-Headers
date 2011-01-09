/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class GMMMapInfo, NSString, NSMutableDictionary;



@interface SearchHistoryItem : NSObject <HistoryItem>
{
    NSString *_query;
    NSString *_displayQuery;
    NSString *_location;
    BOOL _hasMultipleLocations;
    NSMutableDictionary *_info;
    NSInteger _requestType;
    GMMMapInfo *_mapInfo;
}

@property(readonly) GMMMapInfo *mapInfo;
@property(readonly) NSInteger requestType;
@property(readonly) BOOL hasMultipleLocations;
@property(readonly) NSString *location;
@property(readonly) NSString *displayQuery;
@property(readonly) NSString *query;


- (id)initWithQuery:(id)arg1 displayQuery:(id)arg2 location:(id)arg3 hasMultipleLocations:(BOOL)arg4 requestType:(NSInteger)arg5 mapInfo:(id)arg6;
- (id)initWithQuery:(id)arg1 displayQuery:(id)arg2 location:(id)arg3 requestType:(NSInteger)arg4 mapInfo:(id)arg5;
- (id)displayQuery;
- (BOOL)hasMultipleLocations;
- (id)mapInfo;
- (id)dictionaryRepresentation;
- (NSInteger)type;
- (id)query;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)location;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (NSInteger)requestType;

@end

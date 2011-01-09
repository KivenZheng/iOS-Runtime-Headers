/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class YTSearchRequest, NSMutableArray;



@interface YTBookmarksVideoDataSource : YTVideoDataSource 
{
    NSMutableArray *_bookmarkedShortIDs;
    YTSearchRequest *_bookmarksSearchRequest;
    BOOL _lastReloadWasAccountsFavorites;
}


- (void)_nextBatch;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(NSUInteger)arg3 videosRemaining:(NSUInteger)arg4;
- (void)searchRequest:(id)arg1 foundBatchURL:(id)arg2;
- (void)addVideo:(id)arg1;
- (NSUInteger)maxVideosToSave;
- (BOOL)isLoading;
- (id)init;
- (void)dealloc;
- (void)reloadData;

@end

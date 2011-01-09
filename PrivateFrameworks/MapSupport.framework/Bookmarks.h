/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MapSupport.framework/MapSupport
 */

@class NSMutableArray;



@interface Bookmarks : NSObject 
{
    NSMutableArray *_bookmarks;
    BOOL _savingEnabled;
    BOOL _hasPendingChanges;
}

+ (id)settingsDirectoryPath;
+ (void)setSettingsDirectoryPath:(id)arg1;
+ (id)sharedBookmarks;

- (id)_bookmarksPath;
- (id)orderedBookmarks;
- (void)_madeChanges;
- (void)addBookmark:(id)arg1;
- (void)replaceBookmark:(id)arg1 withBookmark:(id)arg2;
- (void)removeBookmarkAtIndex:(NSUInteger)arg1;
- (void)moveBookmarkAtIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (void)beginChanges;
- (void)_saveBookmarks;
- (id)init;
- (void)endChanges;

@end

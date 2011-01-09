/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface MLPlaylist : NSObject 
{
}

+ (id)activeOnTheGoPlaylist;

- (unsigned long long)seedTrackPersistentID;
- (NSUInteger)countOfTracks;
- (void)insertTracks:(id)arg1 atIndex:(NSUInteger)arg2;
- (unsigned long long)persistentUID;
- (BOOL)isMutableUserVisiblePlaylist;
- (BOOL)isPhysicalPlaylist;
- (BOOL)isPurchasedItemsPlaylist;
- (BOOL)isMainPurchasedItemsPlaylist;
- (NSInteger)playlistType;
- (BOOL)isAlbum;
- (id)representativeAlbumTrack;
- (id)infoDescription;
- (void)setSeedTrack:(id)arg1;
- (BOOL)isUserEditable;
- (BOOL)isDeletablePlaylist;
- (void)moveTracksFromRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 toIndex:(NSUInteger)arg2;
- (void)replaceTracksInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 withTracks:(id)arg2;
- (void)insertTrackFromQuery:(id)arg1 entityIndex:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)insertTracksFromQuery:(id)arg1 entityIndexes:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)removeTracksInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)prepareForSaving;
- (void)writeToSavedFile;
- (BOOL)hasTracks;
- (BOOL)isSportMix;
- (unsigned long)uniqueID;
- (void)setName:(id)arg1;
- (id)name;

@end

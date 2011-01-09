/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLChapterTOC;



@interface MLTrackRepSQL : MLTrack 
{
    MLChapterTOC *_chapterTOC;
}

@property BOOL hasChanges;


- (id)sortArtist;
- (id)sortAlbum;
- (id)sortAlbumArtist;
- (id)podcastURL;
- (BOOL)isDemoRental;
- (NSInteger)customStopTimeInMS;
- (BOOL)videoHasAlternateAudio;
- (NSUInteger)videoAudioTrackID;
- (void)incrementSkipCount;
- (double)lastPlayedDate;
- (BOOL)shouldBookmarkLastPlayedTime;
- (id)lyrics;
- (id)initWithDBRecord:(void*)arg1;
- (BOOL)__dbRecordsEqual:(id)arg1;
- (BOOL)isEqualToTrack:(id)arg1;
- (id)infoShortDescription;
- (id)_sortStringValueForProperty:(NSInteger)arg1;
- (id)sortTitle;
- (void)setLyrics:(id)arg1;
- (NSUInteger)episodeNumber;
- (unsigned long)audibleDRMGroupID;
- (unsigned long)numberOfDiscs;
- (id)movieInfo;
- (unsigned long long)genreID;
- (BOOL)isCompilationTrack;
- (BOOL)isExcludedFromShuffle;
- (BOOL)isITunesU;
- (BOOL)hasLyrics;
- (double)demoRentalExpirationDate;
- (id)eqPresetName;
- (float)volumeNormalization;
- (BOOL)hasChapterData;
- (NSUInteger)videoSubtitleTrackID;
- (unsigned long)imageDBRecordID:(NSInteger)arg1;
- (BOOL)hasChanges;
- (void)markNominalAmountHasBeenPlayed;
- (BOOL)hasLastPlayedBookmarkTime;
- (double)lastPlayedBookmarkTimeInSeconds;
- (unsigned long)ratingLevel;
- (BOOL)hasNominalAmountBeenPlayed;
- (BOOL)isOTAPurchasedContent;
- (void)setHasChanges:(BOOL)arg1;
- (void*)dbRecord;
- (NSInteger)dbRecordID;
- (unsigned long long)persistentUID;
- (NSUInteger)skipCount;
- (BOOL)rating;
- (NSUInteger)playCount;
- (unsigned long)bpm;
- (NSUInteger)seasonNumber;
- (id)composer;
- (id)artist;
- (id)genre;
- (BOOL)isRental;
- (void)reallyIncrementPlayCount;
- (void)updateLastPlayedBookmarkTimeInSeconds:(double)arg1;
- (id)initWithTrackContext:(void*)arg1;
- (unsigned long long)globalID;
- (unsigned long long)albumPID;
- (unsigned long long)artistPID;
- (id)filePath;
- (BOOL)_isFilePathPlayable;
- (id)albumArtist;
- (id)album;
- (id)copyright;
- (double)releaseDate;
- (id)sortComposer;
- (id)podcastName;
- (id)podcastDirectStoreURL;
- (unsigned long long)storeItemAdamID;
- (unsigned long long)storePlaylistAdamID;
- (id)seriesDisplayName;
- (id)seasonDisplayName;
- (BOOL)isAudibleAudioBook;
- (unsigned long)trackIndexInAlbum;
- (unsigned long)numberOfTracksInAlbum;
- (unsigned long)discNumber;
- (id)contentRatingInfo;
- (unsigned long long)accountID;
- (unsigned long)mediaType;
- (BOOL)hasVideoData;
- (float)volumeAdjustment;
- (NSInteger)durationInMS;
- (NSInteger)startTimeInMS;
- (NSInteger)totalTimeInMS;
- (void)gaplessHeuristicInfo:(NSUInteger*)arg1 duration:(NSUInteger*)arg2 lastPacketsResync:(NSUInteger*)arg3 encodingDelay:(NSUInteger*)arg4 encodingDrain:(NSUInteger*)arg5;
- (id)chapterTOC;
- (BOOL)videoHasSubtitles;
- (void)setVideoAudioTrackID:(NSUInteger)arg1;
- (void)setVideoSubtitleTrackID:(NSUInteger)arg1;
- (id)videoCodecs;
- (void)setRating:(BOOL)arg1;
- (double)lastSkippedDate;
- (BOOL)markAsDeleted;
- (BOOL)isExplicitBasedOnCurrentRestrictions;
- (BOOL)markHidden:(BOOL)arg1;
- (id)infoDescription;
- (unsigned long)uniqueID;
- (unsigned long)year;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (BOOL)isHidden;
- (void)dealloc;
- (id)comments;
- (id)grouping;
- (unsigned long long)fileSize;

@end

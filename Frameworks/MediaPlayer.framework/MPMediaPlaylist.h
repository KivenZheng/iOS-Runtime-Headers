/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaPlaylistInternal;



@interface MPMediaPlaylist : MPMediaItemCollection 
{
    MPMediaPlaylistInternal *_playlistInternal;
}

+ (BOOL)canFilterByProperty:(id)arg1;
+ (void)_createFilterableDictionary;
+ (BOOL)_isValidPlaylistProperty:(id)arg1;

- (id)representativeItem;
- (NSInteger)mediaTypes;
- (id)valueForProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)count;
- (id)items;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_initWithMLPlaylist:(id)arg1;
- (id)geniusMixArtworkForSize:(struct CGSize { float x1; float x2; })arg1;

@end

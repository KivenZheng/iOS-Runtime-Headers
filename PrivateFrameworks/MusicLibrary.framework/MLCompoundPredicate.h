/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;



@interface MLCompoundPredicate : NSObject 
{
    struct _MLCompoundPredicateStruct { 
        NSUInteger mediaType; 
        NSString *title; 
        unsigned int titleMatchesSubstring : 1; 
        unsigned int titleMatchesSearchString : 1; 
        NSString *artist; 
        unsigned int artistMatchesSubstring : 1; 
        unsigned int artistMatchesSearchString : 1; 
        NSString *albumArtist; 
        unsigned int albumArtistMatchesSubstring : 1; 
        unsigned int albumArtistMatchesSearchString : 1; 
        NSString *album; 
        unsigned int albumMatchesSubstring : 1; 
        unsigned int albumMatchesSearchString : 1; 
        NSString *genre; 
        unsigned int genreMatchesSubstring : 1; 
        unsigned int genreMatchesSearchString : 1; 
        NSString *composerName; 
        unsigned int composerNameMatchesSubstring : 1; 
        unsigned int composerNameMatchesSearchString : 1; 
        NSString *seriesDisplayName; 
        unsigned int seriesDisplayNameMatchesSubstring : 1; 
        unsigned int seriesDisplayNameMatchesSearchString : 1; 
        NSUInteger seasonNumber; 
        NSString *podcastName; 
        unsigned int podcastNameMatchesSubstring : 1; 
        unsigned int podcastNameMatchesSearchString : 1; 
        NSString *podcastURL; 
        NSString *playlistName; 
        unsigned int playlistNameMatchesSubstring : 1; 
        unsigned int playlistNameMatchesSearchString : 1; 
        NSUInteger uniqueID; 
        unsigned long long persistentUID; 
        unsigned long long artistPID; 
        unsigned long long albumPID; 
        unsigned long long genreID; 
        unsigned int mediaTypeWasSpecified : 1; 
        unsigned int includeInShuffle : 1; 
        unsigned int use_isCompilation : 1; 
        unsigned int isCompilation : 1; 
        unsigned int uniqueIDIsForPlaylist : 1; 
        unsigned int isAudibleAudioBook : 1; 
        unsigned int isRental : 1; 
        unsigned int isExplicit : 1; 
        unsigned int isSportMix : 1; 
        unsigned int isActiveSpecialUserPlaylist : 1; 
        unsigned int isGeniusMix : 1; 
        unsigned int isITunesU : 1; 
        unsigned int isMusicVideo : 1; 
        unsigned int shouldFilter_isAudibleAudioBook : 1; 
        unsigned int shouldFilter_isRental : 1; 
        unsigned int shouldFilter_isExplicit : 1; 
        unsigned int shouldFilter_isSportMix : 1; 
        unsigned int shouldFilter_isActiveSpecialUserPlaylist : 1; 
        unsigned int shouldFilter_isGeniusMix : 1; 
        unsigned int shouldFilter_isITunesU : 1; 
        unsigned int shouldFilter_isMusicVideo : 1; 
        unsigned int shouldFilter_persistentUID : 1; 
        unsigned int shouldFilter_albumPID : 1; 
        unsigned int shouldFilter_artistPID : 1; 
        unsigned int shouldFilter_genreID : 1; 
    } _cpred;
}

+ (void)_normalizeCompoundPredicate:(struct _MLCompoundPredicateStruct { NSUInteger x1; id x2; unsigned int x3 : 1; unsigned int x4 : 1; id x5; unsigned int x6 : 1; unsigned int x7 : 1; id x8; unsigned int x9 : 1; unsigned int x10 : 1; id x11; unsigned int x12 : 1; unsigned int x13 : 1; id x14; unsigned int x15 : 1; unsigned int x16 : 1; id x17; unsigned int x18 : 1; unsigned int x19 : 1; id x20; unsigned int x21 : 1; unsigned int x22 : 1; NSUInteger x23; id x24; unsigned int x25 : 1; unsigned int x26 : 1; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; NSUInteger x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; }*)arg1;
+ (struct _MLCompoundPredicateStruct { NSUInteger x1; id x2; unsigned int x3 : 1; unsigned int x4 : 1; id x5; unsigned int x6 : 1; unsigned int x7 : 1; id x8; unsigned int x9 : 1; unsigned int x10 : 1; id x11; unsigned int x12 : 1; unsigned int x13 : 1; id x14; unsigned int x15 : 1; unsigned int x16 : 1; id x17; unsigned int x18 : 1; unsigned int x19 : 1; id x20; unsigned int x21 : 1; unsigned int x22 : 1; NSUInteger x23; id x24; unsigned int x25 : 1; unsigned int x26 : 1; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; NSUInteger x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; })_compoundPredicateStructFromPredicates:(id)arg1 retainedFields:(BOOL)arg2 normalized:(BOOL)arg3;
+ (struct _MLCompoundPredicateStruct { NSUInteger x1; id x2; unsigned int x3 : 1; unsigned int x4 : 1; id x5; unsigned int x6 : 1; unsigned int x7 : 1; id x8; unsigned int x9 : 1; unsigned int x10 : 1; id x11; unsigned int x12 : 1; unsigned int x13 : 1; id x14; unsigned int x15 : 1; unsigned int x16 : 1; id x17; unsigned int x18 : 1; unsigned int x19 : 1; id x20; unsigned int x21 : 1; unsigned int x22 : 1; NSUInteger x23; id x24; unsigned int x25 : 1; unsigned int x26 : 1; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; NSUInteger x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; })_normalizedCompoundPredicateStructFromPredicates:(id)arg1 retainedFields:(BOOL)arg2;
+ (struct _MLCompoundPredicateStruct { NSUInteger x1; id x2; unsigned int x3 : 1; unsigned int x4 : 1; id x5; unsigned int x6 : 1; unsigned int x7 : 1; id x8; unsigned int x9 : 1; unsigned int x10 : 1; id x11; unsigned int x12 : 1; unsigned int x13 : 1; id x14; unsigned int x15 : 1; unsigned int x16 : 1; id x17; unsigned int x18 : 1; unsigned int x19 : 1; id x20; unsigned int x21 : 1; unsigned int x22 : 1; NSUInteger x23; id x24; unsigned int x25 : 1; unsigned int x26 : 1; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; NSUInteger x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; })_normalizedCompoundPredicateStructFromQuery:(id)arg1 retainedFields:(BOOL)arg2;
+ (struct _MLCompoundPredicateStruct { NSUInteger x1; id x2; unsigned int x3 : 1; unsigned int x4 : 1; id x5; unsigned int x6 : 1; unsigned int x7 : 1; id x8; unsigned int x9 : 1; unsigned int x10 : 1; id x11; unsigned int x12 : 1; unsigned int x13 : 1; id x14; unsigned int x15 : 1; unsigned int x16 : 1; id x17; unsigned int x18 : 1; unsigned int x19 : 1; id x20; unsigned int x21 : 1; unsigned int x22 : 1; NSUInteger x23; id x24; unsigned int x25 : 1; unsigned int x26 : 1; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; NSUInteger x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; })_copyCompoundPredicateStructFromPredicates:(id)arg1;
+ (BOOL)predicateAllowsUnknownItems:(struct _MLCompoundPredicateStruct { NSUInteger x1; id x2; unsigned int x3 : 1; unsigned int x4 : 1; id x5; unsigned int x6 : 1; unsigned int x7 : 1; id x8; unsigned int x9 : 1; unsigned int x10 : 1; id x11; unsigned int x12 : 1; unsigned int x13 : 1; id x14; unsigned int x15 : 1; unsigned int x16 : 1; id x17; unsigned int x18 : 1; unsigned int x19 : 1; id x20; unsigned int x21 : 1; unsigned int x22 : 1; NSUInteger x23; id x24; unsigned int x25 : 1; unsigned int x26 : 1; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; NSUInteger x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; })arg1 forGroupingProperty:(unsigned long)arg2;

- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1;
- (struct _MLCompoundPredicateStruct { NSUInteger x1; id x2; unsigned int x3 : 1; unsigned int x4 : 1; id x5; unsigned int x6 : 1; unsigned int x7 : 1; id x8; unsigned int x9 : 1; unsigned int x10 : 1; id x11; unsigned int x12 : 1; unsigned int x13 : 1; id x14; unsigned int x15 : 1; unsigned int x16 : 1; id x17; unsigned int x18 : 1; unsigned int x19 : 1; id x20; unsigned int x21 : 1; unsigned int x22 : 1; NSUInteger x23; id x24; unsigned int x25 : 1; unsigned int x26 : 1; id x27; id x28; unsigned int x29 : 1; unsigned int x30 : 1; NSUInteger x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; }*)cpredStructPtr;
- (id)initFromQuery:(id)arg1;
- (id)stringValueForProperty:(unsigned long)arg1;
- (BOOL)isEqual:(id)arg1 compareUnshuffledEquivalence:(BOOL)arg2;
- (unsigned long long)_valueForProperty:(unsigned long)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

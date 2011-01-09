/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;



@interface PLPhoto : MLPhoto <PLConnectionObjectInteraction>
{
    NSUInteger _changeFlags;
    NSInteger _primaryKey;
    NSString *_title;
    short _width;
    short _height;
    BOOL _userRating;
    BOOL _flagged;
    BOOL _orientation;
    BOOL _type;
    NSInteger _thumbnailIndex;
    double _latitude;
    double _longitude;
    double _captureTime;
    NSString *_directory;
    NSString *_filename;
    double _duration;
    double _recordModDate;
    unsigned int _didSetDuration : 1;
}

+ (Class)classFromStepData:(struct sqlite3_stmt { }*)arg1;
+ (id)photoWithDefaultValues;
+ (id)photoWithValuesFromDictionary:(id)arg1;
+ (NSInteger)createTablesForConnection:(id)arg1;
+ (id)pathForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;

- (id)pathForPrebakedThumbnail;
- (id)directory;
- (id)imageSourceTypeHint;
- (id)pathForFullSizeImage;
- (id)pathForThumbnailFile;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForLowResolutionFile;
- (id)pathForVideoPreviewFile;
- (NSInteger)imageID;
- (void)setDurationInMilliseconds:(double)arg1;
- (double)durationInMilliseconds;
- (NSInteger)photoType;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (id)pathForImageFormat:(NSInteger)arg1;
- (double)captureTime;
- (void)setCaptureTime:(double)arg1;
- (BOOL)allowsRotation;
- (id)pathForOriginalFile;
- (BOOL)hasFullSizeImageData;
- (id)fullSizeImagePath;
- (id)fileExtensions;
- (id)pathForVideoFile;
- (id)fileExtension;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForTrimmedVideoFile;
- (id)initWithStepData:(struct sqlite3_stmt { }*)arg1;
- (NSInteger)saveAuxToConnection:(id)arg1 insert:(BOOL)arg2;
- (void)assignDatabaseValuesFromDictionary:(id)arg1;
- (void)_setPrimaryKey:(NSInteger)arg1;
- (NSUInteger)changeFlags;
- (void)clearChangeFlags;
- (BOOL)userRating;
- (void)setUserRating:(BOOL)arg1;
- (BOOL)flagged;
- (void)setFlagged:(BOOL)arg1;
- (NSInteger)thumbnailIndex;
- (void)setRecordModDate:(double)arg1;
- (void)setRecordModDate;
- (id)dataForFormat:(NSInteger)arg1 width:(NSInteger*)arg2 height:(NSInteger*)arg3 bytesPerRow:(NSInteger*)arg4 dataWidth:(NSInteger*)arg5 dataHeight:(NSInteger*)arg6 imageDataOffset:(NSInteger*)arg7;
- (id)_createImageForFormat:(NSInteger)arg1 outImageProperties:(const struct __CFDictionary {}**)arg2;
- (double)recordModDate;
- (id)databaseValuesAsDictionary;
- (id)pathToLargeThumbnail;
- (NSInteger)saveToConnection:(id)arg1;
- (id)pathForMetadataWithExtension:(id)arg1;
- (void)setDirectory:(id)arg1;
- (void)setFilename:(id)arg1;
- (id)pathForMetadataDirectory;
- (void)setThumbnailIndex:(NSInteger)arg1;
- (NSInteger)primaryKey;
- (short)height;
- (double)duration;
- (void)setWidth:(short)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (BOOL)isEditable;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (void)setDuration:(double)arg1;
- (short)width;
- (id)init;
- (NSInteger)orientation;
- (id)title;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)dealloc;
- (id)description;
- (void)setTitle:(id)arg1;
- (void)setHeight:(short)arg1;
- (double)latitude;
- (double)longitude;
- (id)filename;

@end

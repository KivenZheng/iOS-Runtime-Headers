/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMClientCapabilities : PBCodable 
{
    NSInteger _maxImageWidth;
    BOOL _hasMaxImageWidth;
    NSInteger _maxImageHeight;
    BOOL _hasMaxImageHeight;
    NSInteger _availableImageMemory;
    BOOL _hasAvailableImageMemory;
    NSMutableArray *_preferredImageFormats;
    BOOL _htmlBodyOnly;
    BOOL _hasHtmlBodyOnly;
    BOOL _embedImages;
    BOOL _hasEmbedImages;
}

@property(readonly) NSInteger preferredImageFormatsCount;
@property(readonly) BOOL hasEmbedImages;
@property BOOL embedImages;
@property(readonly) BOOL hasHtmlBodyOnly;
@property BOOL htmlBodyOnly;
@property(retain) NSMutableArray *preferredImageFormats;
@property(readonly) BOOL hasAvailableImageMemory;
@property NSInteger availableImageMemory;
@property(readonly) BOOL hasMaxImageHeight;
@property NSInteger maxImageHeight;
@property(readonly) BOOL hasMaxImageWidth;
@property NSInteger maxImageWidth;

+ (id)standardCapabilities;
+ (id)searchCapabilities;

- (void)writeTo:(id)arg1;
- (void)setMaxImageWidth:(NSInteger)arg1;
- (void)setMaxImageHeight:(NSInteger)arg1;
- (void)addPreferredImageFormat:(NSInteger)arg1;
- (void)setEmbedImages:(BOOL)arg1;
- (void)setHtmlBodyOnly:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (id)preferredImageFormats;
- (BOOL)hasHtmlBodyOnly;
- (BOOL)hasEmbedImages;
- (NSInteger)preferredImageFormatsCount;
- (void)setAvailableImageMemory:(NSInteger)arg1;
- (void)setPreferredImageFormat:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)preferredImageFormatAtIndex:(NSUInteger)arg1;
- (void)setPreferredImageFormats:(id)arg1;
- (BOOL)hasAvailableImageMemory;
- (BOOL)hasMaxImageHeight;
- (BOOL)hasMaxImageWidth;
- (BOOL)embedImages;
- (BOOL)htmlBodyOnly;
- (NSInteger)availableImageMemory;
- (NSInteger)maxImageHeight;
- (NSInteger)maxImageWidth;

@end

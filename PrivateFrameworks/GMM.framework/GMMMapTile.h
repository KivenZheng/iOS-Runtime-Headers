/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface GMMMapTile : PBCodable 
{
    NSInteger _tileType;
    NSInteger _tileIndexX;
    NSInteger _tileIndexY;
    NSInteger _zoomLevel;
    NSInteger _textSize;
    BOOL _hasTextSize;
}

@property(readonly) BOOL hasTextSize;
@property NSInteger textSize;
@property NSInteger zoomLevel;
@property NSInteger tileIndexY;
@property NSInteger tileIndexX;
@property NSInteger tileType;


- (void)writeTo:(id)arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (NSInteger)zoomLevel;
- (id)dictionaryRepresentation;
- (void)setTextSize:(NSInteger)arg1;
- (NSInteger)textSize;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasTextSize;
- (void)setTileIndexY:(NSInteger)arg1;
- (void)setTileIndexX:(NSInteger)arg1;
- (void)setTileType:(NSInteger)arg1;
- (NSInteger)tileIndexY;
- (NSInteger)tileIndexX;
- (NSInteger)tileType;

@end

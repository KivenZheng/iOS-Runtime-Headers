/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;



@interface GMMIncomingTile : PBCodable 
{
    NSInteger _zoom;
    NSInteger _numHorizontalTiles;
    NSInteger _numVerticalTiles;
    NSMutableArray *_tiles;
}

@property(readonly) NSInteger tilesCount;
@property(retain) NSMutableArray *tiles;
@property NSInteger numVerticalTiles;
@property NSInteger numHorizontalTiles;
@property NSInteger zoom;


- (void)writeTo:(id)arg1;
- (NSInteger)numHorizontalTiles;
- (NSInteger)numVerticalTiles;
- (NSInteger)tilesCount;
- (id)tiles;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (NSInteger)zoom;
- (void)setZoom:(NSInteger)arg1;
- (void)setTile:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)tileAtIndex:(NSUInteger)arg1;
- (void)addTile:(id)arg1;
- (void)setTiles:(id)arg1;
- (void)setNumVerticalTiles:(NSInteger)arg1;
- (void)setNumHorizontalTiles:(NSInteger)arg1;

@end

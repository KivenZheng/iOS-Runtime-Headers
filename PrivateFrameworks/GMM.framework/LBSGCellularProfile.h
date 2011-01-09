/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGCell, NSMutableArray;



@interface LBSGCellularProfile : PBCodable 
{
    LBSGCell *_primaryCell;
    long long _timestamp;
    NSMutableArray *_neighborss;
    NSMutableArray *_historicalCellss;
    NSInteger _prefetchMode;
    BOOL _hasPrefetchMode;
}

@property(readonly) NSInteger neighborssCount;
@property(readonly) NSInteger historicalCellssCount;
@property(readonly) BOOL hasPrefetchMode;
@property NSInteger prefetchMode;
@property(retain) NSMutableArray *historicalCellss;
@property(retain) NSMutableArray *neighborss;
@property long long timestamp;
@property(retain) LBSGCell *primaryCell;


- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setTimestamp:(long long)arg1;
- (id)init;
- (long long)timestamp;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (id)historicalCellss;
- (NSInteger)historicalCellssCount;
- (NSInteger)neighborssCount;
- (void)setNeighbors:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)neighborsAtIndex:(NSUInteger)arg1;
- (void)addNeighbors:(id)arg1;
- (void)setHistoricalCells:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)historicalCellsAtIndex:(NSUInteger)arg1;
- (void)addHistoricalCells:(id)arg1;
- (void)setPrefetchMode:(NSInteger)arg1;
- (BOOL)hasPrefetchMode;
- (void)setHistoricalCellss:(id)arg1;
- (id)neighborss;
- (void)setNeighborss:(id)arg1;
- (void)setPrimaryCell:(id)arg1;
- (NSInteger)prefetchMode;
- (id)primaryCell;

@end

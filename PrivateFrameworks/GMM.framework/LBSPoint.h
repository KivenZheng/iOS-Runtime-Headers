/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface LBSPoint : PBCodable 
{
    NSUInteger _lat_e7;
    NSUInteger _lng_e7;
}

@property NSUInteger lng_e7;
@property NSUInteger lat_e7;


- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)setLng_e7:(NSUInteger)arg1;
- (void)setLat_e7:(NSUInteger)arg1;
- (NSUInteger)lng_e7;
- (NSUInteger)lat_e7;

@end

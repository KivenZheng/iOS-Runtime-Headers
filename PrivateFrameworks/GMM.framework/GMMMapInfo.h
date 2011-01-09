/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMMapPoint;



@interface GMMMapInfo : PBCodable 
{
    GMMMapPoint *_center;
    NSInteger _latitudeSpan;
    NSInteger _longitudeSpan;
    NSInteger _zoomLevel;
    BOOL _hasZoomLevel;
}

@property(readonly) BOOL hasZoomLevel;
@property NSInteger zoomLevel;
@property NSInteger longitudeSpan;
@property NSInteger latitudeSpan;
@property(retain) GMMMapPoint *center;


- (BOOL)hasZoomLevel;
- (void)writeTo:(id)arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (void)setLatitudeSpan:(NSInteger)arg1;
- (void)setLongitudeSpan:(NSInteger)arg1;
- (NSInteger)latitudeSpan;
- (NSInteger)longitudeSpan;
- (NSInteger)zoomLevel;
- (void)setCenter:(id)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)center;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (id)initWithRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomLevel:(NSInteger)arg2;
- (BOOL)isEqual:(id)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLatLng;



@interface LBSGRectangle : PBCodable 
{
    LBSGLatLng *_lowerLeft;
    LBSGLatLng *_upperRight;
}

@property(retain) LBSGLatLng *upperRight;
@property(retain) LBSGLatLng *lowerLeft;


- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)setUpperRight:(id)arg1;
- (void)setLowerLeft:(id)arg1;
- (id)upperRight;
- (id)lowerLeft;

@end

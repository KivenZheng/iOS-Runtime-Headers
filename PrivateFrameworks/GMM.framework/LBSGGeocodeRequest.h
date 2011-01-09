/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGRectangle;



@interface LBSGGeocodeRequest : PBRequest 
{
    NSUInteger _numFeatureLimit;
    BOOL _hasNumFeatureLimit;
    BOOL _includeBoundingBoxes;
    BOOL _hasIncludeBoundingBoxes;
    LBSGRectangle *_boundingBox;
    NSInteger _addressLinesLimit;
    BOOL _hasAddressLinesLimit;
}

@property(readonly) BOOL hasBoundingBox;
@property(readonly) BOOL hasAddressLinesLimit;
@property NSInteger addressLinesLimit;
@property(retain) LBSGRectangle *boundingBox;
@property(readonly) BOOL hasIncludeBoundingBoxes;
@property BOOL includeBoundingBoxes;
@property(readonly) BOOL hasNumFeatureLimit;
@property NSUInteger numFeatureLimit;


- (void)writeTo:(id)arg1;
- (id)boundingBox;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (NSUInteger)requestTypeCode;
- (BOOL)hasIncludeBoundingBoxes;
- (void)setNumFeatureLimit:(NSUInteger)arg1;
- (void)setAddressLinesLimit:(NSInteger)arg1;
- (BOOL)hasNumFeatureLimit;
- (BOOL)hasBoundingBox;
- (void)setIncludeBoundingBoxes:(BOOL)arg1;
- (BOOL)hasAddressLinesLimit;
- (void)setBoundingBox:(id)arg1;
- (NSInteger)addressLinesLimit;
- (BOOL)includeBoundingBoxes;
- (NSUInteger)numFeatureLimit;
- (Class)responseClass;

@end

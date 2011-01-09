/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADOle, OADMovie, OADShapeGeometry;



@interface OADImage : OADGraphic 
{
    OADShapeGeometry *mGeometry;
    OADOle *mOle;
    OADMovie *mMovie;
}


- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id)init;
- (void)dealloc;
- (void)setOle:(id)arg1;
- (id)ole;
- (id)initWithBlipRef:(id)arg1;
- (id)movie;
- (void)setMovie:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)createImageFill;
- (void)createPictureFramePresetGeometry;
- (id)imageProperties;

@end

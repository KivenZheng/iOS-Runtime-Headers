/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationLayer, MKAccuracyLayer, MKUserLocationView, CALayer;



@interface MKUserLocationViewInternal : NSObject 
{
    id delegate;
    MKUserLocationView *view;
    MKUserLocationLayer *layer;
    CALayer *dotLayer;
    CALayer *bounceLayer;
    CALayer *userLayer;
    CALayer *headingLayer;
    CALayer *haloLayer;
    MKAccuracyLayer *accuracyLayer;
    NSUInteger mapType;
    NSInteger zoomDirection;
    float accuracy;
    double headingAccuracy;
    struct { 
        unsigned int animatedSublayers : 1; 
        unsigned int disableAccuracyDidUpdate : 1; 
        unsigned int enforceLowerBound : 1; 
        unsigned int shouldDisplayHalo : 1; 
        unsigned int shouldDisplayEffects : 1; 
        unsigned int shouldDisplayAccuracy : 1; 
        unsigned int shouldDisplayHeading : 1; 
        unsigned int stale : 1; 
        unsigned int delegateAccuracyDidUpdate : 1; 
        unsigned int delegateDidQuiesce : 1; 
        unsigned int delegateIsZooming : 1; 
        unsigned int willAnimateProperty : 1; 
    } flags;
}

@property(readonly) MKUserLocationPositionAnimation *positionAnimation;
@property(readonly) MKHoverAnimation *hoverAnimation;
@property CADoublePoint position;
@property BOOL animatedSublayers;
@property BOOL disableAccuracyDidUpdate;
@property(getter=isDisplayingAccuracy,readonly) BOOL displayingAccuracy;
@property(getter=isHovering,readonly) BOOL hovering;
@property(getter=isStale) BOOL stale;
@property(readonly) BOOL hasHalo;
@property(readonly) BOOL canHalo;
@property(readonly) BOOL canHaloExcludingAccuracy;
@property(readonly) BOOL canHaloExcludingEffects;
@property(readonly) BOOL needsHalo;
@property(readonly) BOOL hasQuiesced;
@property BOOL shouldDisplayHalo;
@property BOOL shouldDisplayEffects;
@property BOOL shouldDisplayAccuracy;
@property BOOL shouldDisplayHeading;
@property NSInteger zoomDirection;
@property NSUInteger mapType;
@property double headingAccuracy;
@property float accuracy;
@property id delegate;

+ (id)dotPressedImage;
+ (id)greyDotImage;
+ (id)greyDotPressedImage;
+ (id)headingAngleSmallImage;
+ (id)headingAngleMediumImage;
+ (id)headingAngleLargeImage;
+ (struct CGSize { float x1; float x2; })effectsSize;
+ (id)dotImage;
+ (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })effectiveFrameWithFrame:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (void)frameLayer:(id)arg1 initialAccuracy:(float*)arg2 restAccuracy:(float*)arg3;
+ (float)maxVisibleAccuracyDiameter;
+ (id)bounceImages;
+ (id)haloImages;
+ (float)accuracyDiameter:(float)arg1 level:(NSUInteger)arg2;
+ (void)initialize;

- (BOOL)shouldDisplayHeading;
- (BOOL)disableAccuracyDidUpdate;
- (void)removeSublayers;
- (BOOL)animatedSublayers;
- (void)setAnimatedSublayers:(BOOL)arg1;
- (void)setDisableAccuracyDidUpdate:(BOOL)arg1;
- (BOOL)isStale;
- (void)resetScale;
- (void)drawAccuracy:(float)arg1;
- (void)applyScale:(float)arg1 animated:(BOOL)arg2;
- (id)headingImageForAccuracy:(double)arg1 anchorPoint:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)userLocationViewAccuracyDidUpdate;
- (void)userLocationViewDidUpdate;
- (BOOL)isDotBouncing;
- (BOOL)isDotTeleporting;
- (BOOL)isAccuracyChanging;
- (BOOL)canHaloExcludingAccuracy;
- (BOOL)canHalo;
- (BOOL)canHaloExcludingEffects;
- (BOOL)hasHalo;
- (BOOL)needsHalo;
- (void)staleDidChange;
- (void)shouldDisplayAccuracyDidChange;
- (void)shouldDisplayHeadingDidChange;
- (void)pauseHalo;
- (void)resumeHalo;
- (void)pauseHover;
- (void)resumeHover;
- (void)updateHover;
- (void)shouldDisplayEffectsDidChange;
- (NSUInteger)indexForSubLayer:(id)arg1;
- (void)terminateHoverAccuracy:(float)arg1 duration:(double)arg2;
- (void)orderInDotLayer;
- (void)insertSublayer:(id)arg1;
- (void)insertSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)removeSublayer:(id)arg1 animated:(BOOL)arg2;
- (void)didBeginZoom;
- (void)userLocationAccuracyDidUpdate;
- (void)clampAccuracyValue:(float*)arg1;
- (void)resetAccuracy;
- (void)clearViewReferences;
- (void)setMapType:(NSUInteger)arg1;
- (BOOL)shouldDisplayHalo;
- (void)setShouldDisplayHalo:(BOOL)arg1;
- (BOOL)shouldDisplayEffects;
- (BOOL)shouldDisplayAccuracy;
- (void)setShouldDisplayHeading:(BOOL)arg1;
- (NSInteger)zoomDirection;
- (void)setZoomDirection:(NSInteger)arg1;
- (void)setZoomDirection:(NSInteger)arg1 deltaScale:(float)arg2;
- (void)orderInLayer:(id)arg1 beginTime:(double)arg2;
- (void)updateHalo;
- (BOOL)hasQuiesced;
- (id)dropUserLocationBreadCrumbAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)sizeAccuracyLayerToFit:(float)arg1 animated:(BOOL)arg2;
- (void)updateHeading;
- (void)setShouldDisplayAccuracy:(BOOL)arg1;
- (id)positionAnimation;
- (id)accuracyAnimation;
- (id)dotBounceAnimation;
- (id)hoverAnimation;
- (id)haloAnimation;
- (void)setHeadingAccuracy:(double)arg1;
- (float)accuracy;
- (void)setAccuracy:(float)arg1;
- (void)setStale:(BOOL)arg1;
- (BOOL)isHovering;
- (void)stopHover;
- (void)removeHover;
- (void)setShouldDisplayEffects:(BOOL)arg1;
- (NSUInteger)mapType;
- (double)headingAccuracy;
- (void)updateDot;
- (void)setContentsScale:(float)arg1;
- (void)didEndZoom;
- (id)initWithView:(id)arg1;
- (void)setPosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (BOOL)isZooming;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })position;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

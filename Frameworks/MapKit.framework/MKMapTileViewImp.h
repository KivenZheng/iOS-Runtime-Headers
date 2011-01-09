/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKMapTileViewDelegate>, MKMapTileView, MKTiledLayer, NSHashTable, NSTimer, MKTilePathArray;



@interface MKMapTileViewImp : NSObject 
{
    <MKMapTileViewDelegate> *delegate;
    NSUInteger mapType;
    MKMapTileView *view;
    MKTiledLayer *layer;
    NSHashTable *requesters;
    MKTilePathArray *requestTiles;
    NSUInteger loadingTileCount;
    NSTimer *tileRequestTimer;
    NSTimer *tileExpirationTimer;
    NSTimer *drawingExpirationTimer;
    double lastTileRequestTime;
    float screenScale;
    struct $_1128 { 
        unsigned int canDrawOnMainThread : 1; 
        unsigned int canDisplayTraffic : 1; 
        unsigned int displayingTraffic : 1; 
        unsigned int drawing : 1; 
        unsigned int levelCrossFade : 1; 
        unsigned int loadingEnabled : 1; 
        unsigned int shouldDisplayBaseTiles : 1; 
        unsigned int shouldDisplayTraffic : 1; 
        unsigned int shouldDisplayEffects : 1; 
        unsigned int delegateDidStartRendering : 1; 
        unsigned int delegateDidFinishRendering : 1; 
        unsigned int delegateDidStartLoading : 1; 
        unsigned int delegateDidFinishLoading : 1; 
        unsigned int delegateDidFailLoading : 1; 
        unsigned int delegateDidChangeZoomScale : 1; 
    } flags;
}


- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 levelOfDetail:(NSInteger)arg3;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;

@end

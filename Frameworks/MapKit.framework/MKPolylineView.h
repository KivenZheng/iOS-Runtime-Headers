/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */



@interface MKPolylineView : MKOverlayPathView 
{
}

@property(readonly) MKPolyline *polyline;


- (id)initWithPolyline:(id)arg1;
- (id)polyline;
- (BOOL)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;
- (void)dealloc;
- (void)createPath;

@end

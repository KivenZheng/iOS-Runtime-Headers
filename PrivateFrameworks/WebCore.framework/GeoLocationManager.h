/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CLLocationManager, GeoLocationManager;



@interface GeoLocationManager : NSObject <CLLocationManagerDelegate>
{
    double m_accuracy;

  /* Error parsing encoded ivar type info: ^{GeolocationServiceCoreLocation=^^?^{GeolocationServiceClient}{RetainPtr<GeoLocationManager>="m_ptr"@"GeoLocationManager"}{RefPtr<WebCore::Geoposition>="m_ptr"^{Geoposition}}{RefPtr<WebCore::PositionError>="m_ptr"^{PositionError}}B} */
    struct GeolocationServiceCoreLocation { int (**x1)(); struct GeolocationServiceClient {} *x2; struct RetainPtr<GeoLocationManager> { 
            GeoLocationManager *m_ptr; 
        } x3; struct RefPtr<WebCore::Geoposition> { 
            struct Geoposition {} *m_ptr; 
        } x4; struct RefPtr<WebCore::PositionError> { 
            struct PositionError {} *m_ptr; 
        } x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; } *m_callback;

    CLLocationManager *m_locationMgr;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*m_isSuspended;

}


- (void)start;
- (void)suspend;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)stop;
- (id)initWithAccuracy:(double)arg1 withCallback:(struct GeolocationServiceCoreLocation { int (**x1)(); struct GeolocationServiceClient {} *x2; struct RetainPtr<GeoLocationManager> { id x_3_1_1; } x3; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_4_1_1; } x4; struct RefPtr<WebCore::PositionError> { struct PositionError {} *x_5_1_1; } x5; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x6; }*)arg2;
     /* Encoded args for previous method: @20@0:4d8^{GeolocationServiceCoreLocation=^^?^{GeolocationServiceClient}{RetainPtr<GeoLocationManager>=@}{RefPtr<WebCore::Geoposition>=^{Geoposition}}{RefPtr<WebCore::PositionError>=^{PositionError}}B}16 */

- (void)resume;
- (void)createOnMainThread;
- (void)sendError:(id)arg1 withString:(id)arg2;
- (void)sendLocation:(id)arg1;

@end

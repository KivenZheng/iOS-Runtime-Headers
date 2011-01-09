/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class <CLLocationManagerDelegate>;



@interface CLLocationManagerInternal : NSObject 
{
    struct __CLClient { } *fClient;
    <CLLocationManagerDelegate> *fDelegate;
    double fDistanceFilter;
    double fDesiredAccuracy;
    BOOL fUpdatingLocation;
    struct { 
        NSInteger suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double course; 
        double timestamp; 
        NSInteger confidence; 
        double lifespan; 
        NSInteger type; 
    } fLocation;
    BOOL fCapabilitiesValid;
    struct { 
        double bestAccuracy; 
    } fCapabilities;
    BOOL fUpdatingHeading;
    struct { 
        double magneticHeading; 
        double trueHeading; 
        double accuracy; 
        NSInteger calibration; 
        double x; 
        double y; 
        double z; 
        double temperature; 
        double magnitude; 
        double inclination; 
        double timestamp; 
        double machtimestamp; 
    } fHeading;
    double fHeadingFilter;
    NSInteger fHeadingOrientation;
}


- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

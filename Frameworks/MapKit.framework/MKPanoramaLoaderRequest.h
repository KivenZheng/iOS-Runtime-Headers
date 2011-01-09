/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKPanorama, MKPanoramaLoader;



@interface MKPanoramaLoaderRequest : MKPanoramaRequest 
{
    MKPanorama *panorama;
    MKPanoramaLoader *loader;
    NSInteger type;
    BOOL prefetch;
    MKPanorama *relativePanorama;
    double relativeYaw;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } lock;
}

@property(getter=isNetworkBound) BOOL networkBound;
@property double relativeYaw;
@property(retain) MKPanorama *relativePanorama;
@property NSInteger type;
@property(getter=isPrefetch) BOOL prefetch;
@property(retain) MKPanorama *panorama;
@property MKPanoramaLoader *loader;

+ (NSInteger)requestTypeForSelector:(SEL)arg1 request:(BOOL*)arg2;
+ (id)createWithPanorama:(id)arg1 type:(NSInteger)arg2 invocation:(id)arg3;

- (BOOL)isNetworkBound;
- (void)setRelativeYaw:(double)arg1;
- (void)setPrefetch:(BOOL)arg1;
- (id)relativePanorama;
- (id)initWithPanorama:(id)arg1 type:(NSInteger)arg2;
- (id)initWithPanorama:(id)arg1 type:(NSInteger)arg2 tilePath:(NSInteger)arg3;
- (void)setLoader:(id)arg1;
- (id)loader;
- (BOOL)isPrefetch;
- (double)relativeYaw;
- (void)setRelativePanorama:(id)arg1;
- (void)setPanorama:(id)arg1;
- (id)panorama;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (NSUInteger)hash;
- (void)cancel;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;

@end

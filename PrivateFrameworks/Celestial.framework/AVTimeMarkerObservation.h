/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray;



@interface AVTimeMarkerObservation : NSObject 
{
    id _observer;
    NSArray *_times;
    id _context;
    NSInteger _currentIndex;
}


- (NSInteger)currentIndex;
- (id)context;
- (void)dealloc;
- (BOOL)gotoTime:(double)arg1;
- (double)nextInterestingTime;
- (id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(NSInteger)arg4;
- (double)prevInterestingTime;
- (id)observer;

@end

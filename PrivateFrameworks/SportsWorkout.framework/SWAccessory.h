/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSNumber, NSString, SWVicFileLogger;



@interface SWAccessory : NSObject 
{
    NSString *_transportType;
    NSString *_serialNumber;
    NSNumber *_checkpointRegistrationValue;
    NSString *_linkState;
    NSString *_searchState;
    SWVicFileLogger *_vicFileLogger;
}

@property(retain) SWVicFileLogger *vicFileLogger;
@property(readonly) NSString *searchState;
@property(readonly) NSString *linkState;
@property(readonly) NSNumber *checkpointRegistrationValue;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *transportType;


- (void)beginLinking;
- (void)unlink;
- (void)setVicFileLogger:(id)arg1;
- (id)transportType;
- (id)checkpointRegistrationValue;
- (id)searchState;
- (id)vicFileLogger;
- (void)cancelLinking;
- (id)serialNumber;
- (void)beginSearching;
- (void)cancelSearching;
- (id)linkState;
- (id)init;
- (void)dealloc;

@end

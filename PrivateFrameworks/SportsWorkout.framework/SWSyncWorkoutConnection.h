/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSInputStream, NSString, <SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate>;



@interface SWSyncWorkoutConnection : SWSyncServiceConnection 
{
    <SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate> *_delegate;
    NSString *_PIN;
    NSInputStream *_workoutXMLStream;
}

@property(readonly) NSInputStream *workoutXMLStream;
@property(readonly) NSString *PIN;
@property <SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate> *delegate;


- (id)PIN;
- (id)workoutXMLStream;
- (void)handleResponse:(id)arg1;
- (id)initWithPIN:(id)arg1 workoutXMLStream:(id)arg2 host:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

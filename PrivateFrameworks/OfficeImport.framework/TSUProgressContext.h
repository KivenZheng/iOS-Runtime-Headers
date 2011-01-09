/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUProgressStage, NSDate;



@interface TSUProgressContext : NSObject 
{
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
}

+ (void)setMessage:(id)arg1;
+ (void)reset;
+ (void)setProgress:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)_singletonAlloc;
+ (id)sharedContext;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (void)createStageWithSteps:(double)arg1;
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
+ (double)overallProgress;
+ (void)setPercentageProgressFromCPProgressContext:(double)arg1;
+ (double)currentPosition;
+ (void)advanceProgress:(double)arg1;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)endStage;

- (void)_reset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (id)autorelease;
- (id)currentStage;
- (void)reportProgress:(double)arg1;

@end

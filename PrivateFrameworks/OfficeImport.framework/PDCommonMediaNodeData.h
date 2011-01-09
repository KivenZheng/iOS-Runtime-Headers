/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimationTargetElement;



@interface PDCommonMediaNodeData : PDCommonTimeNodeData 
{
    PDAnimationTargetElement *mTarget;
    BOOL mIsMuted;
    BOOL mIsShowWhenStopped;
    long mNumberOfSlides;
    long mVolume;
}


- (id)target;
- (void)setTarget:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isShowWhenStopped;
- (void)setIsShowWhenStopped:(BOOL)arg1;
- (long)numberOfSlides;
- (void)setNumberOfSlides:(long)arg1;
- (long)volume;
- (void)setVolume:(long)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDate;



@interface GKSubmitScoreDataRequest : GKDataRequest 
{
    NSUInteger _score;
    NSDate *_date;
}

@property(retain) NSDate *date;
@property NSUInteger score;


- (id)key;
- (id)request;
- (void)setDate:(id)arg1;
- (void)dealloc;
- (id)date;
- (NSUInteger)score;
- (NSInteger)cacheType;
- (id)invalidateCacheKeys;
- (void)setScore:(NSUInteger)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSString, NSMutableArray;



@interface YTPersistentVideoList : NSObject 
{
    NSString *_categoryName;
    NSMutableArray *_videos;
}

+ (id)persistPathWithCategoryName:(id)arg1;

- (id)initWithCategoryName:(id)arg1;
- (void)persist;
- (id)videos;
- (void)addVideo:(id)arg1;
- (void)removeFromDisk;
- (void)dealloc;

@end

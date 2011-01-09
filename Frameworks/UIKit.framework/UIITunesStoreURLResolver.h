/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;



@interface UIITunesStoreURLResolver : NSObject 
{
    NSArray *_appStoreHostPatterns;
    NSArray *_appStorePathPatterns;
    NSArray *_bookStoreHostPatterns;
    NSArray *_bookStorePathPatterns;
    NSArray *_hostWhiteList;
    NSArray *_musicStoreHostPatterns;
    NSArray *_musicStorePathPatterns;
}

+ (id)sharedResolver;
+ (void)invalidate;

- (NSInteger)urlTypeForURL:(id)arg1;
- (id)_copyRegularExpressionsFromArray:(id)arg1;
- (BOOL)_string:(id)arg1 matchesPatterns:(id)arg2;
- (BOOL)_url:(id)arg1 matchesHostPatterns:(id)arg2 pathPatterns:(id)arg3;
- (id)init;
- (void)dealloc;

@end

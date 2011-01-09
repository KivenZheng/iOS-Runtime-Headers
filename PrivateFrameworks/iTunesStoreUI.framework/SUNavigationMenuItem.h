/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSURL, NSString, SUItemContentRating;



@interface SUNavigationMenuItem : NSObject <NSCopying>
{
    SUItemContentRating *_contentRating;
    NSString *_title;
    NSURL *_url;
}

@property(readonly) NSURL *URL;
@property(readonly) NSString *title;
@property(readonly) SUItemContentRating *contentRating;


- (id)contentRating;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)URL;
- (id)init;
- (id)title;
- (void)dealloc;

@end

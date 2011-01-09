/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSDictionary, NSArray;



@interface SUSectionsResponse : NSObject 
{
    BOOL _cacheable;
    NSInteger _responseType;
    NSArray *_sections;
    NSDictionary *_sectionsDictionary;
    BOOL _shouldResetUserOrdering;
}

@property(readonly) NSString *moreListTitle;
@property(readonly) NSString *versionString;
@property BOOL shouldResetUserOrdering;
@property(readonly) NSDictionary *sectionsDictionary;
@property(readonly) NSArray *sections;
@property(readonly) NSInteger responseType;
@property(getter=isCacheable) BOOL cacheable;


- (id)versionString;
- (id)_newSectionsFromDictionary:(id)arg1;
- (BOOL)isCacheable;
- (NSInteger)responseType;
- (void)setCacheable:(BOOL)arg1;
- (id)initWithSectionsDictionary:(id)arg1 responseType:(NSInteger)arg2;
- (void)setShouldResetUserOrdering:(BOOL)arg1;
- (BOOL)shouldResetUserOrdering;
- (id)sectionsDictionary;
- (id)moreListTitle;
- (id)init;
- (void)dealloc;
- (id)sections;

@end

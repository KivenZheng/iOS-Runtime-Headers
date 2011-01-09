/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;



@interface SUScriptABSearchViewController : SUScriptViewController 
{
    NSArray *_properties;
    NSInteger _scope;
}

@property(readonly) NSInteger numberOfResults;

+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)resetResults;
- (id)searchForText:(id)arg1;
- (void)cancelSearchWithTag:(id)arg1;
- (NSInteger)numberOfResults;
- (void)_cancelSearchWithTag:(id)arg1;
- (NSInteger)_numberOfResults;
- (id)_searchForText:(id)arg1;
- (void)_resetResults;
- (id)_contactsSearchViewController;
- (id)initWithOptions:(id)arg1;
- (id)newNativeViewController;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setNativeViewController:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)attributeKeys;

@end

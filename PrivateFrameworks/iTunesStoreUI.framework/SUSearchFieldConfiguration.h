/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;



@interface SUSearchFieldConfiguration : NSObject <NSCopying>
{
    NSString *_cancelString;
    struct __CFDictionary { } *_hintURLs;
    NSInteger _location;
    NSString *_placeholder;
    BOOL _rootViewOnly;
    struct __CFDictionary { } *_searchURLs;
    NSString *_userDefaultsKey;
    float _width;
}

@property(readonly) float width;
@property(readonly) NSString *userDefaultsKey;
@property(getter=isRootViewOnly,readonly) BOOL rootViewOnly;
@property(readonly) NSString *placeholderString;
@property(readonly) NSInteger location;
@property(readonly) NSString *cancelString;

+ (id)defaultConfiguration;

- (NSInteger)_locationForString:(id)arg1;
- (id)cancelString;
- (id)searchURLRequestForNetworkType:(NSInteger)arg1;
- (id)URLRequestWithBaseURL:(id)arg1 forNetworkType:(NSInteger)arg2;
- (id)_initWithoutDictionary;
- (id)_newQueryStringDictionaryForNetworkType:(NSInteger)arg1;
- (struct __CFDictionary { }*)_newURLsDictionaryWithDictionary:(id)arg1;
- (void)_setHintURLsFromDictionary:(id)arg1;
- (void)_setSearchURLsFromDictionary:(id)arg1;
- (id)_urlRequestForURLBagKey:(id)arg1 networkType:(NSInteger)arg2;
- (id)userDefaultsKey;
- (id)placeholderString;
- (id)hintsURLRequestForNetworkType:(NSInteger)arg1;
- (BOOL)isRootViewOnly;
- (void)loadFromDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)width;
- (id)init;
- (void)dealloc;
- (NSInteger)location;

@end

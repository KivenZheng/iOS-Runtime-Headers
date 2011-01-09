/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebBackForwardListPrivate;



@interface WebBackForwardList : NSObject 
{
    WebBackForwardListPrivate *_private;
}

+ (void)initialize;

- (id)itemAtIndex:(NSInteger)arg1;
- (id)dictionaryRepresentation;
- (void)goBack;
- (void)goForward;
- (id)currentItem;
- (void)finalize;
- (id)init;
- (id)backItem;
- (void)dealloc;
- (id)description;
- (NSInteger)backListCount;
- (void)_close;
- (void)addItem:(id)arg1;
- (void)setToMatchDictionaryRepresentation:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (void)goToItem:(id)arg1;
- (id)forwardItem;
- (id)backListWithLimit:(NSInteger)arg1;
- (id)forwardListWithLimit:(NSInteger)arg1;
- (NSInteger)capacity;
- (void)setCapacity:(NSInteger)arg1;
- (void)setPageCacheSize:(NSUInteger)arg1;
- (NSUInteger)pageCacheSize;
- (NSInteger)forwardListCount;
- (id)initWithBackForwardList:(struct PassRefPtr<WebCore::BackForwardList> { struct BackForwardList {} *x1; })arg1;
- (void)removeItem:(id)arg1;

@end

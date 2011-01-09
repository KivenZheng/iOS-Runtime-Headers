/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */



@interface SPDomainManager : NSObject 
{
    struct dispatch_queue_s { } *_indexerQueue;
}

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)_removeAllDomainsForDisplayIdentifier:(id)arg1;
- (void)applicationWasInstalledOrUpdated:(id)arg1 withCategories:(id)arg2;
- (void)applicationWasUninstalled:(id)arg1;
- (void)runIndexers;

@end

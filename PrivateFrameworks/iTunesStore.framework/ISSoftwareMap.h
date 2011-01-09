/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableArray;



@interface ISSoftwareMap : NSObject 
{
    NSMutableArray *_applications;
}

@property(readonly) NSArray *applications;

+ (void)invalidateCurrentMap;
+ (void)startObservingNotifications;
+ (id)loadedMap;
+ (id)currentMap;
+ (BOOL)haveApplicationsOfType:(struct __CFString { }*)arg1;
+ (void)_startWatchingInstallationNotifications;
+ (BOOL)currentMapIsValid;
+ (void)setCurrentMap:(id)arg1;
+ (id)applicationForBundleIdentifier:(id)arg1;

- (id)applicationForItemIdentifier:(id)arg1;
- (id)applications;
- (void)_loadFromMobileInstallation;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)init;
- (void)dealloc;

@end

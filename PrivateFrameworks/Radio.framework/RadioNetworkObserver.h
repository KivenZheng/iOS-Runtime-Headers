/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSObject<OS_dispatch_queue>;

@interface RadioNetworkObserver : NSObject {
    int _networkUsageCount;
    NSObject<OS_dispatch_queue> *_networkUsageQueue;
}

@property(readonly) BOOL isCellularNetworkingAllowed;
@property(readonly) BOOL isUsingNetwork;

+ (id)sharedNetworkObserver;

- (void).cxx_destruct;
- (void)_cellularNetworkAllowedDidChangeNotification:(id)arg1;
- (id)_init;
- (void)beginUsingNetwork;
- (void)dealloc;
- (void)endUsingNetwork;
- (id)init;
- (BOOL)isCellularNetworkingAllowed;
- (BOOL)isUsingNetwork;

@end
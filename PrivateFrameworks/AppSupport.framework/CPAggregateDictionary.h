/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class CPDistributedMessagingCenter;



@interface CPAggregateDictionary : NSObject 
{
    CPDistributedMessagingCenter *_center;
}

@property(getter=isEnabled,readonly) BOOL enabled;

+ (id)sharedAggregateDictionary;

- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)commit;
- (BOOL)isEnabled;
- (id)init;
- (void)dealloc;
- (void)sendMessageName:(id)arg1 key:(id)arg2 arguments:(id)arg3;
- (void)sendMessageName:(id)arg1 key:(id)arg2 argument:(id)arg3;
- (void)sendMessageName:(id)arg1 key:(id)arg2;
- (void)clearScalarKey:(id)arg1;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (void)decrementKey:(id)arg1;
- (void)subtractValue:(long long)arg1 forKey:(id)arg2;
- (void)clearDistributionKey:(id)arg1;
- (void)setValue:(double)arg1 forDistributionKey:(id)arg2;
- (void)significantTimeChanged;
- (void)pushValue:(double)arg1 forKey:(id)arg2;
- (void)incrementKey:(id)arg1;

@end

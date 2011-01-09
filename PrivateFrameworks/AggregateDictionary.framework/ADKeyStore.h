/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@class NSMutableSet;



@interface ADKeyStore : NSObject 
{
    NSMutableSet *_whitelistedScalarKeys;
    NSMutableSet *_whitelistedScalarPrefixes;
    NSMutableSet *_whitelistedDistributionKeys;
    NSMutableSet *_whitelistedDistributionPrefixes;
}


- (void)dealloc;
- (id)initWithPath:(id)arg1 acceptedClasses:(id)arg2;
- (BOOL)scalarKeyIsWhitelisted:(id)arg1;
- (id)initWithDefaultPathAndAcceptedClasses:(id)arg1;
- (BOOL)distributionKeyIsWhitelisted:(id)arg1;

@end

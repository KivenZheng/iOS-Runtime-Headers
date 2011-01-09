/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;



@interface MCRemovalPasswordPayload : MCPayload 
{
    NSString *_removalPasscode;
}

@property(retain) NSString *removalPasscode;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;

- (void)dealloc;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)removalPasscode;
- (void)setRemovalPasscode:(id)arg1;

@end

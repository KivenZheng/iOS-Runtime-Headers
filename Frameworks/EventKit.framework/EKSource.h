/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKEventStore, NSString;



@interface EKSource : NSObject 
{
    EKEventStore *_store;
    NSString *_sourceId;
    void *_object;
    NSInteger _type;
    NSString *_title;
    NSString *_externalId;
    NSUInteger _loadFlags;
}

@property(readonly) NSInteger type;
@property(copy,readonly) NSString *title;
@property(copy,readonly) NSString *externalId;
@property(copy,readonly) NSString *sourceIdentifier;


- (NSInteger)type;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)description;
- (void)refresh;
- (void)_setStoreInternal:(id)arg1;
- (void)_storeClosed;
- (void)reconnectToServer;
- (id)initWithStore:(id)arg1 object:(void*)arg2 sourceIdentifier:(id)arg3;
- (id)sourceIdentifier;
- (id)externalId;

@end

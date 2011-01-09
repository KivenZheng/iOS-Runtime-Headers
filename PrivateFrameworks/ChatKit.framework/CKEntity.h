/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKService;



@interface CKEntity : NSObject 
{
    NSInteger _addressBookUID;
    NSInteger _identifier;
    NSInteger _propertyType;
    BOOL _foundABNameForSender;
    BOOL _senderIsVoicemail;
    void *_abRecord;
    CKService *_service;
}

@property(readonly) NSString *name;
@property(readonly) NSString *rawAddress;
@property(readonly) BOOL senderIsVoicemail;
@property(readonly) BOOL foundABNameForSender;
@property NSInteger propertyType;
@property(readonly) void *abRecord;
@property NSInteger identifier;
@property NSInteger addressBookUID;
@property(readonly) CKService *service;


- (void)resetCaches;
- (void)setIdentifier:(NSInteger)arg1;
- (NSInteger)identifier;
- (id)name;
- (void)dealloc;
- (id)_initWithService:(id)arg1;
- (NSInteger)addressBookUID;
- (id)rawAddress;
- (BOOL)senderIsVoicemail;
- (BOOL)foundABNameForSender;
- (void)setPropertyType:(NSInteger)arg1;
- (id)service;
- (void*)abRecord;
- (void)setAddressBookUID:(NSInteger)arg1;
- (NSInteger)propertyType;

@end

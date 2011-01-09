/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class <EAAccessoryDelegate>, NSArray, NSString, NSDictionary;



@interface EAAccessoryInternal : NSObject 
{
    BOOL _connected;
    NSUInteger _connectionID;
    NSString *_name;
    NSString *_manufacturer;
    NSString *_modelNumber;
    NSString *_serialNumber;
    NSString *_firmwareRevision;
    NSString *_hardwareRevision;
    NSString *_preferredApp;
    NSInteger _classType;
    NSDictionary *_audioPorts;
    BOOL _supportsPublicIap;
    BOOL _supportsAccessibility;
    NSArray *_eqNames;
    NSUInteger _eqItems;
    BOOL _supportsIPodOut;
    NSInteger _iPodOutOptionsMask;
    struct __CFAccessory { } *_cfAccessory;
    int (*_cfAccessoryPortPropertyCallback)();
    void *_cfAccessoryPortPropertyContext;
    NSDictionary *_protocols;
    NSDictionary *_legacyLingoProperties;
    <EAAccessoryDelegate> *_delegate;
    NSUInteger _eqIndex;
}

@property <EAAccessoryDelegate> *delegate;
@property NSDictionary *legacyLingoProperties;
@property NSDictionary *protocols;
@property void *cfAccessoryPortPropertyContext;
@property unknown type *cfAccessoryPortPropertyCallback;
@property __CFAccessory *cfAccessory;
@property NSInteger iPodOutOptionsMask;
@property BOOL supportsIPodOut;
@property NSUInteger eqIndex;
@property(retain) NSArray *eqNames;
@property BOOL supportsAccessibility;
@property BOOL supportsPublicIap;
@property NSDictionary *audioPorts;
@property NSInteger classType;
@property(copy) NSString *preferredApp;
@property(copy) NSString *hardwareRevision;
@property(copy) NSString *firmwareRevision;
@property(copy) NSString *serialNumber;
@property(copy) NSString *modelNumber;
@property(copy) NSString *name;
@property(copy) NSString *manufacturer;
@property NSUInteger connectionID;
@property BOOL connected;


- (id)serialNumber;
- (void)setName:(id)arg1;
- (id)init;
- (id)name;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)connected;
- (void)setConnected:(BOOL)arg1;
- (id)manufacturer;
- (void)setManufacturer:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setCfAccessory:(struct __CFAccessory { }*)arg1;
- (void)setCfAccessoryPortPropertyCallback:(int (*)())arg1;
- (id)modelNumber;
- (NSInteger)classType;
- (BOOL)supportsPublicIap;
- (NSInteger)iPodOutOptionsMask;
- (id)protocols;
- (id)legacyLingoProperties;
- (void)setLegacyLingoProperties:(id)arg1;
- (void*)cfAccessoryPortPropertyContext;
- (void)setCfAccessoryPortPropertyContext:(void*)arg1;
- (int (*)())cfAccessoryPortPropertyCallback;
- (struct __CFAccessory { }*)cfAccessory;
- (void)setIPodOutOptionsMask:(NSInteger)arg1;
- (BOOL)supportsIPodOut;
- (void)setSupportsIPodOut:(BOOL)arg1;
- (NSUInteger)eqIndex;
- (void)setEqIndex:(NSUInteger)arg1;
- (id)eqNames;
- (void)setEqNames:(id)arg1;
- (BOOL)supportsAccessibility;
- (void)setSupportsAccessibility:(BOOL)arg1;
- (void)setSupportsPublicIap:(BOOL)arg1;
- (id)audioPorts;
- (id)preferredApp;
- (id)hardwareRevision;
- (id)firmwareRevision;
- (NSUInteger)connectionID;
- (void)setModelNumber:(id)arg1;
- (void)setFirmwareRevision:(id)arg1;
- (void)setHardwareRevision:(id)arg1;
- (void)setConnectionID:(NSUInteger)arg1;
- (void)setProtocols:(id)arg1;
- (void)setPreferredApp:(id)arg1;
- (void)setClassType:(NSInteger)arg1;
- (void)setAudioPorts:(id)arg1;

@end

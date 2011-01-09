/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;



@interface UIStatusBarServerThread : NSThread 
{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    struct { 
        BOOL itemIsEnabled[20]; 
        BOOL timeString[64]; 
        NSInteger gsmSignalStrengthRaw; 
        NSInteger gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceImageBlack[100]; 
        BOOL serviceImageSilver[100]; 
        BOOL operatorDirectory[1024]; 
        NSUInteger serviceContentType; 
        NSInteger wifiSignalStrengthRaw; 
        NSInteger wifiSignalStrengthBars; 
        NSUInteger dataNetworkType; 
        NSInteger batteryCapacity; 
        NSUInteger batteryState; 
        NSInteger bluetoothBatteryCapacity; 
        NSInteger thermalColor; 
        unsigned int slowActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
    } _statusBarData;
    struct { 
        BOOL itemIsEnabled[20]; 
        BOOL timeString[64]; 
        NSInteger gsmSignalStrengthRaw; 
        NSInteger gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceImageBlack[100]; 
        BOOL serviceImageSilver[100]; 
        BOOL operatorDirectory[1024]; 
        NSUInteger serviceContentType; 
        NSInteger wifiSignalStrengthRaw; 
        NSInteger wifiSignalStrengthBars; 
        NSUInteger dataNetworkType; 
        NSInteger batteryCapacity; 
        NSUInteger batteryState; 
        NSInteger bluetoothBatteryCapacity; 
        NSInteger thermalColor; 
        unsigned int slowActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
    } _composedStatusBarData;
    struct __CFDictionary { } *_doubleHeightStatusStrings;
    struct __CFDictionary { } *_glowAnimationStates;
    BOOL _composedStatusBarDataValid;
}


- (void)main;
- (void)_addClient:(NSUInteger)arg1;
- (void)_removeClient:(struct __CFMachPort { }*)arg1;
- (id)_publisherForPort:(NSUInteger)arg1;
- (void)_removePublisher:(struct __CFMachPort { }*)arg1;
- (void)_broadcastStatusBarDataWithActions:(NSInteger)arg1;
- (void)_postStatusBarData:(struct { BOOL x1[20]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; NSInteger x15; NSInteger x16; unsigned int x17 : 1; BOOL x18[256]; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 actions:(NSInteger)arg2;
- (void)_broadcastStyleOverrides;
- (void)_addStyleOverrides:(NSInteger)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(NSInteger)arg1 forPublisher:(id)arg2;
- (BOOL)_glowAnimationStateForStyle:(NSInteger)arg1;
- (void)_postGlowAnimationState:(BOOL)arg1 forStyle:(NSInteger)arg2;
- (id)_doubleHeightStatusStringForStyle:(NSInteger)arg1;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(NSInteger)arg2;
- (void)_addStatusBarItem:(NSInteger)arg1 forPublisher:(id)arg2;
- (void)_removeStatusBarItem:(NSInteger)arg1 forPublisher:(id)arg2;
- (struct { BOOL x1[20]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; NSInteger x15; NSInteger x16; unsigned int x17 : 1; BOOL x18[256]; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)_statusBarData;
- (NSInteger)_styleOverrides;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;



@interface IMLockdownManager : NSObject 
{
    NSInteger _state;
    BOOL _settingUpActivationState;
    BOOL _isBricked;
    BOOL _isInternalInstall;
    BOOL _hasShownWaitingAlertThisSession;
    BOOL _hasShownMismatchedSIM;
    NSString *_unqiueDeviceIdentifier;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (BOOL)_hasEverRegistered;
- (void)_setHasEverRegistered:(BOOL)arg1;
- (BOOL)_isRegisteredToNetwork;
- (void)_activationFailed;
- (void)_resetActivationState;
- (void)_setupActivationState;
- (BOOL)brickedDevice;
- (BOOL)isInternalInstall;
- (NSInteger)lockdownState;
- (id)uniqueDeviceIdentifier;
- (id)valueForDomain:(id)arg1 key:(id)arg2;

@end

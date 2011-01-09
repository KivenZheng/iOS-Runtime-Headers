/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSData, NSDate, NSURL;



@interface IMFileTransfer : NSObject <IMSecureObject>
{
    NSString *_guid;
    NSDate *_createdDate;
    NSDate *_startDate;
    NSString *_filename;
    NSURL *_localURL;
    NSData *_localBookmark;
    NSUInteger _hfsType;
    NSUInteger _hfsCreator;
    unsigned short _hfsFlags;
    NSString *_otherPerson;
    NSString *_accountID;
    NSInteger _transferState;
    BOOL _isIncoming;
    unsigned long long _currentBytes;
    unsigned long long _totalBytes;
    unsigned long long _averageTransferRate;
    BOOL _isDirectory;
    BOOL _shouldAttemptToResume;
    BOOL _wasSaved;
    BOOL _wasRegisteredAsStandalone;
    NSInteger _error;
    NSInteger _securityLevel;
    double _lastUpdatedInterval;
    double _lastAveragedInterval;
    unsigned long long _lastAveragedBytes;
}

+ (BOOL)_doesLocalURLRequireArchiving:(id)arg1;
+ (id)_invalidCharactersForFileTransferName;

- (id)startDate;
- (id)accountID;
- (unsigned long long)totalBytes;
- (NSInteger)transferState;
- (id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned long)arg8 hfsCreator:(unsigned long)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(BOOL)arg11 securityLevel:(NSInteger)arg12;
- (void)_setAccount:(id)arg1 otherPerson:(id)arg2;
- (void)_setSecurityLevel:(NSInteger)arg1;
- (id)_dictionaryRepresentation;
- (void)_setTransferState:(NSInteger)arg1;
- (void)_setLocalURL:(id)arg1;
- (BOOL)isIncoming;
- (id)otherPerson;
- (void)setRegisteredAsStandalone:(BOOL)arg1;
- (void)_updateWithDictionaryRepresentation:(id)arg1;
- (BOOL)wasRegisteredAsStandalone;
- (void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2;
- (void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3;
- (void)dealloc;
- (id)displayName;
- (void)_clear;
- (void)_setError:(NSInteger)arg1;
- (BOOL)isDirectory;
- (void)setSecurityLevel:(NSInteger)arg1;
- (NSInteger)securityLevel;
- (id)guid;
- (id)filename;
- (NSInteger)error;
- (void)_setStartDate:(id)arg1;
- (void)_setDirectory:(BOOL)arg1 hfsType:(unsigned long)arg2 hfsCreator:(unsigned long)arg3 hfsFlags:(unsigned short)arg4;
- (void)_setLastUpdatedInterval:(double)arg1;
- (BOOL)canBeAccepted;
- (BOOL)existsAtLocalPath;
- (id)localPath;
- (id)localURL;
- (id)localURLWithoutBookmarkResolution;
- (id)localBookmark;
- (void)_setLocalPath:(id)arg1;
- (id)createdDate;
- (unsigned long)hfsType;
- (unsigned long)hfsCreator;
- (unsigned short)hfsFlags;
- (unsigned long long)currentBytes;
- (unsigned long long)averageTransferRate;
- (BOOL)shouldAttemptToResume;
- (unsigned long long)_lastAveragedBytes;
- (double)_lastAveragedInterval;
- (double)_lastUpdatedInterval;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <MFSASLSecurityLayer>, NSData, NSMutableString, _MFSocket;



@interface Connection : NSObject 
{
    <MFSASLSecurityLayer> *_securityLayer;
    _MFSocket *_socket;
    char *_buffer;
    NSInteger _bufferRemainingBytes;
    NSUInteger _bufferStart;
    NSUInteger _bufferLength;
    NSUInteger _desiredBufferLength;
    struct z_stream_s { char *x1; NSUInteger x2; NSUInteger x3; char *x4; NSUInteger x5; NSUInteger x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; NSInteger x12; NSUInteger x13; NSUInteger x14; } *_deflater;
    struct z_stream_s { char *x1; NSUInteger x2; NSUInteger x3; char *x4; NSUInteger x5; NSUInteger x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; NSInteger x12; NSUInteger x13; NSUInteger x14; } *_inflater;
    char *_zbuffer;
    NSData *_logData;
    NSUInteger _dontLogReads;
    NSUInteger _readBytesNotLogged;
    NSMutableString *_readBytesToLog;
    unsigned int _isFetching : 1;
    unsigned int _allowFallbacks : 1;
    unsigned int _compressionEnabled : 1;
}

+ (void)initialize;
+ (void)readLoggingDefaults;
+ (void)logBytes:(const char *)arg1 length:(NSInteger)arg2;
+ (void)flushLog;
+ (id)logClasses;
+ (void)setLogClasses:(id)arg1;
+ (BOOL)logAllSocketActivity;
+ (void)setLogAllSocketActivity:(BOOL)arg1;
+ (id)logActivityOnPorts;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (id)logActivityOnHosts;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (BOOL)shouldTryFallbacksAfterError:(id)arg1;

- (BOOL)hasBytesAvailable;
- (id)capabilities;
- (BOOL)isValid;
- (void)dealloc;
- (BOOL)isForcedConnection;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)connectUsingSettings:(id)arg1;
- (BOOL)connectUsingAccount:(id)arg1;
- (void)setDesiredReadBufferLength:(NSUInteger)arg1;
- (void)enableReadLogging:(BOOL)arg1;
- (void)logReadChars:(const char *)arg1 length:(NSUInteger)arg2;
- (BOOL)readLineIntoData:(id)arg1;
- (BOOL)readBytesIntoData:(id)arg1 desiredLength:(NSUInteger)arg2;
- (BOOL)startTLSForAccount:(id)arg1;
- (BOOL)startCompression;
- (id)_newSocket;
- (id)_socket;
- (double)lastUsedTime;
- (void)setAllowsFallbacks:(BOOL)arg1;
- (BOOL)loginDisabled;
- (id)authenticationMechanisms;
- (BOOL)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (BOOL)connectUsingFallbacksForAccount:(id)arg1;
- (BOOL)authenticateUsingAccount:(id)arg1;
- (BOOL)writeData:(id)arg1;
- (void)disconnect;

@end

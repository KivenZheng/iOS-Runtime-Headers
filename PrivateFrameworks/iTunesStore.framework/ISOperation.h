/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSError, NSArray, ISOperation, NSLock, NSRunLoop, SSOperationProgress, NSString, <ISOperationDelegate>;



@interface ISOperation : NSOperation 
{
    <ISOperationDelegate> *_delegate;
    NSError *_error;
    NSLock *_lock;
    NSRunLoop *_operationRunLoop;
    ISOperation *_parentOperation;
    SSOperationProgress *_progress;
    BOOL _shouldMessageMainThread;
    NSString *_powerAssertionIdentifier;
    ISOperation *_subOperation;
    NSArray *_serializationLockIdentifiers;
    BOOL _success;
    NSInteger _threadPriority;
    id _threadSafeDelegate;
}

@property <ISOperationDelegate> *delegate;
@property BOOL shouldMessageMainThread;
@property(readonly) NSString *uniqueKey;
@property(readonly) NSInteger progressWeight;
@property(readonly) SSOperationProgress *progress;
@property(readonly) id threadSafeDelegate;
@property(copy) NSArray *serializationLockIdentifiers;
@property NSInteger threadPriority;
@property BOOL success;
@property(retain) ISOperation *subOperation;
@property(retain) NSString *powerAssertionIdentifier;
@property(retain) ISOperation *parentOperation;
@property(retain) NSRunLoop *operationRunLoop;
@property(retain) NSError *error;


- (NSInteger)threadPriority;
- (void)setThreadPriority:(NSInteger)arg1;
- (BOOL)runSubOperation:(id)arg1 returningError:(id*)arg2;
- (void)setSuccess:(BOOL)arg1;
- (id)authenticatedAccountDSID;
- (BOOL)success;
- (void)_sendSuccessToDelegate;
- (void)setError:(id)arg1;
- (BOOL)loadURLBagWithContext:(id)arg1 returningError:(id*)arg2;
- (void)setShouldMessageMainThread:(BOOL)arg1;
- (id)threadSafeDelegate;
- (BOOL)loadSoftwareMapReturningError:(id*)arg1;
- (BOOL)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3;
- (id)copySerializationLocks;
- (void)sendProgressToDelegate;
- (id)operationRunLoop;
- (id)serializationLockIdentifiers;
- (id)uniqueKey;
- (NSInteger)progressWeight;
- (long)runRunLoopUntilStopped;
- (void)stopRunLoop;
- (BOOL)shouldMessageMainThread;
- (id)copyActivePowerAssertionIdentifiers;
- (void)run:(BOOL)arg1;
- (void)setSerializationLockIdentifiers:(id)arg1;
- (void)_dispatchCompletionBlock;
- (void)_failAfterException;
- (void)_main:(BOOL)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (BOOL)_setThreadPriority:(NSInteger)arg1 returningPreviousValue:(NSInteger*)arg2;
- (id)subOperation;
- (void)setSubOperation:(id)arg1;
- (id)powerAssertionIdentifier;
- (void)setPowerAssertionIdentifier:(id)arg1;
- (id)parentOperation;
- (void)setParentOperation:(id)arg1;
- (void)setOperationRunLoop:(id)arg1;
- (void)main;
- (id)progress;
- (void)lock;
- (void)unlock;
- (void)run;
- (void)cancel;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)error;
- (void)sendCompletionCallback:(id)arg1;
- (void)setScriptOptions:(id)arg1;

@end

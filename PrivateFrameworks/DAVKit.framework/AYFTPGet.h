/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSURL, NSString, NSMutableData;



@interface AYFTPGet : AYOperation 
{
    NSURL *_url;
    struct __CFReadStream { } *_readStream;
    struct { 
        NSInteger version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
    NSString *_username;
    NSString *_password;
    long long _ressourceSize;
    long long _readSize;
    NSMutableData *_readData;
}

+ (id)getRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3;

- (void)finalize;
- (id)data;
- (void)dealloc;
- (id)initGetRequestWithURL:(id)arg1 username:(id)arg2 password:(id)arg3;
- (BOOL)isRunLoopBased;
- (void)_readStreamEvent:(unsigned long)arg1;
- (void)resetOperation;
- (void)endOperationWithError:(id)arg1;
- (long long)operationTotal;
- (void)dispatch;
- (long long)operationProgress;

@end

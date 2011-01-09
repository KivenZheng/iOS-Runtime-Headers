/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSError, NSHTTPURLResponse, CoreDAVXMLParser, NSURLRequest, CoreDAVItem, CoreDAVRequestLogger, NSURLConnection, NSString, <CoreDAVTaskManager>, NSDate, <CoreDAVAccountInfoProvider>;



@interface CoreDAVTask : NSObject 
{
    id _delegate;
    <CoreDAVTaskManager> *_taskManager;
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    NSInteger _numDownloadedElements;
    NSHTTPURLResponse *_response;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    NSInteger _depth;
    NSDate *_dateConnectionWentOut;
    BOOL _didSendRequest;
    BOOL _didFailWithError;
    BOOL _didCancel;
    BOOL _didReceiveResponse;
    BOOL _didReceiveData;
    BOOL _didFinishLoading;
    BOOL _finished;
    void *_context;
    BOOL _receivedBadPasswordResponse;
    NSError *_passwordNotificationError;
    CoreDAVXMLParser *_parser;
    CoreDAVItem *_currentlyParsingItem;
    CoreDAVRequestLogger *_logger;
    NSString *_relativeURI;
}

@property(readonly) NSDictionary *responseHeaders;
@property NSInteger depth;
@property(readonly) NSString *relativeURI;
@property(retain) CoreDAVItem *currentlyParsingItem;
@property void *context;
@property id delegate;
@property <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property <CoreDAVTaskManager> *taskManager;

+ (NSUInteger)uniqueQueryID;

- (void)performCoreDAVTask;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)setAccountInfoProvider:(id)arg1;
- (id)accountInfoProvider;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (id)initWithRelativeURI:(id)arg1;
- (id)relativeURI;
- (BOOL)_includeGeneralHeaders;
- (id)additionalHeaderValues;
- (void)setDepth:(NSInteger)arg1;
- (void)setContext:(void*)arg1;
- (void)reset;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void*)context;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)url;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (void)startModal;
- (void)tearDownResources;
- (id)_createBodyData;
- (void)_failImmediately;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (void)_handleBadPasswordResponse;
- (BOOL)_handleCertificateError:(id)arg1;
- (void)reportStatusWithError:(id)arg1;
- (id)requestBodyStream;
- (id)httpMethod;
- (NSInteger)numDownloadedElements;
- (id)taskManager;
- (void)setCurrentlyParsingItem:(id)arg1;
- (id)currentlyParsingItem;
- (id)requestBody;
- (void)setTaskManager:(id)arg1;
- (id)responseHeaders;
- (NSInteger)depth;
- (double)timeoutInterval;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;

@end

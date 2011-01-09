/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSURL, NSError, NSThread, NSURLConnection, NSMutableSet, NSString, NSMutableDictionary, NSData;



@interface QLPreviewParts : NSObject 
{
    NSURL *_url;
    NSData *_data;
    NSString *_fileName;
    NSString *_uti;
    BOOL _progressive;
    void *_convertFunction;
    NSURLConnection *_connection;
    id _delegate;
    NSURL *previewURL;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
    void *representedObject;
    struct { 
        NSInteger version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
    } representedObjectCallbacks;
    NSInteger representedObjectProtection;
}

@property(readonly) NSURLRequest *previewRequest;
@property(readonly) NSURLResponse *previewResponse;
@property(getter=isComputed,readonly) BOOL computed;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property(readonly) NSURL *previewURL;
@property(retain) id delegate;
@property(retain) NSURLConnection *connection;
@property BOOL progressive;
@property(retain) NSString *uti;
@property(retain) NSString *fileName;
@property(retain) NSData *data;
@property(retain) NSURL *url;

+ (void)unregisterPreview:(id)arg1;
+ (id)safeURLScheme;
+ (BOOL)isSafeURL:(id)arg1;
+ (id)relativeStringForSafeURL:(id)arg1;
+ (void)registerPreview:(id)arg1;
+ (BOOL)isSafeRequest:(id)arg1;

- (void)setError:(id)arg1;
- (id)connection;
- (void)cancel;
- (id)data;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)fileName;
- (void)setData:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;
- (BOOL)isCancelled;
- (void)setFileName:(id)arg1;
- (BOOL)isComputed;
- (void)computePreview;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
- (id)createAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (const void*)documentObject;
- (id)previewURL;
- (id)_voidRequest;
- (id)_requestForURL:(id)arg1;
- (void)computePreviewInThread;
- (void)_protectRepresentedObjectSafely;
- (void)_discardRepresentedObjectSafely;
- (void)setDocumentObject:(const void*)arg1 callbacks:(const struct { NSInteger x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (id)createSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (unsigned long)cfEncodingForAttachmentURL:(id)arg1;
- (BOOL)progressive;
- (void)setProgressive:(BOOL)arg1;
- (void)setUti:(id)arg1;
- (id)uti;
- (void)startComputingPreview;
- (void)setConnection:(id)arg1;
- (id)previewResponse;
- (id)previewRequest;
- (id)safeRequestForRequest:(id)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSoftwareUpdatesContext;



@interface SSSoftwareUpdatesRequest : SSRequest <NSCoding>
{
    SSSoftwareUpdatesContext *_context;
}

@property(readonly) SSSoftwareUpdatesContext *updateQueueContext;
@property <SSSoftwareUpdatesRequestDelegate> *delegate;


- (void)_sendResponseToDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdateQueueContext:(id)arg1;
- (id)updateQueueContext;
- (id)handleFailureResponse:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;

@end

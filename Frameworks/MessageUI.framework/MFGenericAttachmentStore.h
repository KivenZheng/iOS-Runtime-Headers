/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSConditionLock, NSMutableDictionary;



@interface MFGenericAttachmentStore : MFWebAttachmentSource 
{
    NSMutableDictionary *_attachmentsByURL;
    NSUInteger _size;
    NSUInteger _imagesSize;
    NSInteger _priority;
    struct dispatch_queue_s { } *_scalingQueue;
    NSConditionLock *_scalingThrottle;
    BOOL _outgoing;
    BOOL _didCancelImageScalingOperations;
}


- (NSInteger)priority;
- (void)dealloc;
- (void)setPriority:(NSInteger)arg1;
- (id)initOutgoing;
- (void)cancelImageScalingOperations;
- (BOOL)didCancelImageScalingOperations;
- (void)_enqueueAttachment:(id)arg1 forScalingCalculationFromImageSource:(struct CGImageSource { }*)arg2 withFlags:(NSUInteger)arg3;
- (void)removeAttachmentsForURLs:(id)arg1;
- (void)_delayedSetScalingEnabled;
- (void)setScalingThrottled:(BOOL)arg1;
- (unsigned long)totalSizeForScale:(NSInteger)arg1;
- (BOOL)addAttachment:(id)arg1 renamingContentID:(BOOL)arg2;
- (id)attachments;
- (id)attachmentForURL:(id)arg1;

@end

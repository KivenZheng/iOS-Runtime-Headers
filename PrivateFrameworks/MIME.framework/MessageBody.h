/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class Message;



@interface MessageBody : MFWeakObject 
{
    Message *_message;
}


- (void)setMessage:(id)arg1;
- (id)message;
- (void)dealloc;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (id)htmlContentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2;
- (id)htmlContent;
- (id)attachments;
- (BOOL)isHTML;
- (id)textHtmlPart;
- (id)rawData;
- (id)contentToOffset:(NSUInteger)arg1 resultOffset:(NSUInteger*)arg2 asHTML:(BOOL)arg3;
- (NSUInteger)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2;
- (BOOL)isRich;

@end

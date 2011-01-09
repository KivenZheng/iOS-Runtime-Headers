/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MimePart, MimeBody, NSData, NSDictionary, NSMutableDictionary;



@interface WebMessageDocument : MFWebAttachmentSource 
{
    NSDictionary *_partsByURL;
    NSDictionary *_partsByFilename;
    NSMutableDictionary *_attachmentsByURL;
    MimeBody *_mimeBody;
    MimePart *_htmlPart;
    NSData *_htmlData;
    NSUInteger _preferredCharset;
    unsigned int _downloadRemoteURLs : 1;
    unsigned int _containsRemoteContent : 1;
    BOOL _messageIsFromEntourage;
}


- (id)init;
- (void)dealloc;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned long)arg3;
- (id)fileWrapper;
- (id)mimePart;
- (id)initWithMimeBody:(id)arg1;
- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (id)initWithMimePart:(id)arg1;
- (id)mimePartForURL:(id)arg1;
- (id)attachmentsInDocument;
- (id)mimeBody;
- (id)htmlData;
- (void)setDownloadRemoteURLs:(BOOL)arg1;
- (BOOL)downloadRemoteURLs;
- (void)setContainsRemoteContent:(BOOL)arg1;
- (BOOL)containsRemoteContent;
- (void)setMessageIsFromEntourage:(BOOL)arg1;
- (BOOL)messageIsFromEntourage;
- (void)appendHTMLData:(id)arg1;
- (id)attachmentForURL:(id)arg1;
- (id)preferredCharacterSet;
- (void)setPreferredEncoding:(unsigned long)arg1;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAFolder;



@interface MFDAMailbox : MailboxUid 
{
    DAFolder *_DAFolder;
}


- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1 attributes:(NSUInteger)arg2 account:(id)arg3 folder:(id)arg4;
- (void)setDAFolder:(id)arg1;
- (id)folderID;
- (id)DAFolder;
- (id)URLStringWithAccount:(id)arg1;

@end

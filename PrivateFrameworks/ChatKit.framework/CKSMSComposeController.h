/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;



@interface CKSMSComposeController : CKTranscriptController 
{
    id _delegate;
    BOOL _mimeType;
    BOOL _alreadySetUp;
    NSMutableArray *_partsToInsert;
    NSMutableArray *_typesToInsert;
    NSInteger _entryViewInvisible;
}

@property BOOL mimeType;
@property id delegate;

+ (double)maxTrimDurationForVideo;
+ (BOOL)acceptsMIMEType:(id)arg1;
+ (double)maxTrimDurationForAudio;
+ (BOOL)canSendPhotos:(NSInteger)arg1 videos:(NSInteger)arg2 audioClips:(NSInteger)arg3;
+ (id)_newMediaObjectForFilename:(id)arg1 mimeType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;

- (void)cancelButtonClicked:(id)arg1;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (BOOL)mimeType;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)_addPart:(id)arg1;
- (BOOL)_insertMediaObject:(id)arg1;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)transitionFromNewMessageToConversation;
- (void)setMimeType:(BOOL)arg1;
- (void)send:(id)arg1;

@end

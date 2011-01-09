/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, NSData, NSMutableArray, UINavigationController;



@interface PLPublishingAgent : NSObject <PLDataArrayInputStreamProgressDelegate>
{
    id _userInfo;
    id _delegate;
    NSString *_mediaPath;
    NSData *_mediaData;
    NSString *_mimeType;
    BOOL _isMediaVideo;
    BOOL _deleteAfterPublishing;
    double _changeRate;
    long long _currentValue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    float _percentComplete;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    UINavigationController *_parentNavigationController;
    BOOL _ownerIsCamera;
}

@property BOOL ownerIsCamera;
@property <PLPublishingAgentDelegate> *delegate;

+ (id)publishingAgentForBundleNamed:(id)arg1;

- (void)snapshot;
- (float)percentComplete;
- (id)initWithMediaPath:(id)arg1;
- (id)mediaPath;
- (void)setMediaPath:(id)arg1;
- (BOOL)deleteMediaFileAfterPublishing;
- (id)mediaData;
- (void)resignPublishingSheetResponders;
- (void)cancelButtonClicked;
- (void)doneButtonClicked;
- (void)publish;
- (id)parentNavigationController;
- (id)mediaURL;
- (id)mediaTitle;
- (BOOL)isVideoMedia;
- (id)tellAFriendURL;
- (id)tellAFriendSubject;
- (id)tellAFriendBody;
- (double)maximumVideoDuration;
- (void)dataArrayInputStreamBytesWereRead:(id)arg1;
- (void)setTotalBytesWritten:(NSInteger)arg1 totalBytes:(NSInteger)arg2;
- (void)_updateStatisticsFromSnapshots;
- (double)estimatedTimeRemaining;
- (BOOL)ownerIsCamera;
- (void)setOwnerIsCamera:(BOOL)arg1;
- (id)serviceName;
- (void)presentModalSheetInNavigationController:(id)arg1;
- (void)setDeleteMediaFileAfterPublishing:(BOOL)arg1;
- (void)setMediaData:(id)arg1;
- (void)dismiss;
- (void)setUserInfo:(id)arg1;
- (id)navigationController;
- (id)userInfo;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

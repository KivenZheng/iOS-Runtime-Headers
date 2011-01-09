/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImportSessionInfo, PLThumbnailStorage, PLCameraImporter, UIAlertView, NSMutableArray, NSTimer, PLEmptyAlbumView, UIBarButtonItem;



@interface PLImportViewController : UIViewController <PLCameraImporterDelegate, PLAlbumViewDataSource, PLAlbumViewDelegate>
{
    PLCameraImporter *_importer;
    PLEmptyAlbumView *_emptyAlbumView;
    BOOL _readingImportItems;
    PLThumbnailStorage *_thumbStorage;
    NSUInteger _lastUsedThumbEntry;
    NSMutableArray *_importItemThumbEntries;
    PLImportSessionInfo *_importSessionInfo;
    struct __CFUserNotification { } *_importCompleteNotification;
    UIAlertView *_notEnoughSpaceAlert;
    UIAlertView *_confirmDupsAlert;
    NSTimer *_deletedItemsTimer;
    NSTimer *_icSleepPreventionTimer;
    UIBarButtonItem *_importAllBarButton;
    UIBarButtonItem *_importSelectedBarButton;
    UIBarButtonItem *_stopImportBarButton;
    NSUInteger _busyCount;
    NSUInteger _imageCount;
    NSUInteger _videoCount;
    NSUInteger _otherCount;
}

@property(retain) PLCameraImporter *importer;


- (void)importer:(id)arg1 didChangeImportItem:(id)arg2 changeType:(NSInteger)arg3 error:(id)arg4;
- (void)importer:(id)arg1 didRemoveImportItem:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)stopImport;
- (id)_localizedDeviceType;
- (id)_localizedCameraName;
- (void)_icSleepPreventionTimerFired:(id)arg1;
- (void)_setupNavigationItem;
- (void)_beginUninterruptibleOperation;
- (void)_resetDuplicateBadgesForceDatabaseCheck:(BOOL)arg1;
- (void)_deletedItemsTimerFired:(id)arg1;
- (void)_photosDatabaseHasChanged:(id)arg1;
- (void)_endUninterruptibleOperation;
- (void)_cleanUpAfterImport;
- (id)_textBadgeStringForCameraItem:(id)arg1;
- (void)_addEmptyAlbumViewWithError:(id)arg1;
- (id)_thumbnailPathString;
- (void)_resetThumbnailTracking;
- (struct CGImage { }*)_createGenericThumbnailForImportItem:(id)arg1;
- (void)_setThumbnailEntryForImportItem:(id)arg1 atImportItemIndex:(NSUInteger)arg2;
- (id)_deletableIndexesOfItemsAtIndexes:(id)arg1;
- (BOOL)isBusy;
- (BOOL)isImporting;
- (id)importDevice;
- (void)_cancelAlerts;
- (void)setImportDevice:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification { }*)arg1 flags:(unsigned long)arg2;
- (void)_beginImportForItemAtIndex:(NSUInteger)arg1;
- (void)_endImport;
- (void)_beginImportSession;
- (void)_checkDiskSpaceForImportIndexes:(id)arg1;
- (void)importAll;
- (void)importSelected;
- (void)importer:(id)arg1 didAddImportItem:(id)arg2 atIndex:(NSUInteger)arg3;
- (void)importerDidFinishReadingImportItems:(id)arg1 error:(id)arg2;
- (void)importer:(id)arg1 didCopyOriginalForItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didImportItem:(id)arg2 error:(id)arg3;
- (void)importer:(id)arg1 didCompleteImportForItems:(id)arg2;
- (void)importer:(id)arg1 didCompleteRemovalOfItems:(id)arg2;
- (id)albumView:(id)arg1 imageDataForPhotoAtIndex:(NSUInteger)arg2 imageWidth:(NSInteger*)arg3 imageHeight:(NSInteger*)arg4 bytesPerRow:(NSInteger*)arg5 dataWidth:(NSInteger*)arg6 dataHeight:(NSInteger*)arg7 imageDataOffset:(NSInteger*)arg8;
- (void)albumView:(id)arg1 imageCount:(NSUInteger*)arg2 videoCount:(NSUInteger*)arg3 otherCount:(NSUInteger*)arg4;
- (void)albumViewSelectionDidChange:(id)arg1;
- (id)importer;
- (void)setImporter:(id)arg1;
- (NSUInteger)numberOfPhotosForAlbumView:(id)arg1;
- (id)albumView:(id)arg1 textBadgeForPhotoAtIndex:(NSUInteger)arg2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)viewDidUnload;
- (id)contentScrollView;
- (id)init;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)didReceiveMemoryWarning;

@end

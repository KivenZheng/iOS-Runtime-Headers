/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, UIActionSheet, <UIDocumentInteractionControllerDelegate>, UIView, NSString, UIPopoverController, UIViewController, NSArray;



@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate>
{
    <UIDocumentInteractionControllerDelegate> *_delegate;
    id _previewItemProxy;
    NSString *_UTI;
    NSArray *_icons;
    id _annotation;
    NSString *_uniqueIdentifier;
    UIPopoverController *_popoverController;
    UIViewController *_presentingViewController;
    id _previewController;
    NSArray *_gestureRecognizers;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _presentRect;
    UIView *_presentView;
    NSArray *_availableApplications;
    UIViewController *_openInViewController;
    UIActionSheet *_optionsMenu;
    UIActionSheet *_openInMenu;
    NSInteger _quickLookButtonIndex;
    NSInteger _defaultOpenButtonIndex;
    NSInteger _alternateOpenButtonIndex;
    NSInteger _copyButtonIndex;
    struct CGSize { 
        float width; 
        float height; 
    } _openInTableViewSize;
    BOOL _shouldUnzipDocument;
    NSURL *_unzippedDocumentURL;
    id _applicationToOpen;
    struct { 
        unsigned int delegateViewControllerForPreview : 1; 
        unsigned int delegateRectForPreview : 1; 
        unsigned int delegateViewForPreview : 1; 
        unsigned int transitionImageForPreview : 1; 
        unsigned int delegateWillBeginPreview : 1; 
        unsigned int delegateDidEndPreviewPreview : 1; 
        unsigned int delegateWillPresentOptionsMenu : 1; 
        unsigned int delegateDidDismissOptionsMenu : 1; 
        unsigned int delegateWillPresentOpenInMenu : 1; 
        unsigned int delegateDidDismissOpenInMenu : 1; 
        unsigned int delegateWillBeginSendingToApplication : 1; 
        unsigned int delegateDidEndSendingToApplication : 1; 
        unsigned int delegateCanPerformAction : 1; 
        unsigned int delegatePerformAction : 1; 
        unsigned int delegateUnzipURL : 1; 
        unsigned int delegateShouldRemoveUnzippedDocument : 1; 
        unsigned int delegateDidUnzipDocumentAtURL : 1; 
    } _documentInteractionControllerFlags;
}

@property(readonly) id previewController;
@property(readonly) UIPopoverController *popoverController;
@property(readonly) _UIPreviewItemProxy *previewItemProxy;
@property(retain) NSURL *URL;
@property(copy) NSString *UTI;
@property(copy) NSString *name;
@property(readonly) NSArray *icons;
@property(readonly) NSArray *gestureRecognizers;
@property BOOL shouldUnzipDocument;
@property(retain) NSString *uniqueIdentifier;
@property(retain) id annotation;
@property <UIDocumentInteractionControllerDelegate> *delegate;

+ (id)interactionControllerWithURL:(id)arg1;
+ (void)initialize;

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (NSInteger)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(NSInteger)arg2;
- (id)popoverController;
- (id)previewController;
- (id)previewItemProxy;
- (void)_presentPreview:(id)arg1;
- (void)_presentOpenIn:(id)arg1;
- (void)_presentOptionsMenu:(id)arg1;
- (id)_applications:(BOOL)arg1;
- (void)_openDocumentWithApplication:(id)arg1;
- (void)_openDocumentWithCurrentApplication;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)_finishedCopyingResource;
- (BOOL)_setupForOptionsMenu;
- (BOOL)_setupForOpenInMenu;
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id*)arg1;
- (BOOL)_setupPreviewController;
- (void)_interfaceOrientationWillChange:(id)arg1;
- (void)_setApplicationToOpen:(id)arg1;
- (void)_setUnzippedDocumentURL:(id)arg1;
- (BOOL)_canUnzipDocument;
- (BOOL)_isFilenameValidForUnzipping:(id)arg1;
- (BOOL)_isValidURL:(id)arg1;
- (void)_unzipDocument;
- (void)_unzipDocumentToDirectory:(id)arg1;
- (void)_zipOperationCompleted;
- (void)_cleanUpUnzippedDocument;
- (id)icons;
- (id)initWithURL:(id)arg1;
- (void)setPreviewURLOverride:(id)arg1;
- (void)setUTI:(id)arg1;
- (id)UTI;
- (BOOL)presentOptionsMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (id)presentingNavigationController;
- (BOOL)presentPreviewAnimated:(BOOL)arg1;
- (void)updatePopoverContentSizeForPresentationOfTableViewHack;
- (void)_presentOpenInForPhoneInView:(id)arg1;
- (BOOL)presentOpenInMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)dismissPreviewAnimated:(BOOL)arg1;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (NSUInteger)applicationCount;
- (void)openDocumentWithDefaultApplication;
- (BOOL)shouldUnzipDocument;
- (void)setShouldUnzipDocument:(BOOL)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)annotation;
- (void)setAnnotation:(id)arg1;
- (id)_applicationToOpen;
- (id)_unzippedDocumentURL;
- (void)_invalidate;
- (void)setURL:(id)arg1;
- (void)setName:(id)arg1;
- (id)uniqueIdentifier;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)URL;
- (id)name;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)actionSheetCancel:(id)arg1;
- (id)gestureRecognizers;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

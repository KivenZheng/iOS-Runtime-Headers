/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonImageView, ABNamePropertyGroup, UIImageView, UIView, ABPersonNameDisplayView, ABMultiCellContentView, <ABPersonTableHeaderViewDelegate>, <ABStyleProvider>;



@interface ABPersonTableHeaderView : UIView 
{
    BOOL _editing;
    BOOL _representsLinkedPeople;
    ABPersonImageView *_imageView;
    ABPersonNameDisplayView *_displayView;
    UIImageView *_multiplePhotoBackdropView;
    BOOL _showsMultiplePhotoBackdropView;
    ABNamePropertyGroup *_namePropertyGroup;
    ABMultiCellContentView *_editingView;
    UIView *_editingViewContainer;
    UIView *_extraHeaderView;
    <ABPersonTableHeaderViewDelegate> *_delegate;
    <ABStyleProvider> *_styleProvider;
}

@property void *personForImageView;
@property(copy) NSString *alternateName;
@property(copy) NSString *message;
@property(retain) UIFont *messageFont;
@property(copy) NSString *messageDetail;
@property(retain) UIFont *messageDetailFont;
@property(retain) UIView *customMessageView;
@property(retain) UIView *extraHeaderView;
@property BOOL representsLinkedPeople;
@property(retain) <ABStyleProvider> *styleProvider;
@property <ABPersonTableHeaderViewDelegate> *delegate;
@property(retain) ABNamePropertyGroup *namePropertyGroup;
@property(readonly) ABMultiCellContentView *editingView;
@property(readonly) UIView *editingViewContainer;
@property(readonly) ABPersonNameDisplayView *displayView;
@property(readonly) ABPersonImageView *imageView;


- (void)setMessage:(id)arg1;
- (id)message;
- (void)setAllowsEditing:(BOOL)arg1;
- (id)imageView;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)canResignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isSpecialInternalHeaderView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)canBecomeFirstResponder;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrameWhenEditing:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_multiplePhotoBackdropViewFrame;
- (struct CGPoint { float x1; float x2; })_displayViewOrigin;
- (float)_displayViewWidthForWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_displayViewFrameForWidth:(float)arg1;
- (struct CGPoint { float x1; float x2; })_editingViewOrigin;
- (float)_editingViewWidthForWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_editingViewFrameForWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForEditingView;
- (struct CGPoint { float x1; float x2; })_extraHeaderViewOriginForWidth:(float)arg1 whenEditing:(BOOL)arg2;
- (float)_extraHeaderViewAvailableWidth;
- (id)_multiplePhotoBackdropViewImage;
- (void*)personForName;
- (void*)personForImageView;
- (id)_newEditingViewContainerForWidth:(float)arg1;
- (void)_updateShowsMultiplePhotoBackdrop;
- (void)setNamePropertyGroup:(id)arg1;
- (struct CGPoint { float x1; float x2; })extraHeaderViewOrigin;
- (void)setPrimaryProperty:(NSInteger)arg1 countryCode:(id)arg2;
- (void)imageViewSelected:(id)arg1;
- (void)_updateRecordIfNeeded;
- (BOOL)representsLinkedPeople;
- (id)editingViewContainer;
- (id)_displayView;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)setPersonForImageView:(void*)arg1;
- (void)setRepresentsLinkedPeople:(BOOL)arg1;
- (id)extraHeaderView;
- (void)setExtraHeaderView:(id)arg1;
- (void)reloadNameDataButNotModelAnimated:(BOOL)arg1;
- (id)editingView;
- (id)entryFieldForRow:(NSUInteger)arg1;
- (id)displayView;
- (void)deselectAnimated:(BOOL)arg1;
- (id)namePropertyGroup;
- (id)alternateName;
- (void)reloadImageData;
- (void)setAlternateName:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (id)customMessageView;
- (id)messageDetailFont;
- (void)setMessageFont:(id)arg1;
- (id)messageFont;
- (id)messageDetail;
- (void)setMessageDetailFont:(id)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end

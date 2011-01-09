/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIButton, UIView, ABPersonTableAction, <ABStyleProvider>;



@interface ABPersonTableFooterView : UIView <ABPersonTableActionDelegate>
{
    BOOL _editing;
    ABPersonTableAction *_deleteAction;
    UIView *_deleteView;
    UIButton *_attributionButton;
    <ABStyleProvider> *_styleProvider;
}

@property(readonly) NSString *attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(retain) <ABStyleProvider> *styleProvider;
@property(getter=isEditing) BOOL tableEditing;


- (BOOL)isEditing;
- (void)setEditing:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)isAttributionEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deleteViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attributionFrame;
- (void)removeDeleteAction;
- (void)setDeleteActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 animated:(BOOL)arg4;
- (void)setTableEditing:(BOOL)arg1;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)attribution;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class UITextInputTraits, NSTimer, MFComposeRecipient;



@interface MFComposeRecipientAtom : MFAtomView 
{
    MFComposeRecipient *_recipient;
    UITextInputTraits *_traits;
    NSTimer *_holdTimer;
    BOOL _showedPersonCardDuringTouchSequence;
}

@property(readonly) MFComposeRecipient *recipient;
@property(retain) NSTimer *holdTimer;

+ (void)_initializeSafeCategory;

- (id)recipient;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)moveRight;
- (void)moveLeft;
- (id)title;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 recipient:(id)arg2;
- (void)setHoldTimer:(id)arg1;
- (id)holdTimer;
- (void)handleTouchAndHold;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end

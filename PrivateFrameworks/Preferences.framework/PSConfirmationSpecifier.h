/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;



@interface PSConfirmationSpecifier : PSSpecifier 
{
    NSString *_title;
    NSString *_prompt;
    NSString *_okButton;
    NSString *_cancelButton;
}

@property(retain) NSString *cancelButton;
@property(retain) NSString *okButton;
@property(retain) NSString *prompt;
@property(retain) NSString *title;

+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(NSInteger)arg6 edit:(Class)arg7;

- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (id)title;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setupWithDictionary:(id)arg1;
- (id)okButton;
- (void)setOkButton:(id)arg1;
- (BOOL)isDestructive;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSString, NSLock, NSMutableDictionary;



@interface ISDialog : NSObject 
{
    BOOL _allowDuplicates;
    BOOL _authorizationIsForced;
    NSArray *_buttons;
    NSInteger _defaultButtonIndex;
    NSString *_displayCountKey;
    BOOL _dismissOnLock;
    BOOL _expectsResponse;
    BOOL _groupsTextFields;
    NSInteger _kind;
    NSLock *_lock;
    NSInteger _maxDisplayCount;
    NSString *_message;
    NSString *_preferredITunesStoreClient;
    BOOL _oneButtonPerLine;
    NSArray *_textFields;
    NSString *_title;
    NSMutableDictionary *_userInfo;
}

@property(copy) NSString *displayCountKey;
@property NSInteger maximumDisplayCount;
@property(getter=isDisplayable,readonly) BOOL displayable;
@property(retain) NSString *title;
@property(retain) NSArray *textFields;
@property(retain) NSString *preferredITunesStoreClient;
@property BOOL oneButtonPerLine;
@property(retain) NSString *message;
@property NSInteger kind;
@property BOOL groupsTextFields;
@property BOOL expectsResponse;
@property BOOL dismissOnLock;
@property NSInteger defaultButtonIndex;
@property(retain) NSArray *buttons;
@property BOOL authorizationIsForced;
@property BOOL allowDuplicates;

+ (NSInteger)displayCountForKey:(id)arg1;
+ (id)ITunesStoreNotAvailableDialog;

- (id)initWithOfferDeviceError:(id)arg1;
- (id)textFields;
- (void)incrementDisplayCount;
- (BOOL)isDisplayable;
- (void)setButtons:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithDialogDictionary:(id)arg1;
- (void)setTextFields:(id)arg1;
- (void)setKind:(NSInteger)arg1;
- (BOOL)authorizationIsForced;
- (BOOL)dismissOnLock;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)displayCountKey;
- (NSInteger)maximumDisplayCount;
- (void)setDisplayCountKey:(id)arg1;
- (void)setMaximumDisplayCount:(NSInteger)arg1;
- (void)setValue:(id)arg1 forUserInfoKey:(id)arg2;
- (id)valueForUserInfoKey:(id)arg1;
- (NSInteger)_kindForString:(id)arg1;
- (BOOL)oneButtonPerLine;
- (void)setOneButtonPerLine:(BOOL)arg1;
- (BOOL)expectsResponse;
- (void)setAuthorizationIsForced:(BOOL)arg1;
- (id)initWithAuthenticationChallege:(id)arg1;
- (id)copyUserNotification;
- (BOOL)allowDuplicates;
- (void)setAllowDuplicates:(BOOL)arg1;
- (void)setExpectsResponse:(BOOL)arg1;
- (id)preferredITunesStoreClient;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setDismissOnLock:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (BOOL)groupsTextFields;
- (void)setGroupsTextFields:(BOOL)arg1;
- (id)buttons;
- (void)setDefaultButtonIndex:(NSInteger)arg1;
- (NSInteger)defaultButtonIndex;
- (id)message;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (NSInteger)kind;

@end

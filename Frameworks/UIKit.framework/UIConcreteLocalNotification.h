/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSCalendar, NSDate, NSData, NSTimeZone;



@interface UIConcreteLocalNotification : UILocalNotification 
{
    NSDate *fireDate;
    NSTimeZone *timeZone;
    NSUInteger repeatInterval;
    NSCalendar *repeatCalendar;
    NSString *alertBody;
    BOOL hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *soundName;
    NSInteger applicationIconBadgeNumber;
    NSData *userInfoData;
    BOOL hideAlertTitle;
    BOOL allowSnooze;
    BOOL soundNameIsARingtone;
    BOOL interruptAudioAndLockDevice;
    BOOL fireNotificationsWhenAppRunning;
    BOOL showAlarmStatusBarItem;
    NSString *customLockSliderLabel;
}

@property(copy) NSString *customLockSliderLabel;
@property BOOL showAlarmStatusBarItem;
@property BOOL fireNotificationsWhenAppRunning;
@property BOOL interruptAudioAndLockDevice;
@property BOOL soundNameIsARingtone;
@property BOOL allowSnooze;
@property BOOL hideAlertTitle;
@property NSInteger applicationIconBadgeNumber;
@property(copy) NSString *soundName;
@property(copy) NSString *alertLaunchImage;
@property(copy) NSString *alertAction;
@property BOOL hasAction;
@property(copy) NSString *alertBody;
@property(copy) NSCalendar *repeatCalendar;
@property NSUInteger repeatInterval;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSDate *fireDate;


- (void)_setUserInfoData:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)_dateComponentsForCalendarUnit:(NSUInteger)arg1;
- (void)setCustomLockSliderLabel:(id)arg1;
- (void)setShowAlarmStatusBarItem:(BOOL)arg1;
- (void)setFireNotificationsWhenAppRunning:(BOOL)arg1;
- (void)setInterruptAudioAndLockDevice:(BOOL)arg1;
- (void)setSoundNameIsARingtone:(BOOL)arg1;
- (void)setAllowSnooze:(BOOL)arg1;
- (void)setHideAlertTitle:(BOOL)arg1;
- (void)setSoundName:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertAction:(id)arg1;
- (void)setHasAction:(BOOL)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (BOOL)showAlarmStatusBarItem;
- (BOOL)hideAlertTitle;
- (id)repeatCalendar;
- (id)timeZone;
- (id)fireDate;
- (id)alertBody;
- (BOOL)hasAction;
- (id)alertAction;
- (id)alertLaunchImage;
- (id)soundName;
- (NSInteger)applicationIconBadgeNumber;
- (BOOL)allowSnooze;
- (BOOL)soundNameIsARingtone;
- (BOOL)interruptAudioAndLockDevice;
- (BOOL)fireNotificationsWhenAppRunning;
- (id)customLockSliderLabel;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (BOOL)isValid;
- (NSInteger)compareFireDates:(id)arg1;
- (void)clearNonSystemProperties;
- (void)setTimeZone:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)repeatInterval;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)userInfo;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setFireDate:(id)arg1;
- (void)setRepeatInterval:(NSUInteger)arg1;
- (void)setApplicationIconBadgeNumber:(NSInteger)arg1;

@end

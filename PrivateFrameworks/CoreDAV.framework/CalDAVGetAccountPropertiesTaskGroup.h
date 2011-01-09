/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString, NSArray;



@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup 
{
    NSString *_collectionSetName;
    NSString *_calendarHomePath;
    NSString *_inboxPath;
    NSString *_notificationURL;
    NSArray *_userAddresses;
}

@property(readonly) NSArray *userAddresses;
@property(readonly) NSString *notificationURL;
@property(readonly) NSString *inboxPath;
@property(readonly) NSString *calendarHomePath;
@property(readonly) NSString *collectionSetName;


- (void)_setPropertiesFromParsedResponces:(id)arg1;
- (id)_copyAccountPropertiesPropFindElements;
- (void)syncAway;
- (void)dealloc;
- (id)description;
- (id)userAddresses;
- (id)calendarHomePath;
- (id)inboxPath;
- (id)collectionSetName;
- (id)notificationURL;

@end

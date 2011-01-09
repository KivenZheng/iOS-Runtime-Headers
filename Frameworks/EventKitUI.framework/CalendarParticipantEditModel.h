/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSURL, NSString;



@interface CalendarParticipantEditModel : CalendarParticipant 
{
    NSString *_name;
    NSURL *_emailAddress;
    NSInteger _type;
    NSInteger _role;
    NSInteger _status;
    BOOL _isSelf;
}


- (NSInteger)status;
- (NSInteger)type;
- (id)displayName;
- (id)address;
- (NSInteger)role;
- (id)initWithOrganizer:(struct CalOrganizer { }*)arg1;
- (void)commitIntoAttendee:(void*)arg1;
- (id)commonName;
- (BOOL)isSelf;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithAttendee:(void*)arg1;

@end

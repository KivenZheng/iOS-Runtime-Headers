/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableSet, NSMutableArray, <DADataclassLockWatcher>;



@interface DALocalDBGateKeeper : NSObject 
{
    BOOL _claimedOwnershipOfContacts;
    <DADataclassLockWatcher> *_contactsLockHolder;
    NSMutableArray *_contactsWaiters;
    NSMutableSet *_waiterIDsExpectingContactsLock;
    BOOL _claimedOwnershipOfEvents;
    <DADataclassLockWatcher> *_eventsLockHolder;
    NSMutableArray *_eventsWaiters;
    NSMutableSet *_waiterIDsExpectingEventsLock;
    BOOL _claimedOwnershipOfNotes;
    <DADataclassLockWatcher> *_notesLockHolder;
    NSMutableArray *_notesWaiters;
    NSMutableSet *_waiterIDsExpectingNotesLock;
}

+ (id)sharedGateKeeper;

- (void)registerWaiter:(id)arg1 forDataclassLocks:(NSInteger)arg2 context:(void*)arg3;
- (void)unregisterWaiterForDataclassLocks:(id)arg1;
- (void)relinquishLocksForWaiter:(id)arg1 dataclasses:(NSInteger)arg2 moreComing:(BOOL)arg3;
- (void)claimedOwnershipOfDataclasses:(NSInteger)arg1;
- (id)stateString;

@end

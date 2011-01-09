/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;



@interface ABAbstractPropertyGroup : NSObject 
{
    NSArray *_people;
    BOOL _hasChanges;
}

@property BOOL hasChanges;
@property(retain) NSArray *people;


- (NSInteger)property;
- (BOOL)hasChanges;
- (void)setHasChanges:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)setPeople:(id)arg1;
- (void)updateRecord;
- (id)people;
- (void)reloadFromModel;
- (BOOL)canSave;

@end

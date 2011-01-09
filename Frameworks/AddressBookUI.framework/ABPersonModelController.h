/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABNamePropertyGroup, NSMutableDictionary, NSArray;



@interface ABPersonModelController : ABModelController <ABPrimaryValueDelegate>
{
    void *_addressBook;
    NSArray *_people;
    NSMutableDictionary *_propertyGroups;
    ABNamePropertyGroup *_namePropertyGroup;
}

@property(readonly) void *addressBook;
@property(readonly) NSArray *writablePeople;
@property(readonly) ABNamePropertyGroup *namePropertyGroup;
@property(readonly) NSArray *people;


- (BOOL)hasChanges;
- (void*)addressBook;
- (void)dealloc;
- (id)namePropertyGroup:(id)arg1 primaryValueForProperty:(NSInteger)arg2;
- (void)setPeople:(id)arg1;
- (void)updateRecord;
- (id)initWithPerson:(void*)arg1 addressBook:(void*)arg2;
- (id)initWithPeople:(id)arg1 addressBook:(void*)arg2;
- (id)propertyGroupForProperty:(NSInteger)arg1;
- (id)propertyGroupForProperty:(NSInteger)arg1 createIfEmpty:(BOOL)arg2;
- (id)people;
- (id)namePropertyGroup;
- (void)reloadFromModel;
- (BOOL)canSave;
- (BOOL)hasNameChanges;
- (void)setStyleProvider:(id)arg1;
- (id)writablePeople;

@end

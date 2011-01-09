/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */



@interface ABMapsPersonViewController : ABUnknownPersonViewController 
{
    BOOL _showAddToBookmarks;
    BOOL _showDirections;
    BOOL _showRemovePin;
    BOOL _showShareLocation;
}

@property <ABMapsPersonViewControllerDelegate> *mapsPersonViewControllerDelegate;
@property BOOL shouldShowShareLocation;
@property BOOL shouldShowRemovePin;
@property BOOL shouldShowAddToBookmarks;
@property BOOL shouldShowDirections;


- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (BOOL)shouldShowRemovePin;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (void)setShouldShowAddToBookmarks:(BOOL)arg1;
- (void)setShouldShowRemovePin:(BOOL)arg1;
- (void)setShouldShowShareLocation:(BOOL)arg1;
- (void)setShouldShowDirections:(BOOL)arg1;
- (BOOL)isAttributionEnabled;
- (void)setMapsPersonViewControllerDelegate:(id)arg1;
- (void)removePin:(id)arg1;
- (void)addToBookmarks:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)shareLocation:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)directionsTo:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (void)directionsFrom:(id)arg1 person:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (BOOL)shouldShowShareLocation;
- (BOOL)shouldShowAddToBookmarks;
- (BOOL)shouldShowDirections;
- (id)mapsPersonViewControllerDelegate;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(NSInteger)arg2 inPropertyGroup:(id)arg3;
- (void)reloadImageData;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)ab_wantsToPresentModalViewControllerWithoutAnyHelp;
- (void)attributionSelected:(id)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (id)attribution;
- (void)setAttribution:(id)arg1;

@end

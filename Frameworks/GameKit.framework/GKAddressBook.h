/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */



@interface GKAddressBook : NSObject 
{
    void *_addressBook;
    void *_thunderdomeSource;
}

@property(readonly) void *addressBook;
@property(readonly) void *thunderdomeSource;

+ (id)sharedAddressBook;

- (void*)addressBook;
- (id)activeAccount;
- (void)dealloc;
- (void*)copySourceForPlayerID:(id)arg1;
- (void*)thunderdomeSource;
- (void*)rootContactForContact:(void*)arg1;
- (void*)contactForEmail:(id)arg1;
- (void*)setOrCreateTDContact:(void*)arg1 withContact:(void*)arg2 forPlayer:(id)arg3;
- (void*)contactForPlayer:(id)arg1;
- (id)personForContact:(void*)arg1;
- (void)playerID:(id*)arg1 requestID:(id*)arg2 forThunderdomeContact:(void*)arg3;
- (void)setAlias:(id)arg1 playerID:(id)arg2 requestID:(id)arg3 forThunderdomeContact:(void*)arg4;
- (id)stringWithContact:(void*)arg1;
- (void)showContacts;
- (id)personForPlayer:(id)arg1;
- (void*)setPlayer:(id)arg1 forContact:(void*)arg2;

@end

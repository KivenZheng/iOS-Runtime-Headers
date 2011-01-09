/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;



@interface ABPhonePredicate : ABPredicate 
{
    NSString *_phoneNumber;
    NSString *_country;
}

@property(copy) NSString *country;
@property(copy) NSString *phoneNumber;


- (void)setPhoneNumber:(id)arg1;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (void)setCountry:(id)arg1;
- (BOOL)hasCallback;
- (void)evaluateCallbackWithSqliteContext:(struct sqlite3_context { }*)arg1 predicateContext:(void*)arg2 values:(struct Mem {}**)arg3 count:(NSInteger)arg4;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(NSInteger*)arg2 predicateIdentifier:(NSInteger)arg3;
- (id)queryWhereString;
- (BOOL)isValid;
- (id)phoneNumber;
- (id)country;
- (id)predicateFormat;

@end

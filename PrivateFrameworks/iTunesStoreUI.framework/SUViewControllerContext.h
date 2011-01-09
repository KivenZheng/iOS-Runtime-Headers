/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, NSString;



@interface SUViewControllerContext : NSObject <NSCoding>
{
    NSMutableDictionary *_metadata;
    NSString *_sectionIdentifier;
    NSInteger _type;
}

@property NSInteger type;
@property(retain) NSString *sectionIdentifier;


- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
- (NSInteger)_typeForTypeString:(id)arg1;
- (id)_typeStringForType:(NSInteger)arg1;
- (id)valueForMetadataKey:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (id)sectionIdentifier;
- (id)copyViewController;
- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

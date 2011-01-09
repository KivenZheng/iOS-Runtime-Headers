/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSItemOffer, SSDownloadMetadata, NSNumber, SSItem;



@interface SSPurchase : NSObject <NSCoding, NSCopying>
{
    NSNumber *_accountIdentifier;
    NSString *_buyParameters;
    SSDownloadMetadata *_downloadMetadata;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    NSString *_uniqueIdentifier;
}

@property(readonly) NSString *uniqueIdentifier;
@property(readonly) SSItemOffer *itemOffer;
@property(readonly) SSItem *item;
@property(copy) SSDownloadMetadata *downloadMetadata;
@property(copy) NSString *buyParameters;
@property(retain) NSNumber *accountIdentifier;

+ (id)purchaseWithBuyParameters:(id)arg1;

- (id)initWithItem:(id)arg1;
- (id)itemOffer;
- (id)buyParameters;
- (void)setBuyParameters:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (id)downloadMetadata;
- (id)accountIdentifier;
- (id)item;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)uniqueIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;

@end

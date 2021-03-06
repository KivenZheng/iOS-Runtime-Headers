/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIToggleStateItem : NSObject <NSCopying> {
    int  _count;
    NSString * _itemIdentifier;
    NSString * _nonToggledString;
    BOOL  _toggled;
    NSString * _toggledString;
}

@property (nonatomic) int count;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, copy) NSString *nonToggleString;
@property (nonatomic) BOOL toggled;
@property (nonatomic, copy) NSString *toggledString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)count;
- (id)itemIdentifier;
- (id)nonToggleString;
- (void)setCount:(int)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setNonToggleString:(id)arg1;
- (void)setToggled:(BOOL)arg1;
- (void)setToggledString:(id)arg1;
- (BOOL)toggled;
- (id)toggledString;

@end

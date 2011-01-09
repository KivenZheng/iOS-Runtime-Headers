/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableArray;



@interface UIKBKeyset : NSObject <NSCoding>
{
    NSString *m_name;
    NSMutableArray *m_keylists;
}

@property(retain) NSMutableArray *keylists;
@property(retain) NSString *name;

+ (id)keyset;

- (void)setKeylists:(id)arg1;
- (id)keylistWithName:(id)arg1;
- (BOOL)addKeylist:(id)arg1;
- (id)keylists;
- (void)setName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)name;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

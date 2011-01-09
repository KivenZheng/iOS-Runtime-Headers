/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;



@interface UIProxyObject : NSObject <NSCoding>
{
    NSString *proxiedObjectIdentifier;
}

+ (struct __CFDictionary { }*)proxyDecodingMap;
+ (void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3;
+ (id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2;
+ (void)addMappings:(id)arg1 forCoder:(id)arg2;
+ (void)removeMappingsForCoder:(id)arg1;

- (void)setProxiedObjectIdentifier:(id)arg1;
- (id)proxiedObjectIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

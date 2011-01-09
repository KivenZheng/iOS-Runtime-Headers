/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CAValueFunction, NSString, CALayer;



@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    NSString *_name;
    CALayer *_layer;
    CAValueFunction *_function;
    BOOL _enabled;
    void *_priv;
}

@property(copy) NSString *name;
@property(getter=isEnabled) BOOL enabled;
@property(retain) CALayer *layer;
@property(retain) CAValueFunction *function;

+ (id)defaultValueForKey:(id)arg1;
+ (id)forceField;

- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)valueForKey:(id)arg1;
- (BOOL)isEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)valueForKeyPath:(id)arg1;
- (id)layer;
- (void)setEnabled:(BOOL)arg1;
- (id)name;
- (void)setLayer:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setFunction:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { NSInteger x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)function;

@end

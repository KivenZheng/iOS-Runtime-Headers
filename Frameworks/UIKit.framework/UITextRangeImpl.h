/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMRange;



@interface UITextRangeImpl : UITextRange 
{
    DOMRange *_domRange;
}

@property(retain) DOMRange *domRange;

+ (id)wrapDOMRange:(id)arg1;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)__original_resolveClassMethod:(SEL)arg1;

- (id)start;
- (void)setDomRange:(id)arg1;
- (id)domRange;
- (id)end;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)__original_forwardingTargetForSelector:(SEL)arg1;

@end

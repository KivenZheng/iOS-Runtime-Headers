/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLSelectElement, <UIWebSelectControl>;



@interface UIWebSelectPeripheral : NSObject <UIFormPeripheral>
{
    DOMHTMLSelectElement *_selectionNode;
    <UIWebSelectControl> *_selectControl;
}

@property(retain) <UIWebSelectControl> *_selectControl;
@property(retain) DOMHTMLSelectElement *_selectionNode;

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;
+ (void)_initializeSafeCategory;

- (id)assistantView;
- (id)initWithDOMHTMLSelectElement:(id)arg1;
- (void)beginEditing;
- (void)set_selectControl:(id)arg1;
- (id)_selectControl;
- (void)set_selectionNode:(id)arg1;
- (id)_selectionNode;
- (void)dealloc;

@end

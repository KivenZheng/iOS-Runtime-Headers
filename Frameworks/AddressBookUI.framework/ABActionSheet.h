/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */



@interface ABActionSheet : UIActionSheet 
{
    struct __CFArray { } *_tags;
    struct __CFArray { } *_tag2s;
    struct __CFArray { } *_tag3s;
    void *_ab_context;
}

@property void *ab_context;


- (NSInteger)addButtonWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(NSInteger)arg3;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(NSInteger)arg3 tag2:(NSInteger)arg4 tag3:(NSInteger)arg5;
- (void*)ab_context;
- (void)setAb_context:(void*)arg1;
- (NSInteger)ab_tagAtIndex:(NSInteger)arg1;
- (id)ab_addButtonWithTitle:(id)arg1 label:(id)arg2 tag:(NSInteger)arg3 tag2:(NSInteger)arg4;
- (NSInteger)ab_tag3AtIndex:(NSInteger)arg1;
- (NSInteger)ab_addButtonWithTitle:(id)arg1 tag:(NSInteger)arg2;
- (NSInteger)ab_addButtonWithTitle:(id)arg1 tag:(NSInteger)arg2 tag2:(NSInteger)arg3;
- (NSInteger)ab_tag2AtIndex:(NSInteger)arg1;

@end

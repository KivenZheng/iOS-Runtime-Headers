/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMPerson, NSString, NSSet, IMServiceImpl;



@interface IMBuddyListPresence : IMPresence 
{
    NSSet *_filterGroups;
    IMPerson *_filterPerson;
    IMServiceImpl *_filterService;
    NSString *_IDFilter;
    NSString *_filterSingleGroup;
}


- (id)initWithIMPersonFilter:(id)arg1 IDFilter:(id)arg2 serviceFilter:(id)arg3 groupFilters:(id)arg4 quiet:(BOOL)arg5;
- (id)initWithIMPersonFilter:(id)arg1 IDFilter:(id)arg2 serviceFilter:(id)arg3 groupFilters:(id)arg4;
- (id)initWithIMPersonFilter:(id)arg1 serviceFilter:(id)arg2 groupFilters:(id)arg3 quiet:(BOOL)arg4;
- (id)initWithIMPersonFilter:(id)arg1 serviceFilter:(id)arg2 groupFilters:(id)arg3;
- (id)_filterSingleGroup;
- (id)groups;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)group;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)person;
- (id)service;
- (BOOL)canAddIMHandle:(id)arg1;
- (NSUInteger)sortOrder;

@end

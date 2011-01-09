/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;



@interface EKRecurrenceEnd : NSObject <NSCopying>
{
    NSDate *_endDate;
    NSUInteger _occurrenceCount;
}

@property(readonly) NSUInteger occurrenceCount;
@property(readonly) NSDate *endDate;

+ (id)recurrenceEndWithOccurrenceCount:(NSUInteger)arg1;
+ (id)recurrenceEndWithEndDate:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithEndDate:(id)arg1;
- (id)initWithOccurrenceCount:(NSUInteger)arg1;
- (BOOL)usesEndDate;
- (id)endDate;
- (NSUInteger)occurrenceCount;

@end

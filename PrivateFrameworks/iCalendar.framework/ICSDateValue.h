/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */



@interface ICSDateValue : NSObject <NSCoding>
{
    NSInteger _year;
    NSInteger _month;
    NSInteger _day;
}

@property(readonly) NSInteger day;
@property(readonly) NSInteger month;
@property(readonly) NSInteger year;

+ (id)dateFromICSUTF8String:(const char *)arg1;
+ (id)dateFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (NSInteger)dateType;
- (NSInteger)day;
- (NSInteger)month;
- (NSInteger)year;
- (NSInteger)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)components;
- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3;

@end

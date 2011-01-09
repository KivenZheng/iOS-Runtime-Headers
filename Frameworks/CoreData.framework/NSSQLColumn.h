/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;



@interface NSSQLColumn : NSSQLProperty 
{
    NSString *_columnName;
    NSInteger _sqlType;
    NSUInteger _precision;
    NSInteger _scale;
    NSUInteger _fetchIndex;
    NSUInteger _slot;
    NSUInteger _allowAliasing;
}


- (void)setScale:(NSInteger)arg1;
- (void)dealloc;
- (NSInteger)scale;
- (id)description;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)setAllowAliasing:(BOOL)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setSQLType:(NSUInteger)arg1;
- (void)_setColumnName:(id)arg1;
- (void)_setSlotIfDefault:(NSUInteger)arg1;
- (NSUInteger)sqlType;
- (id)initWithColumnName:(id)arg1 sqlType:(NSUInteger)arg2;
- (id)initForReadOnlyFetching;
- (NSUInteger)precision;
- (void)setPrecision:(NSUInteger)arg1;
- (NSUInteger)roughSizeEstimate;
- (NSUInteger)fetchIndex;
- (void)_setFetchIndex:(NSUInteger)arg1;
- (NSUInteger)slot;
- (id)columnName;
- (id)cloneForReadOnlyFetching;
- (BOOL)allowAliasing;

@end

/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSExpression;



@interface NSFetchRequestExpression : NSExpression 
{
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    NSExpression *_fetchRequest;
    NSExpression *_managedObjectContext;
    struct _fetchExpressionFlags { 
        unsigned int isCountOnly : 1; 
        unsigned int _RESERVED : 31; 
    } _flags;
}

+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (NSUInteger)expressionType;
- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)requestExpression;
- (id)contextExpression;
- (BOOL)isCountOnlyRequest;

@end

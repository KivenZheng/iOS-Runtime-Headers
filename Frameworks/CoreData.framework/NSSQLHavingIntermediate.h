/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLWhereIntermediate;



@interface NSSQLHavingIntermediate : NSSQLIntermediate 
{
    NSSQLWhereIntermediate *_whereClause;
}


- (void)dealloc;
- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;
- (BOOL)isHavingScoped;
- (id)generateSQLStringInContext:(id)arg1;

@end

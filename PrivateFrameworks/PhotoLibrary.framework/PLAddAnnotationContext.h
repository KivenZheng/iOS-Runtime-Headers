/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, NSMutableSet;



@interface PLAddAnnotationContext : NSObject 
{
    NSMutableArray *_annotationsToRemoveWhenAddAnimationStarts;
    NSMutableArray *_annotationsToRemoveWhenAddAnimationEnds;
    NSMutableArray *_animationOnlyAnnotations;
    NSMutableSet *_contextSet;
}

@property(copy) NSArray *animationOnlyAnnotations;
@property(copy) NSArray *annotationsToRemoveWhenAddAnimationEnds;
@property(copy) NSArray *annotationsToRemoveWhenAddAnimationStarts;

+ (id)contextWithPlaces:(id)arg1;

- (void)_appendArray:(id)arg1 toVar:(id*)arg2;
- (void)appendUniqueContext:(id)arg1;
- (void)setAnimationOnlyAnnotations:(id)arg1;
- (void)setAnnotationsToRemoveWhenAddAnimationEnds:(id)arg1;
- (void)setAnnotationsToRemoveWhenAddAnimationStarts:(id)arg1;
- (id)initWithPlaces:(id)arg1;
- (id)annotationsToRemoveWhenAddAnimationEnds;
- (id)annotationsToRemoveWhenAddAnimationStarts;
- (id)animationOnlyAnnotations;
- (void)dealloc;
- (id)description;

@end

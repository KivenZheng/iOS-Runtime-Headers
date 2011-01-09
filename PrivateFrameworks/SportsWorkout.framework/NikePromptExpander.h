/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class Parser;



@interface NikePromptExpander : NSObject 
{
    Parser *numberParser;
    Parser *preParser;
    Parser *postParser;
}

+ (id)translatedUnit:(id)arg1;
+ (void)initialize;

- (id)stringArrayForDecimalNumber:(id)arg1;
- (id)_slotForUnitString:(id)arg1 number:(id)arg2;
- (id)wordsForPromptCalled:(id)arg1 withNumber:(id)arg2 units:(id)arg3;
- (void)setUpWithLanguage:(id)arg1;
- (id)allWordsForPromptCalled:(id)arg1 withNumber:(id)arg2 units:(id)arg3;
- (id)init;

@end

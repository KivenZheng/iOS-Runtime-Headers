/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIKeyboardEmojiGraphics : NSObject 
{
    struct UIKBTheme { } *_categoryTheme;
    struct UIKBTheme { } *_categorySelectedTheme;
    struct UIKBTheme { } *_controlTheme;
    struct UIKBTheme { } *_controlPressedTheme;
    struct UIKBTheme { } *_dividerTheme;
    struct UIKBTheme { } *_darkDividerTheme;
    struct UIKBTheme { } *_selectedDividerTheme;
    struct UIKBTheme { } *_backgroundTheme;
    struct CGColor { } *_selectedDividerStart;
    struct CGGradient { } *_darkDividerGradient;
    struct CGGradient { } *_selectedGradient;
    struct CGGradient { } *_selectedDividerGradient;
    struct CGGradient { } *_backgroundGradient;
}

+ (void)mapImagesIfNecessary;
+ (id)emojiWithName:(id)arg1;
+ (id)imageWithName:(id)arg1 pressed:(BOOL)arg2;
+ (id)sharedInstance;
+ (void)_initializeSafeCategory;

- (void)releaseThemes;
- (void)initializeThemes;
- (BOOL)isLandscape;
- (id)generateImageNamed:(id)arg1 pressed:(BOOL)arg2;
- (void)drawTopEdgeInContext:(struct CGContext { }*)arg1 withTheme:(struct UIKBTheme { }*)arg2;
- (id)dividerWithTheme:(struct UIKBTheme { }*)arg1;
- (id)dividerGenerator:(id)arg1;
- (id)darkDividerGenerator:(id)arg1;
- (id)selectedDividerGenerator:(id)arg1;
- (id)categoryWithSymbol:(id)arg1 pressed:(id)arg2;
- (id)categoryRecentsGenerator:(id)arg1;
- (id)categoryPeopleGenerator:(id)arg1;
- (id)categoryNatureGenerator:(id)arg1;
- (id)categoryObjectsGenerator:(id)arg1;
- (id)categoryPlacesGenerator:(id)arg1;
- (id)categorySymbolsGenerator:(id)arg1;
- (id)controlWithSymbol:(id)arg1 corners:(NSInteger)arg2 padding:(struct CGSize { float x1; float x2; })arg3 generator:(id)arg4;
- (id)controlInternationalGenerator:(id)arg1;
- (id)controlDeleteGenerator:(id)arg1;
- (id)pageIndicatorGenerator:(id)arg1;
- (id)pageIndicatorCurrentGenerator:(id)arg1;
- (id)backgroundGradientGenerator:(id)arg1;
- (id)init;
- (void)dealloc;

@end

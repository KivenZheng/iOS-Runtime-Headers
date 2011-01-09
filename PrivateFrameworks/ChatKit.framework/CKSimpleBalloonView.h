/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString;



@interface CKSimpleBalloonView : CKBalloonView 
{
    NSString *_text;
}

+ (BOOL)showsSubject;
+ (float)minimumBubbleHeight;
+ (float)heightForText:(id)arg1 width:(float)arg2 includeBuffers:(BOOL)arg3;
+ (void)_initializeSafeCategory;

- (void)prepareForReuse;
- (void)setText:(id)arg1;
- (id)text;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setMessagePart:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })subjectBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textBounds;
- (id)subject;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;

@end

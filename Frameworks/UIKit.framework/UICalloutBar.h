/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UICalloutBarOverlay, NSDictionary, NSMutableArray;



@interface UICalloutBar : UIView 
{
    id m_delegate;
    struct CGPoint { 
        float x; 
        float y; 
    } m_pointBelowControls;
    struct CGPoint { 
        float x; 
        float y; 
    } m_pointAboveControls;
    struct CGPoint { 
        float x; 
        float y; 
    } m_targetPoint;
    NSInteger m_targetDirection;
    BOOL m_fadeAfterCommand;
    BOOL m_updateVisibleItems;
    BOOL m_shouldAppear;
    BOOL m_showExtras;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_controlFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_targetRect;
    NSInteger m_arrowDirection;
    NSMutableArray *m_buttons;
    NSMutableArray *m_rectsToEvade;
    UICalloutBarOverlay *m_overlay;
    double m_fadedTime;
    id m_responderTarget;
    NSArray *m_replacements;
    NSDictionary *m_replacementDictionary;
    NSArray *m_extraItems;
}

@property(readonly) BOOL visible;
@property(copy) NSArray *extraItems;
@property(copy) NSDictionary *replacementDictionary;
@property(copy) NSArray *replacements;
@property UIResponder *responderTarget;
@property NSInteger arrowDirection;
@property CGRect targetRect;
@property(readonly) NSArray *rectsToEvade;
@property id delegate;
@property CGRect controlFrame;
@property NSInteger targetDirection;
@property CGPoint targetPoint;
@property CGPoint pointBelowControls;
@property CGPoint pointAboveControls;

+ (void)_releaseSharedInstance;
+ (id)activeCalloutBar;
+ (BOOL)sharedCalloutBarIsVisible;
+ (id)sharedCalloutBar;
+ (void)fadeSharedCalloutBar;
+ (void)hideSharedCalloutBar;
+ (void)_initializeSafeCategory;

- (void)setReplacements:(id)arg1;
- (void)setReplacementDictionary:(id)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 arrowDirection:(NSInteger)arg2;
- (struct CGPoint { float x1; float x2; })pointBelowControls;
- (id)rectsToEvade;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (id)replacementDictionary;
- (void)flattenForAlertOrResignActive:(id)arg1;
- (void)expandAfterAlertOrBecomeActive:(id)arg1;
- (id)targetForAction:(SEL)arg1;
- (void)buttonPressed:(id)arg1;
- (void)_showMoreItems:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textEffectsWindowBoundsWithoutStatusBar;
- (BOOL)rectClear:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)calculateControlFrameForPointBelowControls:(float)arg1;
- (BOOL)calculateControlFrameForPointAboveControls:(float)arg1;
- (BOOL)calculateControlFrameInsideTargetRect:(float)arg1;
- (id)visibleButtons;
- (BOOL)positionIsValid;
- (BOOL)_updateVisibleItems;
- (void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2;
- (BOOL)recentlyFaded;
- (void)appearAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)extraItems;
- (void)setExtraItems:(id)arg1;
- (id)replacements;
- (id)responderTarget;
- (NSInteger)arrowDirection;
- (void)setArrowDirection:(NSInteger)arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlFrame;
- (void)setControlFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)targetDirection;
- (void)setTargetDirection:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })targetPoint;
- (void)setTargetPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPointBelowControls:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointAboveControls;
- (void)setPointAboveControls:(struct CGPoint { float x1; float x2; })arg1;
- (NSInteger)textEffectsVisibilityLevel;
- (void)clearEvadeRects;
- (void)addRectToEvade:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pointBelowControls:(struct CGPoint { float x1; float x2; })arg2 pointAboveControls:(struct CGPoint { float x1; float x2; })arg3;
- (void)appear;
- (void)clearReplacements;
- (BOOL)visible;
- (void)setResponderTarget:(id)arg1;
- (void)fade;
- (BOOL)hasReplacements;
- (void)hide;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

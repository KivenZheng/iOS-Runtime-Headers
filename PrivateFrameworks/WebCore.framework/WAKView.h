/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet;



@interface WAKView : WAKResponder 
{
    struct _WKViewContext { 
        int (*drawCallback)(); 
        void *drawUserInfo; 
        int (*eventCallback)(); 
        void *eventUserInfo; 
        int (*notificationCallback)(); 
        void *notificationUserInfo; 
        int (*layoutCallback)(); 
        void *layoutUserInfo; 
        int (*responderCallback)(); 
        void *responderUserInfo; 
        int (*hitTestCallback)(); 
        void *hitTestUserInfo; 
        int (*willRemoveSubviewCallback)(); 
        int (*invalidateGStateCallback)(); 
    } viewContext;

  /* Error parsing encoded ivar type info: ^{WKView={_WKObject="referenceCount"I"classInfo"^{_WKClassInfo}}^{_WKViewContext}^{WKWindow}^{WKView}^{__CFArray}{CGPoint="x"f"y"f}{CGRect="origin"{CGPoint="x"f"y"f}"size"{CGSize="width"f"height"f}}b1IfB} */
    struct WKView { struct _WKObject { 
            NSUInteger referenceCount; 
            struct _WKClassInfo {} *classInfo; 
        } x1; struct _WKViewContext {} *x2; struct WKWindow {} *x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { 
            float x; 
            float y; 
        } x6; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x7; unsigned int x8 : 1; NSUInteger x9; float x10; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x11; } *viewRef;

    NSMutableSet *subviewReferences;
}

+ (id)focusView;
+ (struct __CFDictionary { }*)_viewWrappers;
+ (void)_addViewWrapper:(id)arg1;
+ (void)_removeViewWrapper:(id)arg1;
+ (id)_wrapperForViewRef:(struct WKView { struct _WKObject { NSUInteger x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; struct WKWindow {} *x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; unsigned int x8 : 1; NSUInteger x9; float x10; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x11; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{WKView={_WKObject=I^{_WKClassInfo}}^{_WKViewContext}^{WKWindow}^{WKView}^{__CFArray}{CGPoint=ff}{CGRect={CGPoint=ff}{CGSize=ff}}b1IfB}8 */


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)layoutIfNeeded;
- (void)setScale:(float)arg1;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 toView:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)lastScrollableAncestor;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layout;
- (void)setHidden:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)viewDidMoveToWindow;
- (void)invalidateGState;
- (struct WKView { struct _WKObject { NSUInteger x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; struct WKWindow {} *x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; unsigned int x8 : 1; NSUInteger x9; float x10; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x11; }*)_viewRef;
     /* Encoded args for previous method: ^{WKView={_WKObject=I^{_WKClassInfo}}^{_WKViewContext}^{WKWindow}^{WKView}^{__CFArray}{CGPoint=ff}{CGRect={CGPoint=ff}{CGSize=ff}}b1IfB}8@0:4 */

- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)nextResponder;
- (id)init;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (void)displayIfNeeded;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (NSUInteger)autoresizingMask;
- (id)subviews;
- (void)removeFromSuperview;
- (void)willRemoveSubview:(id)arg1;
- (BOOL)needsDisplay;
- (void)setFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (float)scale;
- (void)setAutoresizingMask:(NSUInteger)arg1;
- (void)addSubview:(id)arg1;
- (id)superview;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (id)window;
- (void)setBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (void)displayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)lockFocus;
- (void)unlockFocus;
- (BOOL)mouse:(struct CGPoint { float x1; float x2; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)needsPanelToBecomeKey;
- (void)setNextKeyView:(id)arg1;
- (id)previousValidKeyView;
- (id)nextKeyView;
- (id)nextValidKeyView;
- (id)previousKeyView;
- (void)releaseGState;
- (BOOL)inLiveResize;
- (void)_setDrawsOwnDescendants:(BOOL)arg1;
- (void)frameSizeChanged;
- (void)_handleEvent:(id)arg1;
- (BOOL)_handleResponderCall:(NSInteger)arg1;
- (id)_initWithViewRef:(struct WKView { struct _WKObject { NSUInteger x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; struct _WKViewContext {} *x2; struct WKWindow {} *x3; struct WKView {} *x4; struct __CFArray {} *x5; struct CGPoint { float x_6_1_1; float x_6_1_2; } x6; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_7_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_7_1_2; } x7; unsigned int x8 : 1; NSUInteger x9; float x10; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x11; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{WKView={_WKObject=I^{_WKClassInfo}}^{_WKViewContext}^{WKWindow}^{WKView}^{__CFArray}{CGPoint=ff}{CGRect={CGPoint=ff}{CGSize=ff}}b1IfB}8 */

- (id)_subviewReferences;
- (void)viewWillDraw;
- (BOOL)isDescendantOf:(id)arg1;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)display;
- (BOOL)accessibilityIsIgnored;
- (void)_web_addDescendantWebHTMLViewsToArray:(id)arg1;
- (id)_webView;
- (id)_frame;
- (BOOL)_web_firstResponderIsSelfOrDescendantView;
- (id)_web_superviewOfClass:(Class)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_web_convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)_web_parentWebFrameView;

@end

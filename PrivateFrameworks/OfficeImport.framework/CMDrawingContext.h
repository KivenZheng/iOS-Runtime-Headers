/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSAffineTransform;



@interface CMDrawingContext : NSObject 
{
    NSMutableArray *_actions;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _finalFrame;
    struct __CFData { } *_data;
    struct CGDataConsumer { } *_dataConsumer;
    struct CGContext { } *_cgContext;
    NSAffineTransform *_currentTransform;
    NSMutableArray *_transforms;
}


- (void)setFillColor:(struct CGColor { }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)dealloc;
- (void)setLineWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pdfFrame;
- (void)_createCGContext;
- (void)_closeContext;
- (float)currentScaleFactor;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })currentTransform;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (void)setLineDash:(id)arg1;
- (void)addDebugPath:(struct CGPath { }*)arg1;
- (void)addPath:(struct CGPath { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTransform:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRectToPage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_playbackActions;
- (void)_applyTransform:(id)arg1;
- (void)_addTransform:(id)arg1;
- (void)_restoreLastTransform;
- (struct CGContext { }*)_cgContext;
- (id)createPDF;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRectToGroup:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)restoreLastTransform;
- (void)addTransform:(id)arg1;

@end

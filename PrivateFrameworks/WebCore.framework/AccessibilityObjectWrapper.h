/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AccessibilityObjectWrapper;



@interface AccessibilityObjectWrapper : NSObject 
{

  /* Error parsing encoded ivar type info: ^{AccessibilityObject=^^?iI{Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>="m_size"I"m_buffer"{VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>="m_buffer"^{RefPtr<WebCore::AccessibilityObject>}"m_capacity"I}}Bi{RetainPtr<AccessibilityObjectWrapper>="m_ptr"@"AccessibilityObjectWrapper"}} */
    struct AccessibilityObject { int (**x1)(); NSInteger x2; NSUInteger x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { 
                struct RefPtr<WebCore::AccessibilityObject> {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; NSInteger x6; struct RetainPtr<AccessibilityObjectWrapper> { 
            AccessibilityObjectWrapper *m_ptr; 
        } x7; } *m_object;

    NSInteger m_isAccessibilityElement;
    unsigned long long m_accessibilityTraitsFromAncestor;
    id m_accessibilityWebDocumentView;
}

+ (void)_initializeSafeCategory;

- (void)detach;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityContainer;
- (id)accessibilityLanguage;
- (void)accessibilityElementDidBecomeFocused;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)stringForRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)dealloc;
- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); NSInteger x2; NSUInteger x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; NSInteger x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{AccessibilityObject=^^?iI{Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=^{RefPtr<WebCore::AccessibilityObject>}I}}Bi{RetainPtr<AccessibilityObjectWrapper>=@}}8 */

- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityListAncestor;
- (id)_accessibilityLandmarkAncestor;
- (id)_accessibilityTableAncestor;
- (id)accessibilityURL;
- (id)accessibilityFocusedUIElement;
- (void)_accessibilityActivate;
- (id)_accessibilityParentForSubview:(id)arg1;
- (void)postFocusChangeNotification;
- (void)postSelectedTextChangeNotification;
- (void)postLayoutChangeNotification;
- (void)accessibilityIncreaseSelection:(NSInteger)arg1;
- (void)accessibilityDecreaseSelection:(NSInteger)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })elementTextRange;
- (id)accessibilityObjectForTextMarker:(id)arg1;
- (id)elementsForRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)selectionRangeString;
- (id)selectedTextMarker;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (id)previousMarkerForMarker:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForTextMarkers:(id)arg1;
- (id)textMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilitySetPostedNotificationCallback:(int (*)())arg1 withContext:(void*)arg2;
- (void)accessibilityPostedNotification:(NSInteger)arg1;
- (struct AccessibilityObject { int (**x1)(); NSInteger x2; NSUInteger x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; NSInteger x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; }*)accessibilityObject;
     /* Encoded args for previous method: ^{AccessibilityObject=^^?iI{Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=^{RefPtr<WebCore::AccessibilityObject>}I}}Bi{RetainPtr<AccessibilityObjectWrapper>=@}}8@0:4 */

- (BOOL)isAttachment;
- (BOOL)_prepareAccessibilityCall;
- (BOOL)_accessibilityIsLandmarkRole:(NSInteger)arg1;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (BOOL)containsUnnaturallySegmentedChildren;
- (BOOL)determineIsAccessibilityElement;
- (id)_accessibilityWebDocumentView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertIntRectToScreenCoordinates:(struct IntRect { struct IntPoint { NSInteger x_1_1_1; NSInteger x_1_1_2; } x1; struct IntSize { NSInteger x_2_1_1; NSInteger x_2_1_2; } x2; })arg1;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1;
- (void)accessibilityModifySelection:(NSInteger)arg1 increase:(BOOL)arg2;
- (BOOL)_addAccessibilityObject:(struct AccessibilityObject { int (**x1)(); NSInteger x2; NSUInteger x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { NSUInteger x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; NSUInteger x_2_2_2; } x_4_1_2; } x4; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x5; NSInteger x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; }*)arg1 toTextMarkerArray:(id)arg2;
     /* Encoded args for previous method: c16@0:4^{AccessibilityObject=^^?iI{Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=I{VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul>=^{RefPtr<WebCore::AccessibilityObject>}I}}Bi{RetainPtr<AccessibilityObjectWrapper>=@}}8@12 */

- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_convertToNSRange:(struct Range { NSInteger x1; struct RefPtr<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; NSInteger x_3_1_2; struct Node {} *x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; NSInteger x_4_1_2; struct Node {} *x_4_1_3; } x4; }*)arg1;
- (id)textMarkerRange;
- (NSInteger)positionForTextMarker:(id)arg1;
- (struct PassRefPtr<WebCore::Range> { struct Range {} *x1; })_convertToDOMRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)textMarkerForPosition:(NSInteger)arg1;
- (id)arrayOfTextForTextMarkers:(id)arg1;
- (id)textMarkerRangeForSelection;
- (id)stringForTextMarkers:(id)arg1;
- (id)attachmentView;
- (void)_accessibilityModifySelection:(id)arg1 increase:(BOOL)arg2;
- (BOOL)_isCheckBox;
- (id)_accessibilityLinePosition:(BOOL)arg1 withMarker:(id)arg2;
- (id)_accessibilityMarkerPosition:(BOOL)arg1 withMarker:(id)arg2;
- (id)_accessibilityConvertTextMarkersToDataArray:(id)arg1;
- (id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1;
- (id)_accessibilityAncestorForSiblings;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (BOOL)_accessibilityIsLastSibling;
- (BOOL)_accessibilityIsFirstSibling;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (id)_accessibilityTextMarkerRangeForSelection;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)description;

@end

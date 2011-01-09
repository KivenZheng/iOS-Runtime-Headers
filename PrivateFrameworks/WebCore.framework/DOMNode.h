/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMNode : DOMObject <DOMEventTarget, UIKeyboardInput, UIWebSelectionBlock>
{
}

@property NSInteger selectionAffinity;
@property(readonly) UIView *textInputView;
@property(readonly) <UITextInputTokenizer> *tokenizer;
@property <UITextInputDelegate> *inputDelegate;
@property(readonly) UITextPosition *endOfDocument;
@property(readonly) UITextPosition *beginningOfDocument;
@property(copy) NSDictionary *markedTextStyle;
@property(readonly) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger returnKeyType;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger autocorrectionType;
@property NSInteger autocapitalizationType;
@property BOOL returnKeyGoesToNextResponder;
@property NSInteger emptyContentReturnKeyType;
@property BOOL acceptsEmoji;
@property BOOL contentsIsSingleValue;
@property id textSuggestionDelegate;
@property NSInteger textSelectionBehavior;
@property NSInteger textLoupeVisibility;
@property NSUInteger insertionPointWidth;
@property(retain) UIColor *insertionPointColor;
@property __CFCharacterSet *textTrimmingSet;
@property(getter=isEditing,readonly) BOOL editing;
@property(getter=isEditable,readonly) BOOL editable;
@property(readonly) UIView<UITextSelectingContent> *content;
@property(readonly) UITextInteractionAssistant *interactionAssistant;
@property(readonly) UITextSelectionView *selectionView;
@property(copy,readonly) NSString *nodeName;
@property(copy) NSString *nodeValue;
@property(readonly) unsigned short nodeType;
@property(retain,readonly) DOMNode *parentNode;
@property(retain,readonly) DOMNodeList *childNodes;
@property(retain,readonly) DOMNode *firstChild;
@property(retain,readonly) DOMNode *lastChild;
@property(retain,readonly) DOMNode *previousSibling;
@property(retain,readonly) DOMNode *nextSibling;
@property(retain,readonly) DOMNamedNodeMap *attributes;
@property(retain,readonly) DOMDocument *ownerDocument;
@property(copy,readonly) NSString *namespaceURI;
@property(copy) NSString *prefix;
@property(copy,readonly) NSString *localName;
@property(copy,readonly) NSString *baseURI;
@property(copy) NSString *textContent;
@property(retain,readonly) DOMElement *parentElement;
@property(readonly) BOOL isContentEditable;


- (id)nextFocusNode;
- (id)previousFocusNode;
- (float)computedFontSize;
- (id)attributes;
- (id)parentNode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (BOOL)isSelectableBlock;
- (BOOL)containsOnlyInlineObjects;
- (id)rangeOfContainingParagraph;
- (id)previousSibling;
- (float)textHeight;
- (id)findExplodedTextNodeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)parentElement;
- (id)absoluteQuads;
- (BOOL)isSameNode:(id)arg1;
- (id)borderRadii;
- (id)hrefURL;
- (id)ownerDocument;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })innerFrameQuad;
- (BOOL)isContentEditable;
- (id)childNodes;
- (id)appendChild:(id)arg1;
- (id)hrefLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingFrame;
- (void)finalize;
- (struct _WKQuad { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })absoluteQuad;
- (id)lastChild;
- (id)firstChild;
- (unsigned short)nodeType;
- (id)nextSibling;
- (BOOL)hasChildNodes;
- (void)dealloc;
- (id)description;
- (id)removeChild:(id)arg1;
- (void)normalize;
- (id)localName;
- (id)namespaceURI;
- (id)nodeValue;
- (id)boundingBoxes;
- (id)lineBoxRects;
- (id)textContent;
- (id)baseURI;
- (id)nodeName;
- (void)setNodeValue:(id)arg1;
- (id)prefix;
- (void)setPrefix:(id)arg1;
- (void)setTextContent:(id)arg1;
- (id)insertBefore:(id)arg1 refChild:(id)arg2;
- (id)insertBefore:(id)arg1 :(id)arg2;
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;
- (id)replaceChild:(id)arg1 :(id)arg2;
- (id)cloneNode:(BOOL)arg1;
- (BOOL)isSupported:(id)arg1 version:(id)arg2;
- (BOOL)isSupported:(id)arg1 :(id)arg2;
- (BOOL)hasAttributes;
- (BOOL)isEqualNode:(id)arg1;
- (id)lookupPrefix:(id)arg1;
- (BOOL)isDefaultNamespace:(id)arg1;
- (unsigned short)compareDocumentPosition:(id)arg1;
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(BOOL)arg3;
- (BOOL)dispatchEvent:(id)arg1;
- (void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3;
- (id)lookupNamespaceURI:(id)arg1;
- (struct RootObject { }*)_rootObject;
- (id)lineBoxQuads;
- (id)hrefTarget;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hrefFrame;
- (id)hrefTitle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })innerFrame;
- (id)textRects;
- (struct Element { int (**x1)(); int (**x2)(); NSInteger x3; struct Node {} *x4; struct Document {} *x5; struct Node {} *x6; struct Node {} *x7; struct RenderObject {} *x8; unsigned int x9 : 2; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; struct Node {} *x30; struct Node {} *x31; struct QualifiedName { struct QualifiedNameImpl {} *x_32_1_1; } x32; struct RefPtr<WebCore::NamedNodeMap> { struct NamedNodeMap {} *x_33_1_1; } x33; }*)_linkElement;
- (id)_subresourceURLs;
- (id)webArchive;
- (id)markupString;
- (id)startPosition;
- (id)endPosition;
- (id)rangeOfContents;
- (id)createSelectedItem;
- (id)createPickerCell;
- (void)populateCell:(id)arg1;
- (id)itemTitle;
- (id)createPeripheral;
- (id)urlScheme;
- (id)tagName;
- (BOOL)isAutoFillMode;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (BOOL)hasContent;
- (struct __CFCharacterSet { }*)textTrimmingSet;
- (void)detachSelectionView;
- (id)automaticallySelectedOverlay;
- (BOOL)hasSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (id)wordContainingCaretSelection;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateAutoscroll:(id)arg1;
- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)contentsIsSingleValue;
- (id)beginningOfDocument;
- (void)takeTraitsFrom:(id)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (unsigned short)characterBeforeCaretSelection;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (BOOL)selectionAtDocumentStart;
- (void)selectAll;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1 inset:(float)arg2;
- (BOOL)isShowingPlaceholder;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setReturnKeyType:(NSInteger)arg1;
- (NSInteger)initialSelectionBehavior;
- (void)setInitialSelectionBehavior:(NSInteger)arg1;
- (id)editingDelegate;
- (void)updateSelection;
- (void)moveRight;
- (void)moveLeft;
- (void)moveUp;
- (void)moveDown;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (id)content;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (unsigned short)characterInRelationToCaretSelection:(NSInteger)arg1;
- (unsigned short)characterAfterCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (id)wordRangeContainingCaretSelection;
- (BOOL)shouldEnableAutoShift;
- (NSInteger)wordOffsetInRange:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectionRange;
- (id)rangeByMovingCurrentSelection:(NSInteger)arg1;
- (id)rangeByExtendingCurrentSelection:(NSInteger)arg1;
- (void)extendCurrentSelection:(NSInteger)arg1;
- (void)moveForward:(NSUInteger)arg1;
- (BOOL)requiresKeyEvents;
- (BOOL)isEditable;
- (void)detachInteractionAssistant;
- (NSInteger)selectionState;
- (id)selectedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (id)markedTextRange;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (id)textInRange:(id)arg1;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)positionFromPosition:(id)arg1 offset:(NSInteger)arg2;
- (void)setBaseWritingDirection:(NSInteger)arg1 forRange:(id)arg2;
- (void)replaceRangeWithText:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 replacementText:(id)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)selectionAtWordStart;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSecure:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (BOOL)isPosition:(id)arg1 atBoundary:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(NSInteger)arg2 inDirection:(NSInteger)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(NSInteger)arg2 offset:(NSInteger)arg3;
- (NSInteger)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(NSInteger)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(NSInteger)arg2;
- (NSInteger)baseWritingDirectionForPosition:(id)arg1 inDirection:(NSInteger)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)endOfDocument;
- (id)markedTextStyle;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (id)interactionAssistant;
- (void)beginSelectionChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)wordInRange:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setMarkedText:(id)arg1;
- (id)fontForCaretSelection;
- (void)unmarkText;
- (NSInteger)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)deleteBackward;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (void)moveBackward:(NSUInteger)arg1;
- (id)textSuggestionDelegate;
- (void)handleKeyWebEvent:(id)arg1;
- (id)markedText;
- (BOOL)hasText;
- (void)setText:(id)arg1;
- (id)selectedDOMRange;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (id)textInputTraits;
- (BOOL)isEditing;
- (BOOL)becomesEditableWithGestures;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)endSelectionChange;
- (void)setEditingDelegate:(id)arg1;
- (id)textColorForCaretSelection;
- (id)text;
- (NSInteger)returnKeyType;
- (void)setTextLoupeVisibility:(NSInteger)arg1;
- (NSInteger)textLoupeVisibility;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_markedTextNSRange;
- (id)inputDelegate;
- (id)selectionView;
- (void)insertText:(id)arg1;
- (id)delegate;
- (BOOL)isTextControl;
- (BOOL)isSecure;
- (NSInteger)keyboardType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (id)_realNode;
- (BOOL)nodeCanBecomeFirstResponder;
- (id)absoluteQuadsAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)touchCalloutEnabled;
- (BOOL)isLikelyToBeginPageLoad;
- (BOOL)showsTapHighlight;
- (id)tapHighlightColor;
- (BOOL)containsNode:(id)arg1;
- (BOOL)strictlyContainsNode:(id)arg1;
- (id)asElement;
- (id)enclosingElementIncludingSelf;
- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withDescentDirection:(NSInteger)arg2;
- (id)firstDescendantOfAboutTheSameWidthOrHeight;
- (id)lastDescendantOfAboutTheSameWidthOrHeight;
- (id)parentBlock;
- (BOOL)isSameBlock:(id)arg1;
- (id)asDomRange;
- (BOOL)hasCustomLineHeight;
- (BOOL)selectable;
- (BOOL)canShrinkDirectlyToTextOnly;
- (id)enclosingDocument;
- (id)rangeOfContents;
- (BOOL)containsBlock:(id)arg1;
- (id)asDomNode;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (id)largerParent;
- (BOOL)rendersAsBlock;
- (BOOL)containsRange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (id)webFrame;
- (id)textInputView;
- (id)_nextAssistedNode;
- (id)_previousAssistedNode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_ensureVisibleRectForFrame:(id)arg1;
- (void)_startAssistingDocumentView:(id)arg1;
- (void)_stopAssistingDocumentView:(id)arg1;
- (BOOL)_isAssistable;
- (BOOL)_requiresAccessoryView;
- (BOOL)_requiresInputView;
- (BOOL)_supportsAutoFill;
- (id)_textFormElement;
- (NSInteger)mf_quoteLevelDelta;
- (void)recursivelyRemoveMailAttributes;
- (void)_fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (void)mf_fixParagraphsAndQuotesFromMicrosoft;
- (id)mf_commonAncestorWithNode:(id)arg1;
- (BOOL)mf_isQuoteOrWithinQuote;
- (BOOL)mf_containsRichText;
- (BOOL)dd_isLinkNode;
- (BOOL)dd_searchForLinkEndNode:(id)arg1;

@end

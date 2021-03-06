/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

#import "NSCoding-Protocol.h"
#import "UIKeyboardInput-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITextInput-Protocol.h"
#import "UITextInputTraits_Private-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSString, UIButton, UIColor, UIFont, UIImage, UIImageView, UILabel, UITextFieldAtomBackgroundView, UITextFieldBackgroundView, UITextFieldBorderView, UITextFieldLabel, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UIBaselineLayoutStrut, _UICascadingTextStorage;

@interface UITextField : UIControl <UIKeyboardInput, UITextInputTraits_Private, UIPopoverControllerDelegate, UITextInput, NSCoding>
{
    _UICascadingTextStorage *_textStorage;
    int _borderStyle;
    float _minimumFontSize;
    id _delegate;
    UIImage *_background;
    UIImage *_disabledBackground;
    int _clearButtonMode;
    UIView *_leftView;
    int _leftViewMode;
    UIView *_rightView;
    int _rightViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    float _fullFontSize;
    struct UIEdgeInsets _padding;
    struct _NSRange _selectionRangeWhenNotEditing;
    int _scrollXOffset;
    int _scrollYOffset;
    float _progress;
    UIButton *_clearButton;
    struct CGSize _clearButtonOffset;
    struct CGSize _leftViewOffset;
    struct CGSize _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    UITextFieldLabel *_displayLabel;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    float _labelOffset;
    UITextInteractionAssistant *_interactionAssistant;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    struct {
        unsigned int verticallyCenterText:1;
        unsigned int isAnimating:4;
        unsigned int inactiveHasDimAppearance:1;
        unsigned int becomesFirstResponderOnClearButtonTap:1;
        unsigned int clearsPlaceholderOnBeginEditing:1;
        unsigned int adjustsFontSizeToFitWidth:1;
        unsigned int fieldEditorAttached:1;
        unsigned int canBecomeFirstResponder:1;
        unsigned int shouldSuppressShouldBeginEditing:1;
        unsigned int inResignFirstResponder:1;
        unsigned int undoDisabled:1;
        unsigned int explicitAlignment:1;
        unsigned int implementsCustomDrawing:1;
        unsigned int needsClearing:1;
        unsigned int suppressContentChangedNotification:1;
        unsigned int allowsEditingTextAttributes:1;
        unsigned int usesAttributedText:1;
        unsigned int backgroundViewState:2;
        unsigned int clearingBehavior:2;
    } _textFieldFlags;
    BOOL _deferringBecomeFirstResponder;
    BOOL _avoidBecomeFirstResponder;
    BOOL _setSelectionRangeAfterFieldEditorIsAttached;
    NSArray *_baselineLayoutConstraints;
    _UIBaselineLayoutStrut *_baselineLayoutLabel;
    NSDictionary *_defaultTextAttributes;
}

+ (void)_preheatDictationIfNecessary;
+ (BOOL)_isDisplayingShortcutViewController;
+ (BOOL)_isCompatibilityTextField;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(retain) UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) int rightViewMode; // @synthesize rightViewMode=_rightViewMode;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) int leftViewMode; // @synthesize leftViewMode=_leftViewMode;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) int clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(retain, nonatomic) UIImage *disabledBackground; // @synthesize disabledBackground=_disabledBackground;
@property(retain, nonatomic) UIImage *background; // @synthesize background=_background;
@property(nonatomic) id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float minimumFontSize; // @synthesize minimumFontSize=_minimumFontSize;
@property(nonatomic) int borderStyle; // @synthesize borderStyle=_borderStyle;
@property(retain, nonatomic, setter=_setBaselineLayoutLabel:) _UIBaselineLayoutStrut *_baselineLayoutLabel; // @synthesize _baselineLayoutLabel;
@property(copy, nonatomic, setter=_setBaselineLayoutConstraints:) NSArray *_baselineLayoutConstraints; // @synthesize _baselineLayoutConstraints;
- (id)_backgroundView;
- (id)_systemBackgroundView;
- (void)setContinuousSpellCheckingEnabled:(BOOL)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (void)_startDictation;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)_textInputViewForAddingGestureRecognizers;
@property(readonly, nonatomic) UIView *textInputView;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;
- (id)_inputController;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)_inPopover;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)_addShortcut:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)_selectionMayChange:(id)arg1;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (void)_define:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)_proxyTextInput;
- (void)layoutTilesNow;
- (id)webView;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (id)selectedAttributedText;
- (id)selectedText;
- (struct CGRect)_selectionClipRect;
- (id)interactionAssistant;
- (id)selectionView;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (BOOL)hasSelection;
- (id)_fieldEditor;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (BOOL)_useGesturesForEditableContent;
- (BOOL)isEditable;
- (struct CGPoint)_originForTextFieldLabel:(id)arg1;
- (id)undoManager;
- (int)atomStyle;
- (void)setAtomStyle:(int)arg1;
- (BOOL)drawsAsAtom;
- (void)setDrawsAsAtom:(BOOL)arg1;
- (void)setClearButtonOffset:(struct CGSize)arg1;
- (void)_clearButtonClicked:(id)arg1;
- (BOOL)isUndoEnabled;
- (void)setUndoEnabled:(BOOL)arg1;
- (void)setTextCentersVertically:(BOOL)arg1;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (id)textLabel;
- (void)setLabelOffset:(float)arg1;
- (BOOL)hasMarkedText;
- (void)setProgress:(float)arg1;
- (struct CGRect)iconRect;
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1;
- (struct CGSize)clearButtonOffset;
- (void)setIcon:(id)arg1;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint)arg1;
- (void)setSelectionRange:(struct _NSRange)arg1;
- (struct _NSRange)selectionRange;
- (void)clearText;
- (void)_resetSelectionUI;
- (void)_clearSelectionUI;
- (void)selectAll;
- (void)setEnabled:(BOOL)arg1;
- (void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setInactiveHasDimAppearance:(BOOL)arg1;
- (float)paddingRight;
- (void)setPaddingRight:(float)arg1;
- (float)paddingBottom;
- (void)setPaddingBottom:(float)arg1;
- (float)paddingTop;
- (void)setPaddingTop:(float)arg1;
- (float)paddingLeft;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_canDrawContent;
- (BOOL)_implementsCustomDrawing;
- (struct CGRect)editRect;
- (struct CGRect)textRect;
- (struct CGRect)clearButtonRect;
- (void)setClearButtonStyle:(int)arg1;
- (void)setTextAutorresizesToFit:(BOOL)arg1;
- (void)setAutoresizesTextToFit:(BOOL)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (id)_dictationInterpretations;
- (id)supportedPasteboardTypesForCurrentSelection;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (struct _NSRange)fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (void)selectAllFromFieldEditor:(id)arg1;
- (void)fieldEditorDidChange:(id)arg1;
- (id)customOverlayContainer;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)_applicationResuming:(id)arg1;
- (void)willDetachFieldEditor:(id)arg1;
- (void)attachFieldEditor:(id)arg1;
- (void)willAttachFieldEditor:(id)arg1;
- (void)_drawTextInRect:(struct CGRect)arg1 forLabel:(id)arg2;
- (void)drawPrefixInRect:(struct CGRect)arg1;
- (void)drawSuffixInRect:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)_frameForLabel:(id)arg1 inTextRect:(struct CGRect)arg2;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)borderRectForBounds:(struct CGRect)arg1;
- (BOOL)_hasSuffixField;
@property(retain) UIView *inputAccessoryView;
@property(readonly, nonatomic, getter=isEditing) BOOL editing;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSDictionary *typingAttributes;
@property(nonatomic) BOOL allowsEditingTextAttributes;
@property(nonatomic) BOOL adjustsFontSizeToFitWidth;
- (void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1;
- (BOOL)clearsPlaceholderOnBeginEditing;
@property(nonatomic) BOOL clearsOnBeginEditing;
- (void)_setPrefix:(id)arg1;
- (void)_updateSuffix:(id)arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (int)_suffixLabelTextAlignment;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property(copy, nonatomic) NSString *placeholder;
- (void)createPlaceholderIfNecessary;
- (void)finishedSettingPlaceholder;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)_createBaselineLayoutLabelIfNecessary;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(int)arg2;
- (Class)_placeholderLabelClass;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setDefaultAttributes:(id)arg1;
@property(nonatomic) int textAlignment;
@property(retain, nonatomic) UIFont *font;
- (void)disableClearsOnInsertion;
- (int)clearingBehavior;
- (void)setClearingBehavior:(int)arg1;
@property(nonatomic) BOOL clearsOnInsertion;
- (float)shadowBlur;
- (void)setShadowBlur:(float)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowOffset:(struct CGSize)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
@property(retain, nonatomic) UIColor *textColor;
- (void)_syncTypingAttributesWithDefaultAttribute:(id)arg1;
- (void)_updateAtomTextColor;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)_scrollRangeToVisible:(struct _NSRange)arg1 animated:(BOOL)arg2;
- (void)_sanitizeText:(id)arg1;
- (void)_setAttributedText:(id)arg1 onFieldEditorAndSetCaretSelectionAfterText:(BOOL)arg2;
@property(copy, nonatomic) NSString *text;
- (void)finishedSettingTextOrAttributedText;
- (id)searchText;
- (BOOL)_hasContent;
- (id)_attributedText;
- (id)_text;
- (BOOL)_shouldObscureInput;
@property(nonatomic) int keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry; // @dynamic secureTextEntry;
- (void)_updateTextLabel;
- (void)tintColorDidChange;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textInputTraits;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (id)_textLabelView;
- (id)_placeholderLabel;
- (id)_placeholderView;
- (id)_placeholderColor;
- (id)_disabledTextColor;
- (void)_setSystemBackgroundViewActive:(BOOL)arg1;
- (BOOL)_fieldEditorAttached;
- (Class)_systemBackgroundViewClass;
- (void)_setRightViewOffset:(struct CGSize)arg1;
- (struct CGSize)_rightViewOffset;
- (void)_setLeftViewOffset:(struct CGSize)arg1;
- (struct CGSize)_leftViewOffset;
- (struct CGPoint)_scrollOffset;
- (id)actualFont;
- (float)actualMinimumFontSize;
- (struct CGRect)adjustedCaretRectForCaretRect:(struct CGRect)arg1;
- (void)_clearBackgroundViews;
- (void)_updateBackgroundViewsAnimated:(BOOL)arg1;
- (BOOL)_shouldEndEditing;
- (void)layoutSubviews;
- (struct CGRect)_prefixFrame;
- (struct CGRect)_suffixFrame;
- (void)updateConstraints;
- (void)_setUpBaselineLayoutConstraints;
- (void)_updateLabel;
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(BOOL)arg2;
- (struct CGRect)_availableTextRectExcludingButtonsForBounds:(struct CGRect)arg1;
- (BOOL)_isShowingPrefix;
- (BOOL)_isShowingPlaceholder;
- (BOOL)_showsRightView;
- (BOOL)_showsLeftView;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1;
- (void)_updateAtomBackground;
- (BOOL)_showsAtomBackground;
- (BOOL)_partsShouldBeMini;
- (BOOL)_heightShouldBeMini;
- (struct CGRect)_atomBackgroundViewFrame;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateButtons;
- (id)_clearButton;
- (id)clearButton;
- (id)_clearButtonImageForState:(unsigned int)arg1;
- (void)_endedEditing;
- (float)_marginTop;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (id)automaticallySelectedOverlay;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resignFirstResponder;
- (void)_windowBecameKey;
- (BOOL)resignFirstResponder;
- (void)_becomeFirstResponder;
- (void)_updatePlaceholderPosition;
- (int)_currentTextAlignment;
- (void)__resumeBecomeFirstResponder;
- (void)_initialScrollDidFinish:(id)arg1;
- (void)_stopObservingFieldEditorScroll;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)_requiresKeyboardResetOnReload;
- (BOOL)canResignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (struct CGSize)_textSize;
- (struct CGSize)_textSizeUsingFullFontSize:(BOOL)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_sizeChanged:(BOOL)arg1;
- (void)_setNeedsStyleRecalc;
- (void)dealloc;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_invalidateBaselineLayoutConstraints;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (void)_updateForPasscodeAppearance;
- (BOOL)_isPasscodeStyle;
- (id)_scriptingInfo;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL acceptsEmoji;
@property(nonatomic) BOOL acceptsFloatingKeyboard;
@property(nonatomic) BOOL acceptsSplitKeyboard;
@property(nonatomic) int autocapitalizationType; // @dynamic autocapitalizationType;
@property(nonatomic) int autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) BOOL contentsIsSingleValue;
@property(nonatomic) BOOL deferBecomingResponder; // @dynamic deferBecomingResponder;
@property(nonatomic) BOOL displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) BOOL enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) BOOL forceEnableDictation;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned int insertionPointWidth;
@property(nonatomic) BOOL isSingleLineDocument;
@property(nonatomic) int keyboardType; // @dynamic keyboardType;
@property(nonatomic) BOOL learnsCorrections;
@property(nonatomic) BOOL returnKeyGoesToNextResponder;
@property(nonatomic) int returnKeyType; // @dynamic returnKeyType;
@property(nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) int spellCheckingType; // @dynamic spellCheckingType;
@property(nonatomic) BOOL suppressReturnKeyStyling;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
@property(nonatomic) BOOL useInterfaceLanguageForLocalization;

@end


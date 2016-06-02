//  
//  MLChain4UITextField.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIControl.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UITextField);
@interface MLChain4UITextField:MLChain4UIControl
@property (nonatomic, strong)UITextField *textField;
#ifndef progress
#define progress(...) progress(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)progress;

#ifndef attributes_range
#define attributes_range(...) attributes_range(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)attributes_range;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)enabled;

- (MLChainParamBlock4UITextField)delegate;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)bounds;

- (MLChainParamBlock4UITextField)layoutSubviews;

- (MLChainParamBlock4UITextField)traitCollectionDidChange;

#ifndef textAlignment
#define textAlignment(...) textAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)textAlignment;

- (MLChainParamBlock4UITextField)attributedText;

- (MLChainParamBlock4UITextField)touchesEnded_withEvent;

- (MLChainParamBlock4UITextField)touchesCancelled_withEvent;

- (MLChainParamBlock4UITextField)pressesBegan_withEvent;

- (MLChainParamBlock4UITextField)pressesEnded_withEvent;

- (MLChainParamBlock4UITextField)pressesCancelled_withEvent;

- (MLChainParamBlock4UITextField)increaseSize;

- (MLChainParamBlock4UITextField)decreaseSize;

- (MLChainParamBlock4UITextField)encodeRestorableStateWithCoder;

- (MLChainParamBlock4UITextField)decodeRestorableStateWithCoder;

- (MLChainParamBlock4UITextField)pressesChanged_withEvent;

- (MLChainParamBlock4UITextField)textColor;

- (MLChainParamBlock4UITextField)font;

- (MLChainParamBlock4UITextField)text;

- (MLChainParamBlock4UITextField)didUpdateFocusInContext_withAnimationCoordinator;

- (MLChainParamBlock4UITextField)tintColorDidChange;

- (MLChainParamBlock4UITextField)interactionTintColorDidChange;

- (MLChainParamBlock4UITextField)willMoveToWindow;

#ifndef highlighted
#define highlighted(...) highlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)highlighted;

#ifndef contentVerticalAlignment
#define contentVerticalAlignment(...) contentVerticalAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)contentVerticalAlignment;

#ifndef adjustsFontSizeToFitWidth
#define adjustsFontSizeToFitWidth(...) adjustsFontSizeToFitWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)adjustsFontSizeToFitWidth;

- (MLChainParamBlock4UITextField)keyboardInputChangedSelection;

- (MLChainParamBlock4UITextField)fieldEditorDidChange;

- (MLChainParamBlock4UITextField)selectAllFromFieldEditor;

- (MLChainParamBlock4UITextField)cancelAutoscroll;

- (MLChainParamBlock4UITextField)willDetachFieldEditor;

- (MLChainParamBlock4UITextField)typingAttributes;

- (MLChainParamBlock4UITextField)takeTraitsFrom;

- (MLChainParamBlock4UITextField)willAttachFieldEditor;

- (MLChainParamBlock4UITextField)attachFieldEditor;

- (MLChainParamBlock4UITextField)didAttachFieldEditor;

- (MLChainParamBlock4UITextField)selectedTextRange;

- (MLChainParamBlock4UITextField)clearText;

- (MLChainParamBlock4UITextField)deleteBackward;

- (MLChainParamBlock4UITextField)replaceRange_withText;

- (MLChainParamBlock4UITextField)replaceRangeWithTextWithoutClosingTyping_replacementText;

- (MLChainParamBlock4UITextField)markedTextStyle;

- (MLChainParamBlock4UITextField)unmarkText;

- (MLChainParamBlock4UITextField)inputDelegate;

#ifndef baseWritingDirection_forRange
#define baseWritingDirection_forRange(...) baseWritingDirection_forRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)baseWritingDirection_forRange;

- (MLChainParamBlock4UITextField)insertDictationResult_withCorrectionIdentifier;

#ifndef removeDictationResultPlaceholder_willInsertResult
#define removeDictationResultPlaceholder_willInsertResult(...) removeDictationResultPlaceholder_willInsertResult(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)removeDictationResultPlaceholder_willInsertResult;

- (MLChainParamBlock4UITextField)beginSelectionChange;

- (MLChainParamBlock4UITextField)endSelectionChange;

#ifndef displaySecureEditsUsingPlainText
#define displaySecureEditsUsingPlainText(...) displaySecureEditsUsingPlainText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)displaySecureEditsUsingPlainText;

#ifndef keyboardAppearance
#define keyboardAppearance(...) keyboardAppearance(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)keyboardAppearance;

#ifndef beginFloatingCursorAtPoint
#define beginFloatingCursorAtPoint(...) beginFloatingCursorAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef beginFloatingCursorAtPoint_
#define beginFloatingCursorAtPoint_(...)  beginFloatingCursorAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)beginFloatingCursorAtPoint;

#ifndef updateFloatingCursorAtPoint
#define updateFloatingCursorAtPoint(...) updateFloatingCursorAtPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef updateFloatingCursorAtPoint_
#define updateFloatingCursorAtPoint_(...)  updateFloatingCursorAtPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)updateFloatingCursorAtPoint;

- (MLChainParamBlock4UITextField)endFloatingCursor;

#ifndef startAutoscroll
#define startAutoscroll(...) startAutoscroll(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef startAutoscroll_
#define startAutoscroll_(...)  startAutoscroll(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)startAutoscroll;

- (MLChainParamBlock4UITextField)selectAll;

- (MLChainParamBlock4UITextField)placeholder;

#ifndef animating
#define animating(...) animating(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)animating;

- (MLChainParamBlock4UITextField)label;

#ifndef allowsEditingTextAttributes
#define allowsEditingTextAttributes(...) allowsEditingTextAttributes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)allowsEditingTextAttributes;

- (MLChainParamBlock4UITextField)inputAccessoryView;

- (MLChainParamBlock4UITextField)selectAll;

#ifndef clearsOnInsertion
#define clearsOnInsertion(...) clearsOnInsertion(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)clearsOnInsertion;

- (MLChainParamBlock4UITextField)layoutTilesNow;

- (MLChainParamBlock4UITextField)makeTextWritingDirectionRightToLeft;

- (MLChainParamBlock4UITextField)makeTextWritingDirectionLeftToRight;

- (MLChainParamBlock4UITextField)replace;

- (MLChainParamBlock4UITextField)cut;

- (MLChainParamBlock4UITextField)copy;

- (MLChainParamBlock4UITextField)paste;

- (MLChainParamBlock4UITextField)toggleBoldface;

- (MLChainParamBlock4UITextField)toggleItalics;

- (MLChainParamBlock4UITextField)toggleUnderline;

- (MLChainParamBlock4UITextField)disableClearsOnInsertion;

- (MLChainParamBlock4UITextField)select;

- (MLChainParamBlock4UITextField)inputView;

#ifndef drawTextInRect
#define drawTextInRect(...) drawTextInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawTextInRect_
#define drawTextInRect_(...)  drawTextInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawTextInRect;

#ifndef minimumFontSize
#define minimumFontSize(...) minimumFontSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)minimumFontSize;

#ifndef shadowBlur
#define shadowBlur(...) shadowBlur(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)shadowBlur;

#ifndef borderStyle
#define borderStyle(...) borderStyle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)borderStyle;

#ifndef paddingTop_paddingLeft
#define paddingTop_paddingLeft(...) paddingTop_paddingLeft(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)paddingTop_paddingLeft;

- (MLChainParamBlock4UITextField)leftView;

- (MLChainParamBlock4UITextField)rightView;

#ifndef floatingContentView_isTransitioningFromState_toState
#define floatingContentView_isTransitioningFromState_toState(...) floatingContentView_isTransitioningFromState_toState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)floatingContentView_isTransitioningFromState_toState;

#ifndef continuousSpellCheckingEnabled
#define continuousSpellCheckingEnabled(...) continuousSpellCheckingEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)continuousSpellCheckingEnabled;

#ifndef displaySecureTextUsingPlainText
#define displaySecureTextUsingPlainText(...) displaySecureTextUsingPlainText(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)displaySecureTextUsingPlainText;

#ifndef undoEnabled
#define undoEnabled(...) undoEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)undoEnabled;

#ifndef textCentersVertically
#define textCentersVertically(...) textCentersVertically(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)textCentersVertically;

#ifndef textCentersHorizontally
#define textCentersHorizontally(...) textCentersHorizontally(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)textCentersHorizontally;

- (MLChainParamBlock4UITextField)background;

#ifndef clearButtonOff
#define clearButtonOff(...) clearButtonOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef clearButtonOff_
#define clearButtonOff_(...)  clearButtonOff(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)clearButtonOff;

#ifndef paddingTop
#define paddingTop(...) paddingTop(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)paddingTop;

#ifndef rightViewMode
#define rightViewMode(...) rightViewMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)rightViewMode;

#ifndef leftViewMode
#define leftViewMode(...) leftViewMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)leftViewMode;

- (MLChainParamBlock4UITextField)disabledBackground;

#ifndef clearButtonMode
#define clearButtonMode(...) clearButtonMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)clearButtonMode;

#ifndef paddingLeft
#define paddingLeft(...) paddingLeft(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)paddingLeft;

#ifndef paddingRight
#define paddingRight(...) paddingRight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)paddingRight;

#ifndef drawsAsAtom
#define drawsAsAtom(...) drawsAsAtom(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawsAsAtom;

#ifndef clearingBehavior
#define clearingBehavior(...) clearingBehavior(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)clearingBehavior;

#ifndef paddingBottom
#define paddingBottom(...) paddingBottom(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)paddingBottom;

#ifndef clearsOnBeginEditing
#define clearsOnBeginEditing(...) clearsOnBeginEditing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)clearsOnBeginEditing;

- (MLChainParamBlock4UITextField)attributedPlaceholder;

#ifndef atomStyle
#define atomStyle(...) atomStyle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)atomStyle;

- (MLChainParamBlock4UITextField)defaultTextAttributes;

- (MLChainParamBlock4UITextField)createPlaceholderIfNecessary;

- (MLChainParamBlock4UITextField)scrollTextFieldToVisible;

#ifndef selectionRange
#define selectionRange(...) selectionRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef selectionRange_
#define selectionRange_(...)  selectionRange(ml_chain_MASBoxValue(NSMakeRange(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)selectionRange;

#ifndef font_fullFontSize
#define font_fullFontSize(...) font_fullFontSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)font_fullFontSize;

- (MLChainParamBlock4UITextField)finishedSettingTextOrAttributedText;

#ifndef _tvUseVibrancy
#define _tvUseVibrancy(...) _tvUseVibrancy(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)_tvUseVibrancy;

- (MLChainParamBlock4UITextField)_tvCustomTextColor;

- (MLChainParamBlock4UITextField)finishedSettingPlaceholder;

#ifndef drawPlaceholderInRect
#define drawPlaceholderInRect(...) drawPlaceholderInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawPlaceholderInRect_
#define drawPlaceholderInRect_(...)  drawPlaceholderInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawPlaceholderInRect;

#ifndef drawSuffixInRect
#define drawSuffixInRect(...) drawSuffixInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawSuffixInRect_
#define drawSuffixInRect_(...)  drawSuffixInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawSuffixInRect;

#ifndef drawPrefixInRect
#define drawPrefixInRect(...) drawPrefixInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawPrefixInRect_
#define drawPrefixInRect_(...)  drawPrefixInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawPrefixInRect;

#ifndef drawDictationLabelInRect
#define drawDictationLabelInRect(...) drawDictationLabelInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawDictationLabelInRect_
#define drawDictationLabelInRect_(...)  drawDictationLabelInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawDictationLabelInRect;

#ifndef drawBorder
#define drawBorder(...) drawBorder(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawBorder_
#define drawBorder_(...)  drawBorder(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawBorder;

#ifndef clearsPlaceholderOnBeginEditing
#define clearsPlaceholderOnBeginEditing(...) clearsPlaceholderOnBeginEditing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)clearsPlaceholderOnBeginEditing;

- (MLChainParamBlock4UITextField)fieldEditorDidChangeSelection;

#ifndef autoresizesTextToFit
#define autoresizesTextToFit(...) autoresizesTextToFit(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)autoresizesTextToFit;

#ifndef textAutorresizesToFit
#define textAutorresizesToFit(...) textAutorresizesToFit(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)textAutorresizesToFit;

#ifndef clearButtonStyle
#define clearButtonStyle(...) clearButtonStyle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)clearButtonStyle;

#ifndef inactiveHasDimAppearance
#define inactiveHasDimAppearance(...) inactiveHasDimAppearance(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)inactiveHasDimAppearance;

#ifndef becomesFirstResponderOnClearButtonTap
#define becomesFirstResponderOnClearButtonTap(...) becomesFirstResponderOnClearButtonTap(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)becomesFirstResponderOnClearButtonTap;

#ifndef labelOff
#define labelOff(...) labelOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)labelOff;

- (MLChainParamBlock4UITextField)encodeWithCoder;

#ifndef shadowOff
#define shadowOff(...) shadowOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef shadowOff_
#define shadowOff_(...)  shadowOff(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)shadowOff;

- (MLChainParamBlock4UITextField)shadowColor;

- (MLChainParamBlock4UITextField)backgroundColor;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)frame;

- (MLChainParamBlock4UITextField)icon;

#ifndef secureTextEntry
#define secureTextEntry(...) secureTextEntry(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)secureTextEntry;

#ifndef markedText_selectedRange
#define markedText_selectedRange(...) markedText_selectedRange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)markedText_selectedRange;

- (MLChainParamBlock4UITextField)insertText;

#ifndef drawRect
#define drawRect(...) drawRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawRect_
#define drawRect_(...)  drawRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITextField)drawRect;

@end

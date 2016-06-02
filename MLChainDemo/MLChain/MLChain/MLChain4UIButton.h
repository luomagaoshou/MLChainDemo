//  
//  MLChain4UIButton.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIControl.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UIButton);
@interface MLChain4UIButton:MLChain4UIControl
@property (nonatomic, strong)UIButton *button;
#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)enabled;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)bounds;

#ifndef title_forState
#define title_forState(...) title_forState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)title_forState;

- (MLChainParamBlock4UIButton)invalidateIntrinsicContentSize;

- (MLChainParamBlock4UIButton)layoutSubviews;

- (MLChainParamBlock4UIButton)traitCollectionDidChange;

#ifndef semanticContentAttribute
#define semanticContentAttribute(...) semanticContentAttribute(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)semanticContentAttribute;

#ifndef attributedTitle_forState
#define attributedTitle_forState(...) attributedTitle_forState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)attributedTitle_forState;

- (MLChainParamBlock4UIButton)pressesBegan_withEvent;

- (MLChainParamBlock4UIButton)font;

- (MLChainParamBlock4UIButton)tintColor;

- (MLChainParamBlock4UIButton)tintColorDidChange;

- (MLChainParamBlock4UIButton)interactionTintColorDidChange;

#ifndef image_forState
#define image_forState(...) image_forState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)image_forState;

#ifndef highlighted
#define highlighted(...) highlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)highlighted;

#ifndef titleColor_forState
#define titleColor_forState(...) titleColor_forState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)titleColor_forState;

#ifndef titleShadowColor_forState
#define titleShadowColor_forState(...) titleShadowColor_forState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)titleShadowColor_forState;

#ifndef titleColor_forStates
#define titleColor_forStates(...) titleColor_forStates(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)titleColor_forStates;

#ifndef adjustsImageWhenHighlighted
#define adjustsImageWhenHighlighted(...) adjustsImageWhenHighlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)adjustsImageWhenHighlighted;

#ifndef adjustsImageWhenDisabled
#define adjustsImageWhenDisabled(...) adjustsImageWhenDisabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)adjustsImageWhenDisabled;

#ifndef backgroundImage_forState
#define backgroundImage_forState(...) backgroundImage_forState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)backgroundImage_forState;

#ifndef backgroundImage_forStates
#define backgroundImage_forStates(...) backgroundImage_forStates(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)backgroundImage_forStates;

#ifndef titleEdgeIns
#define titleEdgeIns(...) titleEdgeIns(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef titleEdgeIns_
#define titleEdgeIns_(...)  titleEdgeIns(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)titleEdgeIns;

#ifndef titleShadowColor_forStates
#define titleShadowColor_forStates(...) titleShadowColor_forStates(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)titleShadowColor_forStates;

#ifndef contentEdgeIns
#define contentEdgeIns(...) contentEdgeIns(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentEdgeIns_
#define contentEdgeIns_(...)  contentEdgeIns(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)contentEdgeIns;

#ifndef title_forStates
#define title_forStates(...) title_forStates(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)title_forStates;

#ifndef image_forStates
#define image_forStates(...) image_forStates(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)image_forStates;

#ifndef contentHorizontalAlignment
#define contentHorizontalAlignment(...) contentHorizontalAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)contentHorizontalAlignment;

#ifndef contentVerticalAlignment
#define contentVerticalAlignment(...) contentVerticalAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)contentVerticalAlignment;

#ifndef disabledDimsImage
#define disabledDimsImage(...) disabledDimsImage(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)disabledDimsImage;

#ifndef showsTouchWhenHighlighted
#define showsTouchWhenHighlighted(...) showsTouchWhenHighlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)showsTouchWhenHighlighted;

#ifndef reversesTitleShadowWhenHighlighted
#define reversesTitleShadowWhenHighlighted(...) reversesTitleShadowWhenHighlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)reversesTitleShadowWhenHighlighted;

#ifndef selected
#define selected(...) selected(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)selected;

- (MLChainParamBlock4UIButton)updateConstraints;

#ifndef floatingContentView_isTransitioningFromState_toState
#define floatingContentView_isTransitioningFromState_toState(...) floatingContentView_isTransitioningFromState_toState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)floatingContentView_isTransitioningFromState_toState;

#ifndef autosizesToFit
#define autosizesToFit(...) autosizesToFit(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)autosizesToFit;

#ifndef showPressFeedback
#define showPressFeedback(...) showPressFeedback(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)showPressFeedback;

#ifndef imageEdgeIns
#define imageEdgeIns(...) imageEdgeIns(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef imageEdgeIns_
#define imageEdgeIns_(...)  imageEdgeIns(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)imageEdgeIns;

#ifndef titleShadowOff
#define titleShadowOff(...) titleShadowOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef titleShadowOff_
#define titleShadowOff_(...)  titleShadowOff(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)titleShadowOff;

#ifndef crossfadeToImage_forState
#define crossfadeToImage_forState(...) crossfadeToImage_forState(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)crossfadeToImage_forState;

- (MLChainParamBlock4UIButton)title;

- (MLChainParamBlock4UIButton)encodeWithCoder;

#ifndef lineBreakMode
#define lineBreakMode(...) lineBreakMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)lineBreakMode;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIButton)frame;

@end

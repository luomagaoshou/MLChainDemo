//  
//  MLChain4UIButton.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIControl.h"



@interface MLChain4UIButton:MLChain4UIControl
- (UIButton *)chainObject;
#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setEnabled: 'B'
     */
- (MLChain4UIButton *(^)())enabled;


#ifndef bounds                                  
#define bounds(...)  bounds(@"setBounds:", __VA_ARGS__)                                  
#endif
#ifndef bounds_             
#define bounds_(...)  bounds(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setBounds: '{'
     */
- (MLChain4UIButton *(^)())bounds;


#ifndef layoutSubviews                              
#define layoutSubviews(...)  layoutSubviews(@"layoutSubviews")                              
#endif
/**     ClassName-> UIButton                                
SEL-> layoutSubviews     */
- (MLChain4UIButton *(^)())layoutSubviews;


#ifndef title_forState                                  
#define title_forState(...)  title_forState(@"setTitle:forState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTitle: '@'
  forState: 'Q'
     */
- (MLChain4UIButton *(^)())title_forState;


#ifndef invalidateIntrinsicContentSize                              
#define invalidateIntrinsicContentSize(...)  invalidateIntrinsicContentSize(@"invalidateIntrinsicContentSize")                              
#endif
/**     ClassName-> UIButton                                
SEL-> invalidateIntrinsicContentSize     */
- (MLChain4UIButton *(^)())invalidateIntrinsicContentSize;


#ifndef traitCollectionDidChange                                  
#define traitCollectionDidChange(...)  traitCollectionDidChange(@"traitCollectionDidChange:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   traitCollectionDidChange: '@'
     */
- (MLChain4UIButton *(^)())traitCollectionDidChange;


#ifndef semanticContentAttribute                                  
#define semanticContentAttribute(...)  semanticContentAttribute(@"setSemanticContentAttribute:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setSemanticContentAttribute: 'q'
     */
- (MLChain4UIButton *(^)())semanticContentAttribute;


#ifndef attributedTitle_forState                                  
#define attributedTitle_forState(...)  attributedTitle_forState(@"setAttributedTitle:forState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAttributedTitle: '@'
  forState: 'Q'
     */
- (MLChain4UIButton *(^)())attributedTitle_forState;


#ifndef pressesBegan_withEvent                                  
#define pressesBegan_withEvent(...)  pressesBegan_withEvent(@"pressesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   pressesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())pressesBegan_withEvent;


#ifndef font                                  
#define font(...)  font(@"setFont:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setFont: '@'
     */
- (MLChain4UIButton *(^)())font;


#ifndef tintColor                                  
#define tintColor(...)  tintColor(@"setTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTintColor: '@'
     */
- (MLChain4UIButton *(^)())tintColor;


#ifndef tintColorDidChange                              
#define tintColorDidChange(...)  tintColorDidChange(@"tintColorDidChange")                              
#endif
/**     ClassName-> UIButton                                
SEL-> tintColorDidChange     */
- (MLChain4UIButton *(^)())tintColorDidChange;


#ifndef updateConstraints                              
#define updateConstraints(...)  updateConstraints(@"updateConstraints")                              
#endif
/**     ClassName-> UIButton                                
SEL-> updateConstraints     */
- (MLChain4UIButton *(^)())updateConstraints;


#ifndef image_forState                                  
#define image_forState(...)  image_forState(@"setImage:forState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setImage: '@'
  forState: 'Q'
     */
- (MLChain4UIButton *(^)())image_forState;


#ifndef highlighted                                  
#define highlighted(...)  highlighted(@"setHighlighted:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setHighlighted: 'B'
     */
- (MLChain4UIButton *(^)())highlighted;


#ifndef titleColor_forState                                  
#define titleColor_forState(...)  titleColor_forState(@"setTitleColor:forState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTitleColor: '@'
  forState: 'Q'
     */
- (MLChain4UIButton *(^)())titleColor_forState;


#ifndef titleShadowColor_forState                                  
#define titleShadowColor_forState(...)  titleShadowColor_forState(@"setTitleShadowColor:forState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTitleShadowColor: '@'
  forState: 'Q'
     */
- (MLChain4UIButton *(^)())titleShadowColor_forState;


#ifndef titleColor_forStates                                  
#define titleColor_forStates(...)  titleColor_forStates(@"setTitleColor:forStates:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTitleColor: '@'
  forStates: 'Q'
     */
- (MLChain4UIButton *(^)())titleColor_forStates;


#ifndef adjustsImageWhenHighlighted                                  
#define adjustsImageWhenHighlighted(...)  adjustsImageWhenHighlighted(@"setAdjustsImageWhenHighlighted:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAdjustsImageWhenHighlighted: 'B'
     */
- (MLChain4UIButton *(^)())adjustsImageWhenHighlighted;


#ifndef adjustsImageWhenDisabled                                  
#define adjustsImageWhenDisabled(...)  adjustsImageWhenDisabled(@"setAdjustsImageWhenDisabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAdjustsImageWhenDisabled: 'B'
     */
- (MLChain4UIButton *(^)())adjustsImageWhenDisabled;


#ifndef backgroundImage_forState                                  
#define backgroundImage_forState(...)  backgroundImage_forState(@"setBackgroundImage:forState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setBackgroundImage: '@'
  forState: 'Q'
     */
- (MLChain4UIButton *(^)())backgroundImage_forState;


#ifndef backgroundImage_forStates                                  
#define backgroundImage_forStates(...)  backgroundImage_forStates(@"setBackgroundImage:forStates:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setBackgroundImage: '@'
  forStates: 'Q'
     */
- (MLChain4UIButton *(^)())backgroundImage_forStates;


#ifndef titleEdgeIns                                  
#define titleEdgeIns(...)  titleEdgeIns(@"setTitleEdgeInsets:", __VA_ARGS__)                                  
#endif
#ifndef titleEdgeIns_             
#define titleEdgeIns_(...)  titleEdgeIns(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setTitleEdgeInsets: '{'
     */
- (MLChain4UIButton *(^)())titleEdgeIns;


#ifndef titleShadowColor_forStates                                  
#define titleShadowColor_forStates(...)  titleShadowColor_forStates(@"setTitleShadowColor:forStates:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTitleShadowColor: '@'
  forStates: 'Q'
     */
- (MLChain4UIButton *(^)())titleShadowColor_forStates;


#ifndef contentEdgeIns                                  
#define contentEdgeIns(...)  contentEdgeIns(@"setContentEdgeInsets:", __VA_ARGS__)                                  
#endif
#ifndef contentEdgeIns_             
#define contentEdgeIns_(...)  contentEdgeIns(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setContentEdgeInsets: '{'
     */
- (MLChain4UIButton *(^)())contentEdgeIns;


#ifndef title_forStates                                  
#define title_forStates(...)  title_forStates(@"setTitle:forStates:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTitle: '@'
  forStates: 'Q'
     */
- (MLChain4UIButton *(^)())title_forStates;


#ifndef image_forStates                                  
#define image_forStates(...)  image_forStates(@"setImage:forStates:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setImage: '@'
  forStates: 'Q'
     */
- (MLChain4UIButton *(^)())image_forStates;


#ifndef contentHorizontalAlignment                                  
#define contentHorizontalAlignment(...)  contentHorizontalAlignment(@"setContentHorizontalAlignment:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setContentHorizontalAlignment: 'q'
     */
- (MLChain4UIButton *(^)())contentHorizontalAlignment;


#ifndef contentVerticalAlignment                                  
#define contentVerticalAlignment(...)  contentVerticalAlignment(@"setContentVerticalAlignment:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setContentVerticalAlignment: 'q'
     */
- (MLChain4UIButton *(^)())contentVerticalAlignment;


#ifndef disabledDimsImage                                  
#define disabledDimsImage(...)  disabledDimsImage(@"setDisabledDimsImage:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setDisabledDimsImage: 'B'
     */
- (MLChain4UIButton *(^)())disabledDimsImage;


#ifndef selected                                  
#define selected(...)  selected(@"setSelected:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setSelected: 'B'
     */
- (MLChain4UIButton *(^)())selected;


#ifndef floatingContentView_isTransitioningFromState_toState                                  
#define floatingContentView_isTransitioningFromState_toState(...)  floatingContentView_isTransitioningFromState_toState(@"floatingContentView:isTransitioningFromState:toState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   floatingContentView: '@'
  isTransitioningFromState: 'Q'
  toState: 'Q'
     */
- (MLChain4UIButton *(^)())floatingContentView_isTransitioningFromState_toState;


#ifndef autosizesToFit                                  
#define autosizesToFit(...)  autosizesToFit(@"setAutosizesToFit:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAutosizesToFit: 'B'
     */
- (MLChain4UIButton *(^)())autosizesToFit;


#ifndef showsTouchWhenHighlighted                                  
#define showsTouchWhenHighlighted(...)  showsTouchWhenHighlighted(@"setShowsTouchWhenHighlighted:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setShowsTouchWhenHighlighted: 'B'
     */
- (MLChain4UIButton *(^)())showsTouchWhenHighlighted;


#ifndef reversesTitleShadowWhenHighlighted                                  
#define reversesTitleShadowWhenHighlighted(...)  reversesTitleShadowWhenHighlighted(@"setReversesTitleShadowWhenHighlighted:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setReversesTitleShadowWhenHighlighted: 'B'
     */
- (MLChain4UIButton *(^)())reversesTitleShadowWhenHighlighted;


#ifndef imageEdgeIns                                  
#define imageEdgeIns(...)  imageEdgeIns(@"setImageEdgeInsets:", __VA_ARGS__)                                  
#endif
#ifndef imageEdgeIns_             
#define imageEdgeIns_(...)  imageEdgeIns(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setImageEdgeInsets: '{'
     */
- (MLChain4UIButton *(^)())imageEdgeIns;


#ifndef titleShadowOff                                  
#define titleShadowOff(...)  titleShadowOff(@"setTitleShadowOffset:", __VA_ARGS__)                                  
#endif
#ifndef titleShadowOff_             
#define titleShadowOff_(...)  titleShadowOff(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setTitleShadowOffset: '{'
     */
- (MLChain4UIButton *(^)())titleShadowOff;


#ifndef showPressFeedback                                  
#define showPressFeedback(...)  showPressFeedback(@"setShowPressFeedback:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setShowPressFeedback: 'B'
     */
- (MLChain4UIButton *(^)())showPressFeedback;


#ifndef crossfadeToImage_forState                                  
#define crossfadeToImage_forState(...)  crossfadeToImage_forState(@"crossfadeToImage:forState:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   crossfadeToImage: '@'
  forState: 'Q'
     */
- (MLChain4UIButton *(^)())crossfadeToImage_forState;


#ifndef title                                  
#define title(...)  title(@"setTitle:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTitle: '@'
     */
- (MLChain4UIButton *(^)())title;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4UIButton *(^)())encodeWithCoder;


#ifndef lineBreakMode                                  
#define lineBreakMode(...)  lineBreakMode(@"setLineBreakMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setLineBreakMode: 'q'
     */
- (MLChain4UIButton *(^)())lineBreakMode;


#ifndef frame                                  
#define frame(...)  frame(@"setFrame:", __VA_ARGS__)                                  
#endif
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setFrame: '{'
     */
- (MLChain4UIButton *(^)())frame;


#ifndef addTarget_action_forControlEvents                                  
#define addTarget_action_forControlEvents(...)  addTarget_action_forControlEvents(@"addTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UIButton *(^)())addTarget_action_forControlEvents;


#ifndef touchesBegan_withEvent                                  
#define touchesBegan_withEvent(...)  touchesBegan_withEvent(@"touchesBegan:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   touchesBegan: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())touchesBegan_withEvent;


#ifndef touchesMoved_withEvent                                  
#define touchesMoved_withEvent(...)  touchesMoved_withEvent(@"touchesMoved:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   touchesMoved: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())touchesMoved_withEvent;


#ifndef touchesEnded_withEvent                                  
#define touchesEnded_withEvent(...)  touchesEnded_withEvent(@"touchesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   touchesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())touchesEnded_withEvent;


#ifndef touchesCancelled_withEvent                                  
#define touchesCancelled_withEvent(...)  touchesCancelled_withEvent(@"touchesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   touchesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())touchesCancelled_withEvent;


#ifndef sendActionsForControlEvents                                  
#define sendActionsForControlEvents(...)  sendActionsForControlEvents(@"sendActionsForControlEvents:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendActionsForControlEvents: 'Q'
     */
- (MLChain4UIButton *(^)())sendActionsForControlEvents;


#ifndef addTarget_action_forEvents                                  
#define addTarget_action_forEvents(...)  addTarget_action_forEvents(@"addTarget:action:forEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addTarget: '@'
  action: ':'
  forEvents: 'i'
     */
- (MLChain4UIButton *(^)())addTarget_action_forEvents;


#ifndef tracking                                  
#define tracking(...)  tracking(@"setTracking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTracking: 'B'
     */
- (MLChain4UIButton *(^)())tracking;


#ifndef cancelTrackingWithEvent                                  
#define cancelTrackingWithEvent(...)  cancelTrackingWithEvent(@"cancelTrackingWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   cancelTrackingWithEvent: '@'
     */
- (MLChain4UIButton *(^)())cancelTrackingWithEvent;


#ifndef endTrackingWithTouch_withEvent                                  
#define endTrackingWithTouch_withEvent(...)  endTrackingWithTouch_withEvent(@"endTrackingWithTouch:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   endTrackingWithTouch: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())endTrackingWithTouch_withEvent;


#ifndef sendAction_to_forEvent                                  
#define sendAction_to_forEvent(...)  sendAction_to_forEvent(@"sendAction:to:forEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendAction: ':'
  to: '@'
  forEvent: '@'
     */
- (MLChain4UIButton *(^)())sendAction_to_forEvent;


#ifndef removeTarget_action_forControlEvents                                  
#define removeTarget_action_forControlEvents(...)  removeTarget_action_forControlEvents(@"removeTarget:action:forControlEvents:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeTarget: '@'
  action: ':'
  forControlEvents: 'Q'
     */
- (MLChain4UIButton *(^)())removeTarget_action_forControlEvents;


#ifndef touchesEstimatedPropertiesUpdated                                  
#define touchesEstimatedPropertiesUpdated(...)  touchesEstimatedPropertiesUpdated(@"touchesEstimatedPropertiesUpdated:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   touchesEstimatedPropertiesUpdated: '@'
     */
- (MLChain4UIButton *(^)())touchesEstimatedPropertiesUpdated;


#ifndef requiresDisplayOnTracking                                  
#define requiresDisplayOnTracking(...)  requiresDisplayOnTracking(@"setRequiresDisplayOnTracking:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setRequiresDisplayOnTracking: 'B'
     */
- (MLChain4UIButton *(^)())requiresDisplayOnTracking;


#ifndef removeTarget_forEvents                                  
#define removeTarget_forEvents(...)  removeTarget_forEvents(@"removeTarget:forEvents:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeTarget: '@'
  forEvents: 'i'
     */
- (MLChain4UIButton *(^)())removeTarget_forEvents;


#ifndef moveToSuperview                                  
#define moveToSuperview(...)  moveToSuperview(@"moveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   moveToSuperview: '@'
     */
- (MLChain4UIButton *(^)())moveToSuperview;


#ifndef nsli_addConstraint                                  
#define nsli_addConstraint(...)  nsli_addConstraint(@"nsli_addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   nsli_addConstraint: '@'
     */
- (MLChain4UIButton *(^)())nsli_addConstraint;


#ifndef nsis_valueOfVariable_didChangeInEngine                                  
#define nsis_valueOfVariable_didChangeInEngine(...)  nsis_valueOfVariable_didChangeInEngine(@"nsis_valueOfVariable:didChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   nsis_valueOfVariable: '@'
  didChangeInEngine: '@'
     */
- (MLChain4UIButton *(^)())nsis_valueOfVariable_didChangeInEngine;


#ifndef solutionDidChangeInEngine                                  
#define solutionDidChangeInEngine(...)  solutionDidChangeInEngine(@"solutionDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   solutionDidChangeInEngine: '@'
     */
- (MLChain4UIButton *(^)())solutionDidChangeInEngine;


#ifndef setNeedsLayout                              
#define setNeedsLayout(...)  setNeedsLayout(@"setNeedsLayout")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setNeedsLayout     */
- (MLChain4UIButton *(^)())setNeedsLayout;


#ifndef engine_willBreakConstraint_dueToMutuallyExclusiveConstraints                                  
#define engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(...)  engine_willBreakConstraint_dueToMutuallyExclusiveConstraints(@"engine:willBreakConstraint:dueToMutuallyExclusiveConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   engine: '@'
  willBreakConstraint: '@'
  dueToMutuallyExclusiveConstraints: '@'
     */
- (MLChain4UIButton *(^)())engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;


#ifndef constraintsDidChangeInEngine                                  
#define constraintsDidChangeInEngine(...)  constraintsDidChangeInEngine(@"constraintsDidChangeInEngine:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   constraintsDidChangeInEngine: '@'
     */
- (MLChain4UIButton *(^)())constraintsDidChangeInEngine;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4UIButton *(^)())value_forKey;


#ifndef needsDisplayInRect                                  
#define needsDisplayInRect(...)  needsDisplayInRect(@"setNeedsDisplayInRect:", __VA_ARGS__)                                  
#endif
#ifndef needsDisplayInRect_             
#define needsDisplayInRect_(...)  needsDisplayInRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setNeedsDisplayInRect: '{'
     */
- (MLChain4UIButton *(^)())needsDisplayInRect;


#ifndef setNeedsDisplay                              
#define setNeedsDisplay(...)  setNeedsDisplay(@"setNeedsDisplay")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setNeedsDisplay     */
- (MLChain4UIButton *(^)())setNeedsDisplay;


#ifndef position                                  
#define position(...)  position(@"setPosition:", __VA_ARGS__)                                  
#endif
#ifndef position_             
#define position_(...)  position(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setPosition: '{'
     */
- (MLChain4UIButton *(^)())position;


#ifndef addAnimation_forKey                                  
#define addAnimation_forKey(...)  addAnimation_forKey(@"addAnimation:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addAnimation: '@'
  forKey: '@'
     */
- (MLChain4UIButton *(^)())addAnimation_forKey;


#ifndef transform                                  
#define transform(...)  transform(@"setTransform:", __VA_ARGS__)                                  
#endif
#ifndef transform_             
#define transform_(...)  transform(CGAffineTransformMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setTransform: '{'
     */
- (MLChain4UIButton *(^)())transform;


#ifndef layoutIfNeeded                              
#define layoutIfNeeded(...)  layoutIfNeeded(@"layoutIfNeeded")                              
#endif
/**     ClassName-> UIButton                                
SEL-> layoutIfNeeded     */
- (MLChain4UIButton *(^)())layoutIfNeeded;


#ifndef layerWillDraw                                  
#define layerWillDraw(...)  layerWillDraw(@"layerWillDraw:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   layerWillDraw: '@'
     */
- (MLChain4UIButton *(^)())layerWillDraw;


#ifndef drawLayer_inContext                                  
#define drawLayer_inContext(...)  drawLayer_inContext(@"drawLayer:inContext:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   drawLayer: '@'
  inContext: '^'
     */
- (MLChain4UIButton *(^)())drawLayer_inContext;


#ifndef layoutSublayersOfLayer                                  
#define layoutSublayersOfLayer(...)  layoutSublayersOfLayer(@"layoutSublayersOfLayer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   layoutSublayersOfLayer: '@'
     */
- (MLChain4UIButton *(^)())layoutSublayersOfLayer;


#ifndef clipsToBounds                                  
#define clipsToBounds(...)  clipsToBounds(@"setClipsToBounds:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setClipsToBounds: 'B'
     */
- (MLChain4UIButton *(^)())clipsToBounds;


#ifndef userInteractionEnabled                                  
#define userInteractionEnabled(...)  userInteractionEnabled(@"setUserInteractionEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setUserInteractionEnabled: 'B'
     */
- (MLChain4UIButton *(^)())userInteractionEnabled;


#ifndef autoresizesSubviews                                  
#define autoresizesSubviews(...)  autoresizesSubviews(@"setAutoresizesSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAutoresizesSubviews: 'B'
     */
- (MLChain4UIButton *(^)())autoresizesSubviews;


#ifndef needsDisplayOnBoundsChange                                  
#define needsDisplayOnBoundsChange(...)  needsDisplayOnBoundsChange(@"setNeedsDisplayOnBoundsChange:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setNeedsDisplayOnBoundsChange: 'B'
     */
- (MLChain4UIButton *(^)())needsDisplayOnBoundsChange;


#ifndef didMoveToWindow                              
#define didMoveToWindow(...)  didMoveToWindow(@"didMoveToWindow")                              
#endif
/**     ClassName-> UIButton                                
SEL-> didMoveToWindow     */
- (MLChain4UIButton *(^)())didMoveToWindow;


#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAlpha: 'd'
     */
- (MLChain4UIButton *(^)())alpha;


#ifndef bringSubviewToFront                                  
#define bringSubviewToFront(...)  bringSubviewToFront(@"bringSubviewToFront:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   bringSubviewToFront: '@'
     */
- (MLChain4UIButton *(^)())bringSubviewToFront;


#ifndef contentScaleFactor                                  
#define contentScaleFactor(...)  contentScaleFactor(@"setContentScaleFactor:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setContentScaleFactor: 'd'
     */
- (MLChain4UIButton *(^)())contentScaleFactor;


#ifndef insertSubview_atIndex                                  
#define insertSubview_atIndex(...)  insertSubview_atIndex(@"insertSubview:atIndex:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   insertSubview: '@'
  atIndex: 'q'
     */
- (MLChain4UIButton *(^)())insertSubview_atIndex;


#ifndef clipsSubviews                                  
#define clipsSubviews(...)  clipsSubviews(@"setClipsSubviews:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setClipsSubviews: 'B'
     */
- (MLChain4UIButton *(^)())clipsSubviews;


#ifndef sendSubviewToBack                                  
#define sendSubviewToBack(...)  sendSubviewToBack(@"sendSubviewToBack:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendSubviewToBack: '@'
     */
- (MLChain4UIButton *(^)())sendSubviewToBack;


#ifndef insertSubview_below                                  
#define insertSubview_below(...)  insertSubview_below(@"insertSubview:below:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   insertSubview: '@'
  below: '@'
     */
- (MLChain4UIButton *(^)())insertSubview_below;


#ifndef insertSubview_belowSubview                                  
#define insertSubview_belowSubview(...)  insertSubview_belowSubview(@"insertSubview:belowSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   insertSubview: '@'
  belowSubview: '@'
     */
- (MLChain4UIButton *(^)())insertSubview_belowSubview;


#ifndef contentMode                                  
#define contentMode(...)  contentMode(@"setContentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setContentMode: 'q'
     */
- (MLChain4UIButton *(^)())contentMode;


#ifndef addGestureRecognizer                                  
#define addGestureRecognizer(...)  addGestureRecognizer(@"addGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addGestureRecognizer: '@'
     */
- (MLChain4UIButton *(^)())addGestureRecognizer;


#ifndef removeGestureRecognizer                                  
#define removeGestureRecognizer(...)  removeGestureRecognizer(@"removeGestureRecognizer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeGestureRecognizer: '@'
     */
- (MLChain4UIButton *(^)())removeGestureRecognizer;


#ifndef translatesAutoresizingMaskIntoConstraints                                  
#define translatesAutoresizingMaskIntoConstraints(...)  translatesAutoresizingMaskIntoConstraints(@"setTranslatesAutoresizingMaskIntoConstraints:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTranslatesAutoresizingMaskIntoConstraints: 'B'
     */
- (MLChain4UIButton *(^)())translatesAutoresizingMaskIntoConstraints;


#ifndef addConstraints                                  
#define addConstraints(...)  addConstraints(@"addConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addConstraints: '@'
     */
- (MLChain4UIButton *(^)())addConstraints;


#ifndef restoreUserActivityState                                  
#define restoreUserActivityState(...)  restoreUserActivityState(@"restoreUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   restoreUserActivityState: '@'
     */
- (MLChain4UIButton *(^)())restoreUserActivityState;


#ifndef setNeedsPreferredFocusedItemUpdate                              
#define setNeedsPreferredFocusedItemUpdate(...)  setNeedsPreferredFocusedItemUpdate(@"setNeedsPreferredFocusedItemUpdate")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setNeedsPreferredFocusedItemUpdate     */
- (MLChain4UIButton *(^)())setNeedsPreferredFocusedItemUpdate;


#ifndef setNeedsFocusUpdate                              
#define setNeedsFocusUpdate(...)  setNeedsFocusUpdate(@"setNeedsFocusUpdate")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setNeedsFocusUpdate     */
- (MLChain4UIButton *(^)())setNeedsFocusUpdate;


#ifndef center                                  
#define center(...)  center(@"setCenter:", __VA_ARGS__)                                  
#endif
#ifndef center_             
#define center_(...)  center(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setCenter: '{'
     */
- (MLChain4UIButton *(^)())center;


#ifndef layoutBelowIfNeeded                              
#define layoutBelowIfNeeded(...)  layoutBelowIfNeeded(@"layoutBelowIfNeeded")                              
#endif
/**     ClassName-> UIButton                                
SEL-> layoutBelowIfNeeded     */
- (MLChain4UIButton *(^)())layoutBelowIfNeeded;


#ifndef gestureEnded                                  
#define gestureEnded(...)  gestureEnded(@"gestureEnded:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   gestureEnded: '^'
     */
- (MLChain4UIButton *(^)())gestureEnded;


#ifndef updatePreferredFocusedItemIfNeeded                              
#define updatePreferredFocusedItemIfNeeded(...)  updatePreferredFocusedItemIfNeeded(@"updatePreferredFocusedItemIfNeeded")                              
#endif
/**     ClassName-> UIButton                                
SEL-> updatePreferredFocusedItemIfNeeded     */
- (MLChain4UIButton *(^)())updatePreferredFocusedItemIfNeeded;


#ifndef didUpdateFocusInContext_withAnimationCoordinator                                  
#define didUpdateFocusInContext_withAnimationCoordinator(...)  didUpdateFocusInContext_withAnimationCoordinator(@"didUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   didUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIButton *(^)())didUpdateFocusInContext_withAnimationCoordinator;


#ifndef updateFocusIfNeeded                              
#define updateFocusIfNeeded(...)  updateFocusIfNeeded(@"updateFocusIfNeeded")                              
#endif
/**     ClassName-> UIButton                                
SEL-> updateFocusIfNeeded     */
- (MLChain4UIButton *(^)())updateFocusIfNeeded;


#ifndef removeConstraints                                  
#define removeConstraints(...)  removeConstraints(@"removeConstraints:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeConstraints: '@'
     */
- (MLChain4UIButton *(^)())removeConstraints;


#ifndef wantsDeepColorDrawing                                  
#define wantsDeepColorDrawing(...)  wantsDeepColorDrawing(@"setWantsDeepColorDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setWantsDeepColorDrawing: 'B'
     */
- (MLChain4UIButton *(^)())wantsDeepColorDrawing;


#ifndef clearsContextBeforeDrawing                                  
#define clearsContextBeforeDrawing(...)  clearsContextBeforeDrawing(@"setClearsContextBeforeDrawing:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setClearsContextBeforeDrawing: 'B'
     */
- (MLChain4UIButton *(^)())clearsContextBeforeDrawing;


#ifndef addLayoutGuide                                  
#define addLayoutGuide(...)  addLayoutGuide(@"addLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addLayoutGuide: '@'
     */
- (MLChain4UIButton *(^)())addLayoutGuide;


#ifndef layoutMarginsFollowReadableWidth                                  
#define layoutMarginsFollowReadableWidth(...)  layoutMarginsFollowReadableWidth(@"setLayoutMarginsFollowReadableWidth:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setLayoutMarginsFollowReadableWidth: 'B'
     */
- (MLChain4UIButton *(^)())layoutMarginsFollowReadableWidth;


#ifndef previewingSegueTemplateStorage                                  
#define previewingSegueTemplateStorage(...)  previewingSegueTemplateStorage(@"setPreviewingSegueTemplateStorage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setPreviewingSegueTemplateStorage: '@'
     */
- (MLChain4UIButton *(^)())previewingSegueTemplateStorage;


#ifndef removeAllGestureRecognizers                              
#define removeAllGestureRecognizers(...)  removeAllGestureRecognizers(@"removeAllGestureRecognizers")                              
#endif
/**     ClassName-> UIButton                                
SEL-> removeAllGestureRecognizers     */
- (MLChain4UIButton *(^)())removeAllGestureRecognizers;


#ifndef layoutMarginsDidChange                              
#define layoutMarginsDidChange(...)  layoutMarginsDidChange(@"layoutMarginsDidChange")                              
#endif
/**     ClassName-> UIButton                                
SEL-> layoutMarginsDidChange     */
- (MLChain4UIButton *(^)())layoutMarginsDidChange;


#ifndef forceDisplayIfNeeded                              
#define forceDisplayIfNeeded(...)  forceDisplayIfNeeded(@"forceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIButton                                
SEL-> forceDisplayIfNeeded     */
- (MLChain4UIButton *(^)())forceDisplayIfNeeded;


#ifndef interactionTintColor                                  
#define interactionTintColor(...)  interactionTintColor(@"setInteractionTintColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setInteractionTintColor: '@'
     */
- (MLChain4UIButton *(^)())interactionTintColor;


#ifndef _countOfMotionEffectsInSubtree                                  
#define _countOfMotionEffectsInSubtree(...)  _countOfMotionEffectsInSubtree(@"set_countOfMotionEffectsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   set_countOfMotionEffectsInSubtree: 'Q'
     */
- (MLChain4UIButton *(^)())_countOfMotionEffectsInSubtree;


#ifndef addMotionEffect                                  
#define addMotionEffect(...)  addMotionEffect(@"addMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addMotionEffect: '@'
     */
- (MLChain4UIButton *(^)())addMotionEffect;


#ifndef removeMotionEffect                                  
#define removeMotionEffect(...)  removeMotionEffect(@"removeMotionEffect:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeMotionEffect: '@'
     */
- (MLChain4UIButton *(^)())removeMotionEffect;


#ifndef _countOfFocusedAncestorTrackingViewsInSubtree                                  
#define _countOfFocusedAncestorTrackingViewsInSubtree(...)  _countOfFocusedAncestorTrackingViewsInSubtree(@"set_countOfFocusedAncestorTrackingViewsInSubtree:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   set_countOfFocusedAncestorTrackingViewsInSubtree: 'Q'
     */
- (MLChain4UIButton *(^)())_countOfFocusedAncestorTrackingViewsInSubtree;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4UIButton *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4UIButton *(^)())willUpdateFocusToView;


#ifndef focusedViewWillChange                              
#define focusedViewWillChange(...)  focusedViewWillChange(@"focusedViewWillChange")                              
#endif
/**     ClassName-> UIButton                                
SEL-> focusedViewWillChange     */
- (MLChain4UIButton *(^)())focusedViewWillChange;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4UIButton *(^)())didUpdateFocusFromView;


#ifndef focusedViewDidChange                              
#define focusedViewDidChange(...)  focusedViewDidChange(@"focusedViewDidChange")                              
#endif
/**     ClassName-> UIButton                                
SEL-> focusedViewDidChange     */
- (MLChain4UIButton *(^)())focusedViewDidChange;


#ifndef removeConstraint                                  
#define removeConstraint(...)  removeConstraint(@"removeConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeConstraint: '@'
     */
- (MLChain4UIButton *(^)())removeConstraint;


#ifndef addConstraint                                  
#define addConstraint(...)  addConstraint(@"addConstraint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addConstraint: '@'
     */
- (MLChain4UIButton *(^)())addConstraint;


#ifndef removeLayoutGuide                                  
#define removeLayoutGuide(...)  removeLayoutGuide(@"removeLayoutGuide:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeLayoutGuide: '@'
     */
- (MLChain4UIButton *(^)())removeLayoutGuide;


#ifndef tapDelegate                                  
#define tapDelegate(...)  tapDelegate(@"setTapDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTapDelegate: '@'
     */
- (MLChain4UIButton *(^)())tapDelegate;


#ifndef layoutMargins                                  
#define layoutMargins(...)  layoutMargins(@"setLayoutMargins:", __VA_ARGS__)                                  
#endif
#ifndef layoutMargins_             
#define layoutMargins_(...)  layoutMargins(UIEdgeInsetsMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setLayoutMargins: '{'
     */
- (MLChain4UIButton *(^)())layoutMargins;


#ifndef preservesSuperviewLayoutMargins                                  
#define preservesSuperviewLayoutMargins(...)  preservesSuperviewLayoutMargins(@"setPreservesSuperviewLayoutMargins:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setPreservesSuperviewLayoutMargins: 'B'
     */
- (MLChain4UIButton *(^)())preservesSuperviewLayoutMargins;


#ifndef tintAdjustmentMode                                  
#define tintAdjustmentMode(...)  tintAdjustmentMode(@"setTintAdjustmentMode:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTintAdjustmentMode: 'q'
     */
- (MLChain4UIButton *(^)())tintAdjustmentMode;


#ifndef interactionTintColorDidChange                              
#define interactionTintColorDidChange(...)  interactionTintColorDidChange(@"interactionTintColorDidChange")                              
#endif
/**     ClassName-> UIButton                                
SEL-> interactionTintColorDidChange     */
- (MLChain4UIButton *(^)())interactionTintColorDidChange;


#ifndef maskView                                  
#define maskView(...)  maskView(@"setMaskView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setMaskView: '@'
     */
- (MLChain4UIButton *(^)())maskView;


#ifndef motionEffects                                  
#define motionEffects(...)  motionEffects(@"setMotionEffects:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setMotionEffects: '@'
     */
- (MLChain4UIButton *(^)())motionEffects;


#ifndef tag                                  
#define tag(...)  tag(@"setTag:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setTag: 'q'
     */
- (MLChain4UIButton *(^)())tag;


#ifndef visualState                                  
#define visualState(...)  visualState(@"setVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setVisualState: '@'
     */
- (MLChain4UIButton *(^)())visualState;


#ifndef setNeedsUpdateViewHierarchyIfSizeChanged                              
#define setNeedsUpdateViewHierarchyIfSizeChanged(...)  setNeedsUpdateViewHierarchyIfSizeChanged(@"setNeedsUpdateViewHierarchyIfSizeChanged")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setNeedsUpdateViewHierarchyIfSizeChanged     */
- (MLChain4UIButton *(^)())setNeedsUpdateViewHierarchyIfSizeChanged;


#ifndef resizeSubviewsWithOldSize                                  
#define resizeSubviewsWithOldSize(...)  resizeSubviewsWithOldSize(@"resizeSubviewsWithOldSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeSubviewsWithOldSize_             
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   resizeSubviewsWithOldSize: '{'
     */
- (MLChain4UIButton *(^)())resizeSubviewsWithOldSize;


#ifndef resizeWithOldSuperviewSize                                  
#define resizeWithOldSuperviewSize(...)  resizeWithOldSuperviewSize(@"resizeWithOldSuperviewSize:", __VA_ARGS__)                                  
#endif
#ifndef resizeWithOldSuperviewSize_             
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   resizeWithOldSuperviewSize: '{'
     */
- (MLChain4UIButton *(^)())resizeWithOldSuperviewSize;


#ifndef multipleTouchEnabled                                  
#define multipleTouchEnabled(...)  multipleTouchEnabled(@"setMultipleTouchEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setMultipleTouchEnabled: 'B'
     */
- (MLChain4UIButton *(^)())multipleTouchEnabled;


#ifndef exclusiveTouch                                  
#define exclusiveTouch(...)  exclusiveTouch(@"setExclusiveTouch:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setExclusiveTouch: 'B'
     */
- (MLChain4UIButton *(^)())exclusiveTouch;


#ifndef frame_forFields                                  
#define frame_forFields(...)  frame_forFields(@"setFrame:forFields:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setFrame: '{'
  forFields: 'i'
     */
- (MLChain4UIButton *(^)())frame_forFields;


#ifndef rotationBy                                  
#define rotationBy(...)  rotationBy(@"setRotationBy:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setRotationBy: 'f'
     */
- (MLChain4UIButton *(^)())rotationBy;


#ifndef sizeToFit                              
#define sizeToFit(...)  sizeToFit(@"sizeToFit")                              
#endif
/**     ClassName-> UIButton                                
SEL-> sizeToFit     */
- (MLChain4UIButton *(^)())sizeToFit;


#ifndef viewGenerator                                  
#define viewGenerator(...)  viewGenerator(@"setViewGenerator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setViewGenerator: '@'
     */
- (MLChain4UIButton *(^)())viewGenerator;


#ifndef viewGenerationInfo                                  
#define viewGenerationInfo(...)  viewGenerationInfo(@"setViewGenerationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setViewGenerationInfo: '@'
     */
- (MLChain4UIButton *(^)())viewGenerationInfo;


#ifndef setNeedsUpdateViewHierarchy                              
#define setNeedsUpdateViewHierarchy(...)  setNeedsUpdateViewHierarchy(@"setNeedsUpdateViewHierarchy")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setNeedsUpdateViewHierarchy     */
- (MLChain4UIButton *(^)())setNeedsUpdateViewHierarchy;


#ifndef prepareViewVisualStateOfViewSubhierarchy                              
#define prepareViewVisualStateOfViewSubhierarchy(...)  prepareViewVisualStateOfViewSubhierarchy(@"prepareViewVisualStateOfViewSubhierarchy")                              
#endif
/**     ClassName-> UIButton                                
SEL-> prepareViewVisualStateOfViewSubhierarchy     */
- (MLChain4UIButton *(^)())prepareViewVisualStateOfViewSubhierarchy;


#ifndef emptySubviewsOfGeneratorSubhierarchy                              
#define emptySubviewsOfGeneratorSubhierarchy(...)  emptySubviewsOfGeneratorSubhierarchy(@"emptySubviewsOfGeneratorSubhierarchy")                              
#endif
/**     ClassName-> UIButton                                
SEL-> emptySubviewsOfGeneratorSubhierarchy     */
- (MLChain4UIButton *(^)())emptySubviewsOfGeneratorSubhierarchy;


#ifndef sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType                                  
#define sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(...)  sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType(@"sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState:animated:appearingType:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
  appearingType: 'q'
     */
- (MLChain4UIButton *(^)())sendAppearanceCallbacksForAppearingViewWithSubHierarchyAppearanceState_animated_appearingType;


#ifndef applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange                                  
#define applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(...)  applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange(@"applyUpdatesRecursively:subHierarchyAppearanceState:immediateAnimated:newChange:", (int)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   applyUpdatesRecursively: 'B'
  subHierarchyAppearanceState: 'q'
  immediateAnimated: 'B'
  newChange: 'B'
     */
- (MLChain4UIButton *(^)())applyUpdatesRecursively_subHierarchyAppearanceState_immediateAnimated_newChange;


#ifndef sendViewWillAppearAnimated                                  
#define sendViewWillAppearAnimated(...)  sendViewWillAppearAnimated(@"sendViewWillAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendViewWillAppearAnimated: 'B'
     */
- (MLChain4UIButton *(^)())sendViewWillAppearAnimated;


#ifndef sendViewDidAppearAnimated                                  
#define sendViewDidAppearAnimated(...)  sendViewDidAppearAnimated(@"sendViewDidAppearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendViewDidAppearAnimated: 'B'
     */
- (MLChain4UIButton *(^)())sendViewDidAppearAnimated;


#ifndef sendViewWillDisappearAnimated                                  
#define sendViewWillDisappearAnimated(...)  sendViewWillDisappearAnimated(@"sendViewWillDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendViewWillDisappearAnimated: 'B'
     */
- (MLChain4UIButton *(^)())sendViewWillDisappearAnimated;


#ifndef sendViewDidDisappearAnimated                                  
#define sendViewDidDisappearAnimated(...)  sendViewDidDisappearAnimated(@"sendViewDidDisappearAnimated:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendViewDidDisappearAnimated: 'B'
     */
- (MLChain4UIButton *(^)())sendViewDidDisappearAnimated;


#ifndef sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated                                  
#define sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(...)  sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated(@"sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState:animated:", (long long)metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState: 'q'
  animated: 'B'
     */
- (MLChain4UIButton *(^)())sendAppearanceCallbacksForDisappearingViewWithSubHierarchyAppearanceState_animated;


#ifndef viewsWithPendingAppearanceCompletionCallbacks                                  
#define viewsWithPendingAppearanceCompletionCallbacks(...)  viewsWithPendingAppearanceCompletionCallbacks(@"setViewsWithPendingAppearanceCompletionCallbacks:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setViewsWithPendingAppearanceCompletionCallbacks: '@'
     */
- (MLChain4UIButton *(^)())viewsWithPendingAppearanceCompletionCallbacks;


#ifndef pushVisualStateRecursively                              
#define pushVisualStateRecursively(...)  pushVisualStateRecursively(@"pushVisualStateRecursively")                              
#endif
/**     ClassName-> UIButton                                
SEL-> pushVisualStateRecursively     */
- (MLChain4UIButton *(^)())pushVisualStateRecursively;


#ifndef previousVisualState                                  
#define previousVisualState(...)  previousVisualState(@"setPreviousVisualState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setPreviousVisualState: '@'
     */
- (MLChain4UIButton *(^)())previousVisualState;


#ifndef resolvePendingAppearanceCallbacks                              
#define resolvePendingAppearanceCallbacks(...)  resolvePendingAppearanceCallbacks(@"resolvePendingAppearanceCallbacks")                              
#endif
/**     ClassName-> UIButton                                
SEL-> resolvePendingAppearanceCallbacks     */
- (MLChain4UIButton *(^)())resolvePendingAppearanceCallbacks;


#ifndef resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy                              
#define resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(...)  resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy(@"resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy")                              
#endif
/**     ClassName-> UIButton                                
SEL-> resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy     */
- (MLChain4UIButton *(^)())resolvePendingAppearanceCallbacksRecursivelyInSubHierarchy;


#ifndef performForSubviewsInAllVisualStates                                  
#define performForSubviewsInAllVisualStates(...)  performForSubviewsInAllVisualStates(@"performForSubviewsInAllVisualStates:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performForSubviewsInAllVisualStates: '@'
     */
- (MLChain4UIButton *(^)())performForSubviewsInAllVisualStates;


#ifndef resolvePendingDisappearanceCallbacksRecursively                              
#define resolvePendingDisappearanceCallbacksRecursively(...)  resolvePendingDisappearanceCallbacksRecursively(@"resolvePendingDisappearanceCallbacksRecursively")                              
#endif
/**     ClassName-> UIButton                                
SEL-> resolvePendingDisappearanceCallbacksRecursively     */
- (MLChain4UIButton *(^)())resolvePendingDisappearanceCallbacksRecursively;


#ifndef performCompletionCallbacksPending                                  
#define performCompletionCallbacksPending(...)  performCompletionCallbacksPending(@"performCompletionCallbacksPending:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performCompletionCallbacksPending: 'B'
     */
- (MLChain4UIButton *(^)())performCompletionCallbacksPending;


#ifndef performCompletionAppearanceCallbacksForSubHierarchy                              
#define performCompletionAppearanceCallbacksForSubHierarchy(...)  performCompletionAppearanceCallbacksForSubHierarchy(@"performCompletionAppearanceCallbacksForSubHierarchy")                              
#endif
/**     ClassName-> UIButton                                
SEL-> performCompletionAppearanceCallbacksForSubHierarchy     */
- (MLChain4UIButton *(^)())performCompletionAppearanceCallbacksForSubHierarchy;


#ifndef updateIfNeededRecursively                              
#define updateIfNeededRecursively(...)  updateIfNeededRecursively(@"updateIfNeededRecursively")                              
#endif
/**     ClassName-> UIButton                                
SEL-> updateIfNeededRecursively     */
- (MLChain4UIButton *(^)())updateIfNeededRecursively;


#ifndef applyUpdatesRecursively                              
#define applyUpdatesRecursively(...)  applyUpdatesRecursively(@"applyUpdatesRecursively")                              
#endif
/**     ClassName-> UIButton                                
SEL-> applyUpdatesRecursively     */
- (MLChain4UIButton *(^)())applyUpdatesRecursively;


#ifndef performCompletionAppearanceCallbacksForSubview                                  
#define performCompletionAppearanceCallbacksForSubview(...)  performCompletionAppearanceCallbacksForSubview(@"performCompletionAppearanceCallbacksForSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performCompletionAppearanceCallbacksForSubview: '@'
     */
- (MLChain4UIButton *(^)())performCompletionAppearanceCallbacksForSubview;


#ifndef viewTraversalMark                                  
#define viewTraversalMark(...)  viewTraversalMark(@"setViewTraversalMark:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setViewTraversalMark: 'B'
     */
- (MLChain4UIButton *(^)())viewTraversalMark;


#ifndef willMoveToWindow                                  
#define willMoveToWindow(...)  willMoveToWindow(@"willMoveToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willMoveToWindow: '@'
     */
- (MLChain4UIButton *(^)())willMoveToWindow;


#ifndef deferredBecomeFirstResponder                              
#define deferredBecomeFirstResponder(...)  deferredBecomeFirstResponder(@"deferredBecomeFirstResponder")                              
#endif
/**     ClassName-> UIButton                                
SEL-> deferredBecomeFirstResponder     */
- (MLChain4UIButton *(^)())deferredBecomeFirstResponder;


#ifndef movedFromSuperview                                  
#define movedFromSuperview(...)  movedFromSuperview(@"movedFromSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   movedFromSuperview: '@'
     */
- (MLChain4UIButton *(^)())movedFromSuperview;


#ifndef didMoveToSuperview                              
#define didMoveToSuperview(...)  didMoveToSuperview(@"didMoveToSuperview")                              
#endif
/**     ClassName-> UIButton                                
SEL-> didMoveToSuperview     */
- (MLChain4UIButton *(^)())didMoveToSuperview;


#ifndef exchangeSubviewAtIndex_withSubviewAtIndex                                  
#define exchangeSubviewAtIndex_withSubviewAtIndex(...)  exchangeSubviewAtIndex_withSubviewAtIndex(@"exchangeSubviewAtIndex:withSubviewAtIndex:", (long long)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   exchangeSubviewAtIndex: 'q'
  withSubviewAtIndex: 'q'
     */
- (MLChain4UIButton *(^)())exchangeSubviewAtIndex_withSubviewAtIndex;


#ifndef insertSubview_aboveSubview                                  
#define insertSubview_aboveSubview(...)  insertSubview_aboveSubview(@"insertSubview:aboveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   insertSubview: '@'
  aboveSubview: '@'
     */
- (MLChain4UIButton *(^)())insertSubview_aboveSubview;


#ifndef didAddSubview                                  
#define didAddSubview(...)  didAddSubview(@"didAddSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   didAddSubview: '@'
     */
- (MLChain4UIButton *(^)())didAddSubview;


#ifndef willMoveToSuperview                                  
#define willMoveToSuperview(...)  willMoveToSuperview(@"willMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willMoveToSuperview: '@'
     */
- (MLChain4UIButton *(^)())willMoveToSuperview;


#ifndef insertSubview_above                                  
#define insertSubview_above(...)  insertSubview_above(@"insertSubview:above:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   insertSubview: '@'
  above: '@'
     */
- (MLChain4UIButton *(^)())insertSubview_above;


#ifndef movedToSuperview                                  
#define movedToSuperview(...)  movedToSuperview(@"movedToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   movedToSuperview: '@'
     */
- (MLChain4UIButton *(^)())movedToSuperview;


#ifndef viewWillMoveToSuperview                                  
#define viewWillMoveToSuperview(...)  viewWillMoveToSuperview(@"viewWillMoveToSuperview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   viewWillMoveToSuperview: '@'
     */
- (MLChain4UIButton *(^)())viewWillMoveToSuperview;


#ifndef viewDidMoveToSuperview                              
#define viewDidMoveToSuperview(...)  viewDidMoveToSuperview(@"viewDidMoveToSuperview")                              
#endif
/**     ClassName-> UIButton                                
SEL-> viewDidMoveToSuperview     */
- (MLChain4UIButton *(^)())viewDidMoveToSuperview;


#ifndef movedFromWindow                                  
#define movedFromWindow(...)  movedFromWindow(@"movedFromWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   movedFromWindow: '@'
     */
- (MLChain4UIButton *(^)())movedFromWindow;


#ifndef movedToWindow                                  
#define movedToWindow(...)  movedToWindow(@"movedToWindow:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   movedToWindow: '@'
     */
- (MLChain4UIButton *(^)())movedToWindow;


#ifndef clearsContext                                  
#define clearsContext(...)  clearsContext(@"setClearsContext:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setClearsContext: 'B'
     */
- (MLChain4UIButton *(^)())clearsContext;


#ifndef recursivelyForceDisplayIfNeeded                              
#define recursivelyForceDisplayIfNeeded(...)  recursivelyForceDisplayIfNeeded(@"recursivelyForceDisplayIfNeeded")                              
#endif
/**     ClassName-> UIButton                                
SEL-> recursivelyForceDisplayIfNeeded     */
- (MLChain4UIButton *(^)())recursivelyForceDisplayIfNeeded;


#ifndef contentStretch                                  
#define contentStretch(...)  contentStretch(@"setContentStretch:", __VA_ARGS__)                                  
#endif
#ifndef contentStretch_             
#define contentStretch_(...)  contentStretch(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setContentStretch: '{'
     */
- (MLChain4UIButton *(^)())contentStretch;


#ifndef fixedBackgroundPattern                                  
#define fixedBackgroundPattern(...)  fixedBackgroundPattern(@"setFixedBackgroundPattern:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setFixedBackgroundPattern: 'B'
     */
- (MLChain4UIButton *(^)())fixedBackgroundPattern;


#ifndef contentsPosition                                  
#define contentsPosition(...)  contentsPosition(@"setContentsPosition:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setContentsPosition: 'i'
     */
- (MLChain4UIButton *(^)())contentsPosition;


#ifndef skipsSubviewEnumeration                                  
#define skipsSubviewEnumeration(...)  skipsSubviewEnumeration(@"setSkipsSubviewEnumeration:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setSkipsSubviewEnumeration: 'B'
     */
- (MLChain4UIButton *(^)())skipsSubviewEnumeration;


#ifndef gestureRecognizers                                  
#define gestureRecognizers(...)  gestureRecognizers(@"setGestureRecognizers:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setGestureRecognizers: '@'
     */
- (MLChain4UIButton *(^)())gestureRecognizers;


#ifndef gesturesEnabled                                  
#define gesturesEnabled(...)  gesturesEnabled(@"setGesturesEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setGesturesEnabled: 'B'
     */
- (MLChain4UIButton *(^)())gesturesEnabled;


#ifndef deliversTouchesForGesturesToSuperview                                  
#define deliversTouchesForGesturesToSuperview(...)  deliversTouchesForGesturesToSuperview(@"setDeliversTouchesForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setDeliversTouchesForGesturesToSuperview: 'B'
     */
- (MLChain4UIButton *(^)())deliversTouchesForGesturesToSuperview;


#ifndef deliversButtonsForGesturesToSuperview                                  
#define deliversButtonsForGesturesToSuperview(...)  deliversButtonsForGesturesToSuperview(@"setDeliversButtonsForGesturesToSuperview:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setDeliversButtonsForGesturesToSuperview: 'B'
     */
- (MLChain4UIButton *(^)())deliversButtonsForGesturesToSuperview;


#ifndef updateUserActivityState                                  
#define updateUserActivityState(...)  updateUserActivityState(@"updateUserActivityState:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   updateUserActivityState: '@'
     */
- (MLChain4UIButton *(^)())updateUserActivityState;


#ifndef setNeedsUpdateConstraints                              
#define setNeedsUpdateConstraints(...)  setNeedsUpdateConstraints(@"setNeedsUpdateConstraints")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setNeedsUpdateConstraints     */
- (MLChain4UIButton *(^)())setNeedsUpdateConstraints;


#ifndef animator_stopAnimation                                  
#define animator_stopAnimation(...)  animator_stopAnimation(@"animator:stopAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   animator: '@'
  stopAnimation: '@'
     */
- (MLChain4UIButton *(^)())animator_stopAnimation;


#ifndef animator_startAnimation                                  
#define animator_startAnimation(...)  animator_startAnimation(@"animator:startAnimation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   animator: '@'
  startAnimation: '@'
     */
- (MLChain4UIButton *(^)())animator_startAnimation;


#ifndef contentHuggingPriority_forAxis                                  
#define contentHuggingPriority_forAxis(...)  contentHuggingPriority_forAxis(@"setContentHuggingPriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setContentHuggingPriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIButton *(^)())contentHuggingPriority_forAxis;


#ifndef gestureStarted                                  
#define gestureStarted(...)  gestureStarted(@"gestureStarted:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   gestureStarted: '^'
     */
- (MLChain4UIButton *(^)())gestureStarted;


#ifndef gestureChanged                                  
#define gestureChanged(...)  gestureChanged(@"gestureChanged:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   gestureChanged: '^'
     */
- (MLChain4UIButton *(^)())gestureChanged;


#ifndef zoomToScale                                  
#define zoomToScale(...)  zoomToScale(@"zoomToScale:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   zoomToScale: 'f'
     */
- (MLChain4UIButton *(^)())zoomToScale;


#ifndef rotateToDegrees                                  
#define rotateToDegrees(...)  rotateToDegrees(@"rotateToDegrees:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   rotateToDegrees: 'f'
     */
- (MLChain4UIButton *(^)())rotateToDegrees;


#ifndef gestureDelegate                                  
#define gestureDelegate(...)  gestureDelegate(@"setGestureDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setGestureDelegate: '@'
     */
- (MLChain4UIButton *(^)())gestureDelegate;


#ifndef enabledGestures                                  
#define enabledGestures(...)  enabledGestures(@"setEnabledGestures:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setEnabledGestures: 'i'
     */
- (MLChain4UIButton *(^)())enabledGestures;


#ifndef value_forGestureAttribute                                  
#define value_forGestureAttribute(...)  value_forGestureAttribute(@"setValue:forGestureAttribute:", metamacro_at(0, __VA_ARGS__), (int)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setValue: '@'
  forGestureAttribute: 'i'
     */
- (MLChain4UIButton *(^)())value_forGestureAttribute;


#ifndef rotationDegrees_duration                                  
#define rotationDegrees_duration(...)  rotationDegrees_duration(@"setRotationDegrees:duration:", (float)metamacro_at(0, __VA_ARGS__), (double)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setRotationDegrees: 'f'
  duration: 'd'
     */
- (MLChain4UIButton *(^)())rotationDegrees_duration;


#ifndef updateConstraintsIfNeeded                              
#define updateConstraintsIfNeeded(...)  updateConstraintsIfNeeded(@"updateConstraintsIfNeeded")                              
#endif
/**     ClassName-> UIButton                                
SEL-> updateConstraintsIfNeeded     */
- (MLChain4UIButton *(^)())updateConstraintsIfNeeded;


#ifndef reduceWidth                                  
#define reduceWidth(...)  reduceWidth(@"reduceWidth:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   reduceWidth: 'd'
     */
- (MLChain4UIButton *(^)())reduceWidth;


#ifndef contentCompressionResistancePriority_forAxis                                  
#define contentCompressionResistancePriority_forAxis(...)  contentCompressionResistancePriority_forAxis(@"setContentCompressionResistancePriority:forAxis:", (float)metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setContentCompressionResistancePriority: 'f'
  forAxis: 'q'
     */
- (MLChain4UIButton *(^)())contentCompressionResistancePriority_forAxis;


#ifndef drawRect_forViewPrintFormatter                                  
#define drawRect_forViewPrintFormatter(...)  drawRect_forViewPrintFormatter(@"drawRect:forViewPrintFormatter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   drawRect: '{'
  forViewPrintFormatter: '@'
     */
- (MLChain4UIButton *(^)())drawRect_forViewPrintFormatter;


#ifndef exerciseAmbiguityInLayout                              
#define exerciseAmbiguityInLayout(...)  exerciseAmbiguityInLayout(@"exerciseAmbiguityInLayout")                              
#endif
/**     ClassName-> UIButton                                
SEL-> exerciseAmbiguityInLayout     */
- (MLChain4UIButton *(^)())exerciseAmbiguityInLayout;


#ifndef hidden                                  
#define hidden(...)  hidden(@"setHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setHidden: 'B'
     */
- (MLChain4UIButton *(^)())hidden;


#ifndef size                                  
#define size(...)  size(@"setSize:", __VA_ARGS__)                                  
#endif
#ifndef size_             
#define size_(...)  size(CGSizeMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setSize: '{'
     */
- (MLChain4UIButton *(^)())size;


#ifndef backgroundColor                                  
#define backgroundColor(...)  backgroundColor(@"setBackgroundColor:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setBackgroundColor: '@'
     */
- (MLChain4UIButton *(^)())backgroundColor;


#ifndef removeFromSuperview                              
#define removeFromSuperview(...)  removeFromSuperview(@"removeFromSuperview")                              
#endif
/**     ClassName-> UIButton                                
SEL-> removeFromSuperview     */
- (MLChain4UIButton *(^)())removeFromSuperview;


#ifndef opaque                                  
#define opaque(...)  opaque(@"setOpaque:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setOpaque: 'B'
     */
- (MLChain4UIButton *(^)())opaque;


#ifndef addSubview                                  
#define addSubview(...)  addSubview(@"addSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addSubview: '@'
     */
- (MLChain4UIButton *(^)())addSubview;


#ifndef drawRect                                  
#define drawRect(...)  drawRect(@"drawRect:", __VA_ARGS__)                                  
#endif
#ifndef drawRect_             
#define drawRect_(...)  drawRect(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   drawRect: '{'
     */
- (MLChain4UIButton *(^)())drawRect;


#ifndef frameOrigin                                  
#define frameOrigin(...)  frameOrigin(@"setFrameOrigin:", __VA_ARGS__)                                  
#endif
#ifndef frameOrigin_             
#define frameOrigin_(...)  frameOrigin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setFrameOrigin: '{'
     */
- (MLChain4UIButton *(^)())frameOrigin;


#ifndef willRemoveSubview                                  
#define willRemoveSubview(...)  willRemoveSubview(@"willRemoveSubview:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willRemoveSubview: '@'
     */
- (MLChain4UIButton *(^)())willRemoveSubview;


#ifndef autoresizingMask                                  
#define autoresizingMask(...)  autoresizingMask(@"setAutoresizingMask:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAutoresizingMask: 'Q'
     */
- (MLChain4UIButton *(^)())autoresizingMask;


#ifndef charge                                  
#define charge(...)  charge(@"setCharge:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setCharge: 'f'
     */
- (MLChain4UIButton *(^)())charge;


#ifndef origin                                  
#define origin(...)  origin(@"setOrigin:", __VA_ARGS__)                                  
#endif
#ifndef origin_             
#define origin_(...)  origin(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setOrigin: '{'
     */
- (MLChain4UIButton *(^)())origin;


#ifndef pressesEnded_withEvent                                  
#define pressesEnded_withEvent(...)  pressesEnded_withEvent(@"pressesEnded:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   pressesEnded: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())pressesEnded_withEvent;


#ifndef pressesCancelled_withEvent                                  
#define pressesCancelled_withEvent(...)  pressesCancelled_withEvent(@"pressesCancelled:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   pressesCancelled: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())pressesCancelled_withEvent;


#ifndef motionBegan_withEvent                                  
#define motionBegan_withEvent(...)  motionBegan_withEvent(@"motionBegan:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   motionBegan: 'q'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())motionBegan_withEvent;


#ifndef motionEnded_withEvent                                  
#define motionEnded_withEvent(...)  motionEnded_withEvent(@"motionEnded:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   motionEnded: 'q'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())motionEnded_withEvent;


#ifndef motionCancelled_withEvent                                  
#define motionCancelled_withEvent(...)  motionCancelled_withEvent(@"motionCancelled:withEvent:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   motionCancelled: 'q'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())motionCancelled_withEvent;


#ifndef encodeRestorableStateWithCoder                                  
#define encodeRestorableStateWithCoder(...)  encodeRestorableStateWithCoder(@"encodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   encodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIButton *(^)())encodeRestorableStateWithCoder;


#ifndef decodeRestorableStateWithCoder                                  
#define decodeRestorableStateWithCoder(...)  decodeRestorableStateWithCoder(@"decodeRestorableStateWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   decodeRestorableStateWithCoder: '@'
     */
- (MLChain4UIButton *(^)())decodeRestorableStateWithCoder;


#ifndef pressesChanged_withEvent                                  
#define pressesChanged_withEvent(...)  pressesChanged_withEvent(@"pressesChanged:withEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   pressesChanged: '@'
  withEvent: '@'
     */
- (MLChain4UIButton *(^)())pressesChanged_withEvent;


#ifndef restorationIdentifier                                  
#define restorationIdentifier(...)  restorationIdentifier(@"setRestorationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setRestorationIdentifier: '@'
     */
- (MLChain4UIButton *(^)())restorationIdentifier;


#ifndef beginSelectionChange                              
#define beginSelectionChange(...)  beginSelectionChange(@"beginSelectionChange")                              
#endif
/**     ClassName-> UIButton                                
SEL-> beginSelectionChange     */
- (MLChain4UIButton *(^)())beginSelectionChange;


#ifndef endSelectionChange                              
#define endSelectionChange(...)  endSelectionChange(@"endSelectionChange")                              
#endif
/**     ClassName-> UIButton                                
SEL-> endSelectionChange     */
- (MLChain4UIButton *(^)())endSelectionChange;


#ifndef userActivity                                  
#define userActivity(...)  userActivity(@"setUserActivity:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setUserActivity: '@'
     */
- (MLChain4UIButton *(^)())userActivity;


#ifndef reloadInputViews                              
#define reloadInputViews(...)  reloadInputViews(@"reloadInputViews")                              
#endif
/**     ClassName-> UIButton                                
SEL-> reloadInputViews     */
- (MLChain4UIButton *(^)())reloadInputViews;


#ifndef remoteControlReceivedWithEvent                                  
#define remoteControlReceivedWithEvent(...)  remoteControlReceivedWithEvent(@"remoteControlReceivedWithEvent:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   remoteControlReceivedWithEvent: '@'
     */
- (MLChain4UIButton *(^)())remoteControlReceivedWithEvent;


#ifndef reloadInputViewsWithoutReset                              
#define reloadInputViewsWithoutReset(...)  reloadInputViewsWithoutReset(@"reloadInputViewsWithoutReset")                              
#endif
/**     ClassName-> UIButton                                
SEL-> reloadInputViewsWithoutReset     */
- (MLChain4UIButton *(^)())reloadInputViewsWithoutReset;


#ifndef scrollWheel                                  
#define scrollWheel(...)  scrollWheel(@"scrollWheel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   scrollWheel: '^'
     */
- (MLChain4UIButton *(^)())scrollWheel;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> UIButton                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4UIButton *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4UIButton *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4UIButton *(^)())featureIdentifier;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4UIButton *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4UIButton *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4UIButton *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4UIButton *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> UIButton                                
SEL-> accessibilityIncrement     */
- (MLChain4UIButton *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> UIButton                                
SEL-> accessibilityDecrement     */
- (MLChain4UIButton *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4UIButton *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> UIButton                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4UIButton *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> UIButton                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4UIButton *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4UIButton *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4UIButton *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4UIButton *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4UIButton *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4UIButton *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> UIButton                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4UIButton *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4UIButton *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4UIButton *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4UIButton *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4UIButton *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4UIButton *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4UIButton *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4UIButton *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4UIButton *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4UIButton *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> UIButton                                
SEL-> awakeFromNib     */
- (MLChain4UIButton *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> UIButton                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4UIButton *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> UIButton                                
SEL-> releaseOnMainThread     */
- (MLChain4UIButton *(^)())releaseOnMainThread;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4UIButton *(^)())encodeWithCAMLWriter;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> UIButton                                
SEL-> CA_prepareRenderValue     */
- (MLChain4UIButton *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4UIButton *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeObservation: '@'
     */
- (MLChain4UIButton *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4UIButton *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> UIButton                                
SEL-> finishObserving     */
- (MLChain4UIButton *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIButton *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4UIButton *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIButton *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4UIButton *(^)())performSelectorInBackground_withObject;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4UIButton *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4UIButton *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4UIButton *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4UIButton *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4UIButton *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4UIButton *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4UIButton *(^)())observationInfo;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIButton *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4UIButton *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIButton *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4UIButton *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4UIButton *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4UIButton *(^)())didChangeValueForKey;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4UIButton *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> UIButton                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4UIButton *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4UIButton *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4UIButton *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4UIButton *(^)())value_forUndefinedKey;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4UIButton *(^)())nilValueForKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4UIButton *(^)())value_forKeyPath;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4UIButton *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> UIButton                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4UIButton *(^)())doesNotRecognizeSelector;


@end

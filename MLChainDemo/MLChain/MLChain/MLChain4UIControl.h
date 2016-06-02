//  
//  MLChain4UIControl.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UIControl);
@interface MLChain4UIControl:MLChain4UIView
@property (nonatomic, strong)UIControl *control;
#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)enabled;

#ifndef addTarget_action_forControlEvents
#define addTarget_action_forControlEvents(...) addTarget_action_forControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)addTarget_action_forControlEvents;

- (MLChainParamBlock4UIControl)touchesBegan_withEvent;

- (MLChainParamBlock4UIControl)touchesMoved_withEvent;

- (MLChainParamBlock4UIControl)touchesEnded_withEvent;

- (MLChainParamBlock4UIControl)touchesCancelled_withEvent;

- (MLChainParamBlock4UIControl)touchesEstimatedPropertiesUpdated;

#ifndef highlighted
#define highlighted(...) highlighted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)highlighted;

#ifndef sendActionsForControlEvents
#define sendActionsForControlEvents(...) sendActionsForControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)sendActionsForControlEvents;

#ifndef contentHorizontalAlignment
#define contentHorizontalAlignment(...) contentHorizontalAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)contentHorizontalAlignment;

#ifndef contentVerticalAlignment
#define contentVerticalAlignment(...) contentVerticalAlignment(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)contentVerticalAlignment;

#ifndef selected
#define selected(...) selected(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)selected;

#ifndef tracking
#define tracking(...) tracking(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)tracking;

- (MLChainParamBlock4UIControl)cancelTrackingWithEvent;

- (MLChainParamBlock4UIControl)endTrackingWithTouch_withEvent;

#ifndef sendAction_to_forEvent
#define sendAction_to_forEvent(...) sendAction_to_forEvent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)sendAction_to_forEvent;

#ifndef removeTarget_action_forControlEvents
#define removeTarget_action_forControlEvents(...) removeTarget_action_forControlEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)removeTarget_action_forControlEvents;

#ifndef requiresDisplayOnTracking
#define requiresDisplayOnTracking(...) requiresDisplayOnTracking(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)requiresDisplayOnTracking;

#ifndef addTarget_action_forEvents
#define addTarget_action_forEvents(...) addTarget_action_forEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)addTarget_action_forEvents;

#ifndef removeTarget_forEvents
#define removeTarget_forEvents(...) removeTarget_forEvents(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIControl)removeTarget_forEvents;

- (MLChainParamBlock4UIControl)encodeWithCoder;

@end

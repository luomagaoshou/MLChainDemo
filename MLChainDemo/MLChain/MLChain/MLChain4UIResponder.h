//  
//  MLChain4UIResponder.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UIResponder);
@interface MLChain4UIResponder:MLChain4NSObject
@property (nonatomic, strong)UIResponder *responder;
- (MLChainParamBlock4UIResponder)touchesBegan_withEvent;

- (MLChainParamBlock4UIResponder)touchesMoved_withEvent;

- (MLChainParamBlock4UIResponder)touchesEnded_withEvent;

- (MLChainParamBlock4UIResponder)touchesCancelled_withEvent;

- (MLChainParamBlock4UIResponder)pressesBegan_withEvent;

- (MLChainParamBlock4UIResponder)pressesEnded_withEvent;

- (MLChainParamBlock4UIResponder)pressesCancelled_withEvent;

- (MLChainParamBlock4UIResponder)touchesEstimatedPropertiesUpdated;

- (MLChainParamBlock4UIResponder)updateUserActivityState;

- (MLChainParamBlock4UIResponder)restoreUserActivityState;

#ifndef motionEnded_withEvent
#define motionEnded_withEvent(...) motionEnded_withEvent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIResponder)motionEnded_withEvent;

- (MLChainParamBlock4UIResponder)encodeRestorableStateWithCoder;

- (MLChainParamBlock4UIResponder)decodeRestorableStateWithCoder;

- (MLChainParamBlock4UIResponder)pressesChanged_withEvent;

#ifndef gestureEnded
#define gestureEnded(...) gestureEnded(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIResponder)gestureEnded;

- (MLChainParamBlock4UIResponder)restorationIdentifier;

- (MLChainParamBlock4UIResponder)beginSelectionChange;

- (MLChainParamBlock4UIResponder)endSelectionChange;

- (MLChainParamBlock4UIResponder)userActivity;

- (MLChainParamBlock4UIResponder)reloadInputViews;

#ifndef motionBegan_withEvent
#define motionBegan_withEvent(...) motionBegan_withEvent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIResponder)motionBegan_withEvent;

#ifndef motionCancelled_withEvent
#define motionCancelled_withEvent(...) motionCancelled_withEvent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIResponder)motionCancelled_withEvent;

- (MLChainParamBlock4UIResponder)remoteControlReceivedWithEvent;

#ifndef gestureStarted
#define gestureStarted(...) gestureStarted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIResponder)gestureStarted;

#ifndef gestureChanged
#define gestureChanged(...) gestureChanged(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIResponder)gestureChanged;

- (MLChainParamBlock4UIResponder)reloadInputViewsWithoutReset;

#ifndef scrollWheel
#define scrollWheel(...) scrollWheel(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIResponder)scrollWheel;

@end

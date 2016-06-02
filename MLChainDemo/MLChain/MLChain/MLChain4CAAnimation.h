//  
//  MLChain4CAAnimation.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"
#import "MLChainMacro.h"

ml_chain_block_maker(CAAnimation);
@interface MLChain4CAAnimation:MLChain4NSObject
@property (nonatomic, strong)CAAnimation *animation;
- (MLChainParamBlock4CAAnimation)value_forUndefinedKey;

- (MLChainParamBlock4CAAnimation)value_forKeyPath;

- (MLChainParamBlock4CAAnimation)value_forKey;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)enabled;

- (MLChainParamBlock4CAAnimation)delegate;

- (MLChainParamBlock4CAAnimation)CAMLParser_setValue_forKey;

- (MLChainParamBlock4CAAnimation)encodeWithCAMLWriter;

#ifndef removedOnCompletion
#define removedOnCompletion(...) removedOnCompletion(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)removedOnCompletion;

#ifndef beginTime
#define beginTime(...) beginTime(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)beginTime;

#ifndef repeatDuration
#define repeatDuration(...) repeatDuration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)repeatDuration;

- (MLChainParamBlock4CAAnimation)fillMode;

- (MLChainParamBlock4CAAnimation)runActionForKey_object_arguments;

#ifndef defaultDuration
#define defaultDuration(...) defaultDuration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)defaultDuration;

#ifndef applyForTime_presentationObject_modelObject
#define applyForTime_presentationObject_modelObject(...) applyForTime_presentationObject_modelObject(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)applyForTime_presentationObject_modelObject;

- (MLChainParamBlock4CAAnimation)beginTimeMode;

- (MLChainParamBlock4CAAnimation)encodeWithCoder;

#ifndef duration
#define duration(...) duration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)duration;

- (MLChainParamBlock4CAAnimation)timingFunction;

#ifndef frameInterval
#define frameInterval(...) frameInterval(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)frameInterval;

#ifndef timeOff
#define timeOff(...) timeOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)timeOff;

#ifndef repeatCount
#define repeatCount(...) repeatCount(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)repeatCount;

#ifndef autoreverses
#define autoreverses(...) autoreverses(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)autoreverses;

#ifndef speed
#define speed(...) speed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAAnimation)speed;

@end

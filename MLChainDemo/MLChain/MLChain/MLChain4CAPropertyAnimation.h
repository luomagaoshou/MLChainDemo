//  
//  MLChain4CAPropertyAnimation.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAAnimation.h"
#import "MLChainMacro.h"

ml_chain_block_maker(CAPropertyAnimation);
@interface MLChain4CAPropertyAnimation:MLChain4CAAnimation
@property (nonatomic, strong)CAPropertyAnimation *propertyAnimation;
- (MLChainParamBlock4CAPropertyAnimation)keyPath;

#ifndef applyForTime_presentationObject_modelObject
#define applyForTime_presentationObject_modelObject(...) applyForTime_presentationObject_modelObject(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAPropertyAnimation)applyForTime_presentationObject_modelObject;

#ifndef cumulative
#define cumulative(...) cumulative(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAPropertyAnimation)cumulative;

#ifndef additive
#define additive(...) additive(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CAPropertyAnimation)additive;

- (MLChainParamBlock4CAPropertyAnimation)valueFunction;

@end

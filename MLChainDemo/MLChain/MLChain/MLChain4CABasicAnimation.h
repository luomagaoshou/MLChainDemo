//  
//  MLChain4CABasicAnimation.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAPropertyAnimation.h"
#import "MLChainMacro.h"

ml_chain_block_maker(CABasicAnimation);
@interface MLChain4CABasicAnimation:MLChain4CAPropertyAnimation
@property (nonatomic, strong)CABasicAnimation *basicAnimation;
- (MLChainParamBlock4CABasicAnimation)fromValue;

- (MLChainParamBlock4CABasicAnimation)CA_prepareRenderValue;

#ifndef applyForTime_presentationObject_modelObject
#define applyForTime_presentationObject_modelObject(...) applyForTime_presentationObject_modelObject(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CABasicAnimation)applyForTime_presentationObject_modelObject;

- (MLChainParamBlock4CABasicAnimation)byValue;

#ifndef endAngle
#define endAngle(...) endAngle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CABasicAnimation)endAngle;

#ifndef roundsToInteger
#define roundsToInteger(...) roundsToInteger(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CABasicAnimation)roundsToInteger;

#ifndef startAngle
#define startAngle(...) startAngle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CABasicAnimation)startAngle;

- (MLChainParamBlock4CABasicAnimation)toValue;

@end

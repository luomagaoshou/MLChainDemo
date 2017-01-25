//  
//  CAPropertyAnimation+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CAPropertyAnimation.h"



@interface CAPropertyAnimation(MLChain)
+ (MLChain4CAPropertyAnimation *)mlc_make;

- (MLChain4CAPropertyAnimation *)mlc_make;

+ (MLChain4CAPropertyAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAPropertyAnimation *maker))block;

- (MLChain4CAPropertyAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAPropertyAnimation *maker))block;


@end

//  
//  CAAnimation+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CAAnimation.h"



@interface CAAnimation(MLChain)
+ (MLChain4CAAnimation *)mlc_make;

- (MLChain4CAAnimation *)mlc_make;

+ (MLChain4CAAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAAnimation *maker))block;

- (MLChain4CAAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAAnimation *maker))block;


@end

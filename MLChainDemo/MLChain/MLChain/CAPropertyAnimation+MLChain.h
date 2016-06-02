//  
//  CAPropertyAnimation+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAPropertyAnimation.h"


@interface CAPropertyAnimation(MLChain)
+ (MLChain4CAPropertyAnimation *)ml_make;

- (MLChain4CAPropertyAnimation *)ml_make;

- (MLChain4CAPropertyAnimation *)ml_makeConfigs:(void(^)(MLChain4CAPropertyAnimation *maker))block;


@end

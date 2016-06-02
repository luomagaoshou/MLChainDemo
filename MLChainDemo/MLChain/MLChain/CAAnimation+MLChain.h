//  
//  CAAnimation+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAAnimation.h"


@interface CAAnimation(MLChain)
+ (MLChain4CAAnimation *)ml_make;

- (MLChain4CAAnimation *)ml_make;

- (MLChain4CAAnimation *)ml_makeConfigs:(void(^)(MLChain4CAAnimation *maker))block;


@end

//  
//  CABasicAnimation+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CABasicAnimation.h"


@interface CABasicAnimation(MLChain)
+ (MLChain4CABasicAnimation *)ml_make;

- (MLChain4CABasicAnimation *)ml_make;

- (MLChain4CABasicAnimation *)ml_makeConfigs:(void(^)(MLChain4CABasicAnimation *maker))block;


@end

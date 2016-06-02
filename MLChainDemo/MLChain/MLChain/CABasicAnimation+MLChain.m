//  
//  CABasicAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "CABasicAnimation+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CABasicAnimation(MLChain)
+ (MLChain4CABasicAnimation *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CABasicAnimation *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CABasicAnimation *)ml_makeConfigs:(void(^)(MLChain4CABasicAnimation *maker))block
{

MLChain4CABasicAnimation *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

//  
//  CAPropertyAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "CAPropertyAnimation+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CAPropertyAnimation(MLChain)
+ (MLChain4CAPropertyAnimation *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAPropertyAnimation *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAPropertyAnimation *)ml_makeConfigs:(void(^)(MLChain4CAPropertyAnimation *maker))block
{

MLChain4CAPropertyAnimation *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

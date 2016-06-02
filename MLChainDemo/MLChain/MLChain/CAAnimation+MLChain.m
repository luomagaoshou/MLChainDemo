//  
//  CAAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "CAAnimation+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CAAnimation(MLChain)
+ (MLChain4CAAnimation *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAAnimation *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CAAnimation *)ml_makeConfigs:(void(^)(MLChain4CAAnimation *maker))block
{

MLChain4CAAnimation *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

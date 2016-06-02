//  
//  CALayer.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "CALayer+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CALayer(MLChain)
+ (MLChain4CALayer *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CALayer *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4CALayer *)ml_makeConfigs:(void(^)(MLChain4CALayer *maker))block
{

MLChain4CALayer *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

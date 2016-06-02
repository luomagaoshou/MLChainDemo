//  
//  UIResponder.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UIResponder+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIResponder(MLChain)
+ (MLChain4UIResponder *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIResponder *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIResponder *)ml_makeConfigs:(void(^)(MLChain4UIResponder *maker))block
{

MLChain4UIResponder *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

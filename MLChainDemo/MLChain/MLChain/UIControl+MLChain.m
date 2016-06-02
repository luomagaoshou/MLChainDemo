//  
//  UIControl.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UIControl+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIControl(MLChain)
+ (MLChain4UIControl *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIControl *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIControl *)ml_makeConfigs:(void(^)(MLChain4UIControl *maker))block
{

MLChain4UIControl *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

//  
//  UIView.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UIView+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIView(MLChain)
+ (MLChain4UIView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIView *)ml_makeConfigs:(void(^)(MLChain4UIView *maker))block
{

MLChain4UIView *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

//  
//  UIScrollView.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UIScrollView+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIScrollView(MLChain)
+ (MLChain4UIScrollView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIScrollView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIScrollView *)ml_makeConfigs:(void(^)(MLChain4UIScrollView *maker))block
{

MLChain4UIScrollView *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

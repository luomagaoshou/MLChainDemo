//  
//  UIButton.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UIButton+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIButton(MLChain)
+ (MLChain4UIButton *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIButton *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UIButton *)ml_makeConfigs:(void(^)(MLChain4UIButton *maker))block
{

MLChain4UIButton *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

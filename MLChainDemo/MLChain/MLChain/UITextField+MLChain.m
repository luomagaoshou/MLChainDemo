//  
//  UITextField.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UITextField+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UITextField(MLChain)
+ (MLChain4UITextField *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UITextField *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UITextField *)ml_makeConfigs:(void(^)(MLChain4UITextField *maker))block
{

MLChain4UITextField *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

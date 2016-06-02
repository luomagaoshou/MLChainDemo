//  
//  UIControl+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIControl.h"


@interface UIControl(MLChain)
+ (MLChain4UIControl *)ml_make;

- (MLChain4UIControl *)ml_make;

- (MLChain4UIControl *)ml_makeConfigs:(void(^)(MLChain4UIControl *maker))block;


@end

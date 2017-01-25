//  
//  UIControl+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIControl.h"



@interface UIControl(MLChain)
+ (MLChain4UIControl *)mlc_make;

- (MLChain4UIControl *)mlc_make;

+ (MLChain4UIControl *)mlc_makeConfigs:(void(^)(MLChain4UIControl *maker))block;

- (MLChain4UIControl *)mlc_makeConfigs:(void(^)(MLChain4UIControl *maker))block;


@end

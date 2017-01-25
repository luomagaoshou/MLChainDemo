//  
//  UIButton+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIButton.h"



@interface UIButton(MLChain)
+ (MLChain4UIButton *)mlc_make;

- (MLChain4UIButton *)mlc_make;

+ (MLChain4UIButton *)mlc_makeConfigs:(void(^)(MLChain4UIButton *maker))block;

- (MLChain4UIButton *)mlc_makeConfigs:(void(^)(MLChain4UIButton *maker))block;


@end

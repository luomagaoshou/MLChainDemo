//  
//  UIView+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"



@interface UIView(MLChain)
+ (MLChain4UIView *)mlc_make;

- (MLChain4UIView *)mlc_make;

+ (MLChain4UIView *)mlc_makeConfigs:(void(^)(MLChain4UIView *maker))block;

- (MLChain4UIView *)mlc_makeConfigs:(void(^)(MLChain4UIView *maker))block;


@end

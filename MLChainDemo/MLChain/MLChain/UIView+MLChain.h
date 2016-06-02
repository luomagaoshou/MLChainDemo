//  
//  UIView+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"


@interface UIView(MLChain)
+ (MLChain4UIView *)ml_make;

- (MLChain4UIView *)ml_make;

- (MLChain4UIView *)ml_makeConfigs:(void(^)(MLChain4UIView *maker))block;


@end

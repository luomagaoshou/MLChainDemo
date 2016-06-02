//  
//  UIScrollView+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIScrollView.h"


@interface UIScrollView(MLChain)
+ (MLChain4UIScrollView *)ml_make;

- (MLChain4UIScrollView *)ml_make;

- (MLChain4UIScrollView *)ml_makeConfigs:(void(^)(MLChain4UIScrollView *maker))block;


@end

//  
//  UIResponder+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"


@interface UIResponder(MLChain)
+ (MLChain4UIResponder *)ml_make;

- (MLChain4UIResponder *)ml_make;

- (MLChain4UIResponder *)ml_makeConfigs:(void(^)(MLChain4UIResponder *maker))block;


@end

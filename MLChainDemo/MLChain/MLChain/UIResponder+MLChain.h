//  
//  UIResponder+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"



@interface UIResponder(MLChain)
+ (MLChain4UIResponder *)mlc_make;

- (MLChain4UIResponder *)mlc_make;

+ (MLChain4UIResponder *)mlc_makeConfigs:(void(^)(MLChain4UIResponder *maker))block;

- (MLChain4UIResponder *)mlc_makeConfigs:(void(^)(MLChain4UIResponder *maker))block;


@end

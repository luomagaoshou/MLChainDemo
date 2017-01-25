//  
//  NSObject+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"



@interface NSObject(MLChain)
+ (MLChain4NSObject *)mlc_make;

- (MLChain4NSObject *)mlc_make;

+ (MLChain4NSObject *)mlc_makeConfigs:(void(^)(MLChain4NSObject *maker))block;

- (MLChain4NSObject *)mlc_makeConfigs:(void(^)(MLChain4NSObject *maker))block;


@end

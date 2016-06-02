//  
//  NSObject+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"


@interface NSObject(MLChain)
+ (MLChain4NSObject *)ml_make;

- (MLChain4NSObject *)ml_make;

- (MLChain4NSObject *)ml_makeConfigs:(void(^)(MLChain4NSObject *maker))block;


@end

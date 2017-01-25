//  
//  NSObject.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "NSObject+MLChain.h"
#import "NSObject+MLChain.h"
@implementation NSObject(MLChain)
+ (MLChain4NSObject *)mlc_make {         
         
    id chainBridge = [self mlc_chainBridge];         
    return chainBridge;         
         
}
- (MLChain4NSObject *)mlc_make {         
         
    id chainBridge = [self mlc_chainBridge];         
    return chainBridge;         
         
}
+ (MLChain4NSObject *)mlc_makeConfigs:(void(^)(MLChain4NSObject *maker))block{         
         
    id chainBridge = [self mlc_chainBridge];         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4NSObject *)mlc_makeConfigs:(void(^)(MLChain4NSObject *maker))block{         
         
    id chainBridge = [self mlc_chainBridge];         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


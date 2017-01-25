//  
//  CAPropertyAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "CAPropertyAnimation+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CAPropertyAnimation(MLChain)
+ (MLChain4CAPropertyAnimation *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4CAPropertyAnimation *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4CAPropertyAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAPropertyAnimation *maker))block{         
         
   MLChain4CAPropertyAnimation *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4CAPropertyAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAPropertyAnimation *maker))block{         
         
   MLChain4CAPropertyAnimation *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


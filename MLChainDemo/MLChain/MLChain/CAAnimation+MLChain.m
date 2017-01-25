//  
//  CAAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "CAAnimation+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CAAnimation(MLChain)
+ (MLChain4CAAnimation *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4CAAnimation *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4CAAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAAnimation *maker))block{         
         
   MLChain4CAAnimation *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4CAAnimation *)mlc_makeConfigs:(void(^)(MLChain4CAAnimation *maker))block{         
         
   MLChain4CAAnimation *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


//  
//  CABasicAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "CABasicAnimation+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CABasicAnimation(MLChain)
+ (MLChain4CABasicAnimation *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4CABasicAnimation *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4CABasicAnimation *)mlc_makeConfigs:(void(^)(MLChain4CABasicAnimation *maker))block{         
         
   MLChain4CABasicAnimation *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4CABasicAnimation *)mlc_makeConfigs:(void(^)(MLChain4CABasicAnimation *maker))block{         
         
   MLChain4CABasicAnimation *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


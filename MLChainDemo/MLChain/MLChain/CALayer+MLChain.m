//  
//  CALayer.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "CALayer+MLChain.h"
#import "NSObject+MLChain.h"
@implementation CALayer(MLChain)
+ (MLChain4CALayer *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4CALayer *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4CALayer *)mlc_makeConfigs:(void(^)(MLChain4CALayer *maker))block{         
         
   MLChain4CALayer *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4CALayer *)mlc_makeConfigs:(void(^)(MLChain4CALayer *maker))block{         
         
   MLChain4CALayer *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


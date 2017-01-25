//  
//  UIResponder.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UIResponder+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIResponder(MLChain)
+ (MLChain4UIResponder *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UIResponder *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UIResponder *)mlc_makeConfigs:(void(^)(MLChain4UIResponder *maker))block{         
         
   MLChain4UIResponder *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UIResponder *)mlc_makeConfigs:(void(^)(MLChain4UIResponder *maker))block{         
         
   MLChain4UIResponder *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


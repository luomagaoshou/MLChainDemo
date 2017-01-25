//  
//  UIControl.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UIControl+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIControl(MLChain)
+ (MLChain4UIControl *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UIControl *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UIControl *)mlc_makeConfigs:(void(^)(MLChain4UIControl *maker))block{         
         
   MLChain4UIControl *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UIControl *)mlc_makeConfigs:(void(^)(MLChain4UIControl *maker))block{         
         
   MLChain4UIControl *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


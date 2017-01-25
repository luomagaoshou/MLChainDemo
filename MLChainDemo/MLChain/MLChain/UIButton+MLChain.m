//  
//  UIButton.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UIButton+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UIButton(MLChain)
+ (MLChain4UIButton *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UIButton *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UIButton *)mlc_makeConfigs:(void(^)(MLChain4UIButton *maker))block{         
         
   MLChain4UIButton *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UIButton *)mlc_makeConfigs:(void(^)(MLChain4UIButton *maker))block{         
         
   MLChain4UIButton *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


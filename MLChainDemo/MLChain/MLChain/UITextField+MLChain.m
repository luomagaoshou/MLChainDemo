//  
//  UITextField.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  



#import "UITextField+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UITextField(MLChain)
+ (MLChain4UITextField *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
- (MLChain4UITextField *)mlc_make {         
         
   return (id)[super mlc_make];         
         
}
+ (MLChain4UITextField *)mlc_makeConfigs:(void(^)(MLChain4UITextField *maker))block{         
         
   MLChain4UITextField *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}
- (MLChain4UITextField *)mlc_makeConfigs:(void(^)(MLChain4UITextField *maker))block{         
         
   MLChain4UITextField *chainBridge = self.mlc_make;         
   block(chainBridge);         
   return chainBridge;         
         
}

@end


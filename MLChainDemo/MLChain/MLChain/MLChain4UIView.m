//  
//  MLChain4UIView.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#import "MLChain4UIView.h"
#import "MLChain4UIResponder.h"
@implementation MLChain4UIView
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (UIView *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop

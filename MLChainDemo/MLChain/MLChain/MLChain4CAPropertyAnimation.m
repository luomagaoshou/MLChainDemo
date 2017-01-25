//  
//  MLChain4CAPropertyAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#import "MLChain4CAPropertyAnimation.h"
#import "MLChain4CAAnimation.h"
@implementation MLChain4CAPropertyAnimation
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (CAPropertyAnimation *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop

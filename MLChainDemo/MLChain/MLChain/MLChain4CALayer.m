//  
//  MLChain4CALayer.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wincomplete-implementation"
#import "MLChain4CALayer.h"
#import "MLChain4NSObject.h"
@implementation MLChain4CALayer
+ (void)load{
        
  [self mlc_setUpMethodDynamically];        
}
- (CALayer *)chainObject{         
    return (id)[super chainObject];         
}
@end
#pragma clang diagnostic pop

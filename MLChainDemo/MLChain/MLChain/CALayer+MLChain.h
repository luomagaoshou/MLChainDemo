//  
//  CALayer+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CALayer.h"



@interface CALayer(MLChain)
+ (MLChain4CALayer *)mlc_make;

- (MLChain4CALayer *)mlc_make;

+ (MLChain4CALayer *)mlc_makeConfigs:(void(^)(MLChain4CALayer *maker))block;

- (MLChain4CALayer *)mlc_makeConfigs:(void(^)(MLChain4CALayer *maker))block;


@end

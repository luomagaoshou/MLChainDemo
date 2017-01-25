//
//  NSObject+ChainInvocation.h
//  MLProject
//
//  Created by apple on 16/3/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Invocation)

- (id)mlc_chainBridge;
+ (void)mlc_setUpMethodDynamically;

@end

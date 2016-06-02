//
//  NSObject+ChainInvocation.h
//  MLProject
//
//  Created by apple on 16/3/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Invocation)

//在va_start与va_end中使用

+ (NSArray *)argumentsWithTarget:(id)target selectorName: (NSString *)selectorName arglist:(va_list)arglist firstObject:(id)firstObject;
+ (void)excuteSettingWithTarget:(id)target selectorName: (NSString *)selectorName configArguments:(NSArray *)configArguments;


@end

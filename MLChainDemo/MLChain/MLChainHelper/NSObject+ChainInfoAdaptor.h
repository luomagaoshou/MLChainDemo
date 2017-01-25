//
//  NSObject+ChainInfoAdaptor.h
//  MLProject
//
//  Created by apple on 16/5/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ChainInfoAdaptor)

BOOL MLCIsSystemClass(Class class);
/**
 根据类名获取父类名
 
 @param className 类名
 @return 父类名
 */
NSString *MLCSuperClassNameOfClassName(NSString *className);

/**
 根据类名获取链式桥梁类名

 @param originalClass 类名
 @return 链式桥梁类名
 */
Class MLCChainBribgeClass(Class originalClass);

/**
 根据链式桥梁类名获取原类名

 @param chainBribgeClass 链式桥梁类
 @return 原类名
 */
Class MLCOriginalClass(Class chainBribgeClass);

/**
 
 根据类名获取链式桥梁对象
 @param originalClass 类名
 @return 链式桥梁对象
 */
id MLCChainBridgeWithClass(Class originalClass);

/**
 根据方法名获取链式方法名

 @param oringalSelName 方法名
 @return 链式方法名
 */
+ (NSString *)mlc_chainSelNameWithOringalSelName:(NSString *)oringalSelName;

/**
 根据链式方法名获取原方法名
 
 @param chainSelName 链式方法名
 @return 原方法名
 */
+ (NSString *)mlc_oringalSelNameWithChainSelName:(NSString *)chainSelName;

/**
 该类没有返回值的所有方法名,过滤私有方法等

 @return <#return value description#>
 */
+ (NSArray *)mlc_noReturnValueSelNames;
@end

//
//  NSObject+RunTimeHelper.h
//  LotterySteward
//
//  Created by apple on 15/10/16.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (RunTimeHelper)

/**
 *  获取该类成员变量列表
 *
 *  @return 该类成员变量列表
 */

+ (NSArray *)arrayOfIvars;

/**
 *  取得该类属性列表
 *
 *  @return 该类属性列表
 */
+ (NSArray *)arrayOfProperties;


/**
 *  取得该类实例方法列表
 *
 *  @return 该类实例方法列表
 */

+ (NSArray *)arrayOfInstanceMethods;

/**
 *  取得该类方法方法列表
 *
 *  @return 该类方法方法列表
 */
+ (NSArray *)arrayOfClassMethods;

/**
 *  取得该类遵循协议列表
 *
 *  @return 该类遵循协议列表
 */
+ (NSArray *)arrayOfProtocols;

/**
 *  取得该工程所有类的列表
 *
 *  @return 该工程所有类的列表
 */
+ (NSArray *)arrayOfAllClass;

+ (NSArray *)arrayOfClassesWithPrefixs:(NSArray *)prefixs;


+ (NSArray *)arrayOfSubClasses;

/**
 *  取得该对象中有值的的property字典
 *
 *  @return 该对象中有值的的property字典
 */
- (NSDictionary *)dictionaryOfPropertyKeyValues;

+ (NSArray *)arrayOfPropertyAttributes;

/**
 *  清对象所有成员变量值
 */

- (void)setObjectPropertyAllKeyValueNil;

/**
 *  传入成员变量列表与object   返回对应字典
 *
 *  @param ivarList
 *  @param model
 *
 *  @return 字典
 */
- (NSDictionary *)dictionaryWithIvarList:(NSArray *)ivarList;
/**
* 更换实例方法指针
*/
+ (void)ml_swizzleInstanceMethodSEL:(SEL)originalSEL withSEL:(SEL)swizzledSEL;
/**
 * 更换类方法指针
 */
+ (void)ml_swizzleClassMethodSEL:(SEL)originalSEL withSEL:(SEL)swizzledSEL;
@property (nonatomic, strong) NSString *featureIdentifier;
@property (nonatomic, strong) NSString *operationIdentifier;

@end




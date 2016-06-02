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
 *  取得属性列表
 *
 *  @return
 */

+ (NSArray *)getIvarList;

//获取成员变量列表

+ (NSArray *)getPropertyList;




+ (NSArray *)getInstanceMethodList;
+ (NSArray *)getClassMethodList;


+ (NSArray *)getProtocolList;

+ (NSArray *)getClassListWithPrefixs:(NSArray *)prefixs;
+ (NSArray *)getClassListWithClassName:(NSString *)className;
+ (NSArray *)getAllClassList;
+ (NSArray *)getSubClassList;


- (NSDictionary *)getPropertyKeyValueOnlyHaveValueDictionary;
+ (NSArray *)getPropertyAttributeList;

/**
 *  清对象所有成员变量值
 */

- (void)setObjectPropertyAllKeyValueNil;
/**
 *  复制一个对象
 *
 *
 *
 *  @return
 */
- (id)createSameObject;
/**
 *  传入成员变量列表与model 只有赋  返回字典
 *
 *  @param ivarList
 *  @param model
 *
 *  @return 字典
 */
+ (NSDictionary *)getPropertyDictionaryJoinedWithIvarList:(NSArray *)ivarList model:(id)model;



@end

@interface NSObject ()
@property (nonatomic, strong) NSString *featureIdentifier;
@property (nonatomic, strong) NSString *operationIdentifier;

@end


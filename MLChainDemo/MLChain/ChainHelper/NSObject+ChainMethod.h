//
//  NSObject+ChainMethod.h
//  MLProject
//
//  Created by apple on 16/4/21.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ChainMethod)

+ (NSString *)mlChain_allMethodStringsForNoReturnSelName;
+ (NSString *)mlChain_allImplementationStringsOfSelectorTypeForNoReturnSelName;
+ (NSString *)mlChain_allImplementationStringsOfInvocatioTypeForNoReturnSelName;


+ (NSString *)mlChain_methodStringInCategory;
+ (NSString *)mlChain_ImplementationStringInCategory;

+ (NSString *)mlChain_lookUpMakerMethodStringOfNSObjectWithClassNames:(NSArray *)classNames;
+ (NSString *)mlChain_lookUpMakerImplementationStringOfNSObjectWithClassNames:(NSArray *)classNames;

+ (NSString *)mlChain_classDeclearStringOfNSObjectWithClassNames:(NSArray *)classNames;

@end

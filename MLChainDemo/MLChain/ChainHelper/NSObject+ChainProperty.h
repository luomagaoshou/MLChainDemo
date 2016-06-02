//
//  NSObject+ChainProperty.h
//  MLProject
//
//  Created by apple on 16/5/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (ChainProperty)
+ (SEL)setterSelectorWithGetterNameChar:(char *)getterNameChar;

+ (NSString *)objectPropertyNameInChainMaker;

- (id)objectOfChainMaker;

+ (Class)objectClassOfChainMaker:(id)maker;
+ (NSString *)chainMakerName;
+ (id)createChainMaker;
@end

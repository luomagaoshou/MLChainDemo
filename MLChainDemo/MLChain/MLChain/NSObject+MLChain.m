//  
//  NSObject.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "NSObject+MLChain.h"
#import "NSObject+MLChain.h"
@implementation NSObject(MLChain)
+ (MLChain4NSObject *)ml_make
{

id chainObject = [[[self class] alloc] init];
id chainMaker = [chainObject makerWithConnetAllProperty];
return chainMaker;

}

- (MLChain4NSObject *)ml_make
{

id chainMaker = [self makerWithConnetAllProperty];
return chainMaker;

}

- (MLChain4NSObject *)ml_makeConfigs:(void(^)(MLChain4NSObject *maker))block
{

id chainMaker = [[self class] makerWithConnetAllProperty];
block(chainMaker);
return chainMaker;

}

#pragma mark - ========= Connet Property =========
- (id)makerWithConnetAllProperty
{

id chainMaker = [[self class] createChainMaker];
for (Class currentClass = [chainMaker class]; [currentClass class] != [MLChain4NSObject class]; currentClass = [[currentClass class] superclass]) {
[chainMaker setValue:self forKey: [[self class] objectPropertyNameInChainMaker]];
}
return  chainMaker;
}

@end

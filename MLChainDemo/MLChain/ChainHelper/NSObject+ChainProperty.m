//
//  NSObject+ChainProperty.m
//  MLProject
//
//  Created by apple on 16/5/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainProperty.h"

@implementation NSObject (ChainProperty)
#pragma mark - ========= Helper =========
+ (SEL)setterSelectorWithGetterNameChar:(char *)getterNameChar
{
    return [self setterSelectorWithGetterNameString:[NSString stringWithUTF8String:getterNameChar]];
}
+ (SEL)setterSelectorWithGetterNameString:(NSString *)getterNameString
{
    NSString *upcaseGetterFirstLetter = [[getterNameString substringToIndex:1].uppercaseString stringByAppendingString:[getterNameString substringFromIndex:1]];
    NSMutableString *setterNameString = [NSMutableString stringWithFormat:@"set%@:", upcaseGetterFirstLetter];
    
    return NSSelectorFromString(setterNameString);
}



- (id)objectOfChainMaker
{
    Class chainObjectClass = [NSObject objectClassOfChainMaker:self];
    NSString *chainObjectName = [chainObjectClass objectPropertyNameInChainMaker];
    id chainObject = [self valueForKey:chainObjectName];
    return chainObject;
    
}
+ (Class)objectClassOfChainMaker:(id)maker
{
    NSString *makerClassString = NSStringFromClass([maker class]);
    NSString *objectClass = [makerClassString stringByReplacingOccurrencesOfString:@"MLChain4" withString:@""];
    
    return NSClassFromString(objectClass);
}

+ (NSString *)objectPropertyNameInChainMaker
{
    //有需要者可以添加更多的类名前缀
    NSArray *suppurtClassPrefix = @[@"NS", @"UI", @"CA"];
    NSString *resultStr;
    NSString *classNameStr = NSStringFromClass([self class]);
    for (NSString *prefix in suppurtClassPrefix) {
        if ([classNameStr hasPrefix:prefix]) {
            resultStr = [classNameStr stringByReplacingOccurrencesOfString:prefix withString:@""];
            resultStr = [[[resultStr substringToIndex:1] lowercaseString] stringByAppendingString:[resultStr substringFromIndex:1]];
        }
    }
    if (!resultStr) {
        
        NSException *exception = [NSException exceptionWithName:@"NilClass" reason:@"不支持该类，目前只支持系统类" userInfo:nil];
        @throw exception;
        
    }
   // NSLog(@"%@", resultStr);
    return resultStr;
    
}

+ (NSString *)chainMakerName
{
    return [NSString stringWithFormat:@"MLChain4%@", NSStringFromClass(self)];
}
+ (id)createChainMaker
{
    NSString *className = NSStringFromClass([self class]);
    NSString *chainMakerName = [@"MLChain4" stringByAppendingString:className];
    id chainMaker = [[NSClassFromString(chainMakerName) alloc] init];
    return chainMaker;
}
@end

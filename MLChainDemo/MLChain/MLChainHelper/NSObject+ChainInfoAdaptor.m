//
//  NSObject+ChainInfoAdaptor.m
//  MLProject
//
//  Created by apple on 16/5/4.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainInfoAdaptor.h"
#import "NSObject+RunTimeHelper.h"
@implementation NSObject (ChainInfoAdaptor)

BOOL MLCIsSystemClass(Class class){
    NSBundle *bundle = [NSBundle bundleForClass:class];
    if (bundle == [NSBundle mainBundle]) {
        return YES;
    }
    return NO;
}

+ (NSString *)mlc_oringalSelNameWithChainSelName:(NSString *)chainSelName{
    
    Class originalClass = MLCOriginalClass(self);
    NSString *setterSelName = [self _ml_setterSelNameWithSelName:chainSelName];
    
     if ([originalClass instancesRespondToSelector:sel_registerName([setterSelName stringByAppendingString:@":"].UTF8String)]){
        return [setterSelName stringByAppendingString:@":"];
        
     } else if ([originalClass instancesRespondToSelector:sel_registerName(setterSelName.UTF8String)]) {
         return setterSelName;
     } else if ([originalClass instancesRespondToSelector:sel_registerName([chainSelName stringByAppendingString:@":"].UTF8String)]){
        NSString *originalSelName = [chainSelName stringByAppendingString:@":"];
        return originalSelName;
    }
     else if ([originalClass instancesRespondToSelector:sel_registerName(chainSelName.UTF8String)]){
         NSString *originalSelName = chainSelName;
         return originalSelName;
     }
    return nil;
}
+ (NSString *)mlc_chainSelNameWithOringalSelName:(NSString *)oringalSelName{
    
    NSString *chainSelName = nil;
    //去除开头set
    if ([oringalSelName hasPrefix:@"set"]
        && [oringalSelName hasSuffix:@":"]
        && ![oringalSelName hasPrefix:@"setup"]
        && ![oringalSelName isEqualToString:@"set"]) {
        chainSelName  = [oringalSelName stringByReplacingOccurrencesOfString:@"set" withString:@""];
        chainSelName = [NSString stringWithFormat:@"%@%@", [chainSelName substringToIndex:1].lowercaseString, [chainSelName substringFromIndex:1]];
    }else{
        chainSelName = oringalSelName;
    }
    
    if ([chainSelName hasSuffix:@":"]) {
        chainSelName = [chainSelName substringToIndex:chainSelName.length - 1];
    }
    
    
    chainSelName = [chainSelName stringByReplacingOccurrencesOfString:@":" withString:@"_"];
    return chainSelName;
}
#pragma mark - getter & setter 转换
+ (NSString *)_ml_setterSelNameWithSelName:(NSString *)selName{
    if ([selName hasPrefix:@"set"]
        &&
        ([selName hasPrefix:@"setup"] || [selName isEqualToString:@"set"])) {
        return selName;
    }
    NSString *upcase1stLetterStr = [[selName substringToIndex:1].uppercaseString stringByAppendingString:[selName substringFromIndex:1]];
    NSMutableString *setterSelName = [NSMutableString stringWithFormat:@"set%@:", upcase1stLetterStr];
    [setterSelName replaceOccurrencesOfString:@"_" withString:@":" options:NSCaseInsensitiveSearch range:NSMakeRange(0, setterSelName.length)];
    return setterSelName;
}
+ (NSString *)_ml_getterSelNameWithSelName:(NSString *)selName{
    if ([selName hasPrefix:@"set"] && [selName hasSuffix:@":"]) {
        
        NSString *settedBodyStr = [selName substringWithRange:NSMakeRange(3, selName.length - 4)];
        NSString *getterSelName = [[settedBodyStr substringToIndex:1].lowercaseString stringByAppendingString:[settedBodyStr substringFromIndex:1]];
        return getterSelName;
    }else{
        return selName;
    }
}





id MLCChainBridgeWithClass(Class originalClass){
    NSString *className = NSStringFromClass([originalClass class]);
    NSString *chainMakerClassName = [@"MLChain4" stringByAppendingString:className];
    id chainMaker = [[NSClassFromString(chainMakerClassName) alloc] init];
    return chainMaker;
}

NSString *MLCSuperClassNameOfClassName(NSString *className){
    Class class = NSClassFromString(className);
    assert(class);
    Class superClass = [class superclass];
    return NSStringFromClass(superClass);
}
Class MLCChainBribgeClass(Class originalClass){
    NSString *originalClassName = NSStringFromClass(originalClass);
    
    NSString *perfixStr = @"MLChain4";
    if ([originalClassName hasPrefix:perfixStr]) {
        assert(!@"该类已是链式桥梁类");
    }
    NSString *chainBribgeClassName = [perfixStr stringByAppendingString:originalClassName];
    Class chainBribgeClass = NSClassFromString(chainBribgeClassName);
    assert(chainBribgeClass);
    return chainBribgeClass;
    
}
Class MLCOriginalClass(Class chainBribgeClass){
    
    NSString *perfixStr = @"MLChain4";
    NSString *chainBribgeClassName = NSStringFromClass([chainBribgeClass class]);
    if (![chainBribgeClassName hasPrefix:perfixStr]) {
        assert(!@"非链式桥梁类");
    }
    NSString *originalClassName = nil;
    originalClassName = [chainBribgeClassName substringFromIndex:perfixStr.length];
    Class originalClass = NSClassFromString(originalClassName);
    assert(originalClass);
    return originalClass;
    
    
}


//所有返回值为空函数视为设置函数
+ (NSArray *)mlc_noReturnValueSelNames
{
    return [self mlc_noReturnValueSelNamesWithMutSelNames:nil];
    
}
+ (NSArray *)mlc_noReturnValueSelNamesWithMutSelNames:(NSMutableArray *)resultSelNames{
    if (!resultSelNames) {
        resultSelNames = [[NSMutableArray alloc] init];
    }
    NSArray *selNames = [self arrayOfInstanceMethods];
    
    for (NSString *selName in selNames) {
        
        //过滤私有sel
        if ([selName hasPrefix:@"_"] ||
            [selName hasPrefix:@"."]) {
            continue;
        }
        
        if ([NSStringFromClass(self) hasPrefix:@"MLChain4"]) {
            continue;
        }
        if ([NSStringFromClass(self) isKindOfClass:[NSProxy class]]) {
            continue;
        }
        //过滤mlc链式相关生成方法
        if ([selName hasPrefix:@"mlc_"]) {
            continue;
        }
        static NSArray *disallowMethods;
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            disallowMethods = @[@"dealloc", @"retain", @"release", @"autorelease", @"finalize", @"forwardInvocation:"];
            
        });
        if ([disallowMethods containsObject:selName]) {
            continue;
        }
        SEL sel = NSSelectorFromString(selName);
        
        //过滤无返回methodSignature的sel
        NSMethodSignature *methodSignature = nil;
        @try {
            methodSignature  = [self instanceMethodSignatureForSelector:sel];
        } @catch (NSException *exception) {
            
        } @finally {
            if (methodSignature == nil) {
                continue;
            }
        }
        
        const char *returnType = [methodSignature methodReturnType];
        if (strcmp(&returnType[0], "v") == 0) {
            
            if (![resultSelNames containsObject:selName]) {
                
                //1 同名方法，一个带参一个不带参,只添加一次且优先选择带参的方法
                NSString *dirtySelName;
                if (![selName hasSuffix:@":"]) {
                    dirtySelName = [selName stringByAppendingString:@":"];
                }
                if ([selNames containsObject:dirtySelName]) {
                    [resultSelNames addObject:dirtySelName];
                }else{
                    [resultSelNames addObject:selName];
                }
               
            }
            
            
            
        }
        
        
        
    }
    if ([self class] != [NSObject class]) {
        [[self superclass] mlc_noReturnValueSelNamesWithMutSelNames:resultSelNames];
    }
    
    return resultSelNames;
}
@end

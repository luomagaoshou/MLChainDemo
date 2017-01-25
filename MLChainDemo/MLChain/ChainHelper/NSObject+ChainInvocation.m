//
//  NSObject+ChainInvocation.m
//  MLProject
//
//  Created by apple on 16/3/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainInvocation.h"
#import "NSObject+ChainInfoAdaptor.h"
#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import "NSObject+YYAdd.h"
#import "NSObject+RunTimeHelper.h"
#import <objc/runtime.h>
@implementation NSObject (Invocation)
- (id)mlc_chainBridge
{
    id chainBridge = MLCChainBridgeWithClass([self class]);
    if (object_isClass(self)) {
        id chainObject = [[[self class] alloc] init];
#pragma clang diagnostic push
#pragma clang diagnostic ignored        "-Wundeclared-selector"
        [chainBridge performSelector:@selector(setChainObject:) withObject:chainObject];
        
    }else{
        [chainBridge performSelector:@selector(setChainObject:) withObject:self];
    }
    #pragma clang diagnostic pop
    return  chainBridge;
}


#pragma mark - set up method

+ (void)mlc_setUpMethodDynamically{
    
    
    
    Class originalClass = MLCOriginalClass(self);
    Class chainBridgeClass = self;
    Method desMethod =  class_getInstanceMethod([originalClass class], @selector(rootChainMethod));
    IMP imp = method_getImplementation(desMethod);
    
    for (NSString *methodName in [originalClass mlc_noReturnValueSelNames]) {
        NSString *chainMethodName = [originalClass mlc_chainSelNameWithOringalSelName:methodName];
        
        class_addMethod([chainBridgeClass class], sel_registerName(chainMethodName.UTF8String), imp, method_getTypeEncoding(desMethod));
    }
    
    
    
}

typedef struct mlc__va_list { void *__ap; } mlc_va_list;


- (instancetype (^)(NSString *obj, ...))rootChainMethod{
    return ^ id (NSString *obj, ...){
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wundeclared-selector"
        id chainObject = [self performSelector:@selector(chainObject)];
#pragma clang diagnostic pop
//        NSString *originalSelName = [[self class] mlc_oringalSelNameWithChainSelName:NSStringFromSelector(_cmd)];
        //NSAssert(originalSelName, @"无法匹配该方法");
        NSMethodSignature *sig = [chainObject methodSignatureForSelector:sel_registerName(obj.UTF8String)];
        NSInvocation *inv = [NSInvocation invocationWithMethodSignature:sig];
        [inv setTarget:chainObject];
        [inv setSelector:sel_registerName(obj.UTF8String)];
      
    
#if 0
        if (sig.numberOfArguments == 3) {
            char *type =  (char *)[sig getArgumentTypeAtIndex:2];
            if (*type == '@') {
                objc_setAssociatedObject(chainObject, @selector(rootChainMethod), (__bridge id)obj, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }
       
       
#endif
        
#if 0
  
        NSString *address = [NSString stringWithFormat:@"%p",&obj - 8];
        void *retrievedObject;
        sscanf([address cStringUsingEncoding:NSUTF8StringEncoding], "%p", &retrievedObject);
        
#endif
       
        va_list args;
        va_start(args, obj);
 
        [NSObject setInv:inv withSig:sig andArgs:args];
        
        [inv invoke];
         va_end(args);
        
        return self;
    };
}


@end

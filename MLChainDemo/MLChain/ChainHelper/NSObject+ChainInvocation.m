//
//  NSObject+ChainInvocation.m
//  MLProject
//
//  Created by apple on 16/3/8.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainInvocation.h"
#import "NSObject+ChainProperty.h"
#import <UIKit/UIKit.h>
@implementation NSObject (Invocation)

#pragma mark - ========= Config Argument=========
+ (NSArray *)argumentsWithTarget:(id)target selectorName:(NSString *)selectorName arglist:(va_list)arglist firstObject:(id)firstObject
{
    NSMethodSignature *methodSig = [target methodSignatureForSelector:NSSelectorFromString(selectorName)];
    NSMutableArray *arguments = [[NSMutableArray alloc] init];
    [arguments addObject:target];
    [arguments addObject:selectorName];
    NSInteger count = 2;
    for (id currentObject = firstObject; currentObject != nil; currentObject = va_arg(arglist, id)){
        [arguments addObject:currentObject];
        count++;
        if (count >= methodSig.numberOfArguments) {
            break;
        }
    }
    return arguments;
}
#pragma mark - ========= Excute =========
+ (void)excuteSettingWithTarget:(id)target selectorName:(NSString *)selectorName configArguments:(NSArray *)configArguments
{
   
    
    NSMethodSignature *methodSignature = [target methodSignatureForSelector:NSSelectorFromString(selectorName)];
    NSInvocation *invocation = [NSInvocation invocationWithMethodSignature:methodSignature];
    NSUInteger count = [methodSignature numberOfArguments];
    for (NSInteger i = 0; i < count; i++) {
        char *type = (char *)[methodSignature getArgumentTypeAtIndex:i];
        while (*type == 'r' || // const
               *type == 'n' || // in
               *type == 'N' || // inout
               *type == 'o' || // out
               *type == 'O' || // bycopy
               *type == 'R' || // byref
               *type == 'V') { // oneway
            type++; // cutoff useless prefix
        }
        
        BOOL unsupportedType = NO;
        switch (*type) {
            case 'v': // 1: void
            case 'B': // 1: bool
            case 'c': // 1: char / BOOL
            case 'C': // 1: unsigned char
            case 's': // 2: short
            case 'S': // 2: unsigned short
            case 'i': // 4: int / NSInteger(32bit)
            case 'I': // 4: unsigned int / NSUInteger(32bit)
            case 'l': // 4: long(32bit)
            case 'L': // 4: unsigned long(32bit)
            { // 'char' and 'short' will be promoted to 'int'.
                int arg = [configArguments[i] intValue];
                [invocation setArgument:&arg atIndex:i];
            } break;
                
            case 'q': // 8: long long / long(64bit) / NSInteger(64bit)
            case 'Q': // 8: unsigned long long / unsigned long(64bit) / NSUInteger(64bit)
            {
            
            long long arg = [configArguments[i] longLongValue];
            [invocation setArgument:&arg atIndex:i];
            } break;
                
            case 'f': // 4: float / CGFloat(32bit)
            { // 'float' will be promoted to 'double'.
                float arg = [configArguments[i] floatValue];
                [invocation setArgument:&arg atIndex:i];
            }
                break;
                
            case 'd': // 8: double / CGFloat(64bit)
            {
            double arg = [configArguments[i] doubleValue];
            [invocation setArgument:&arg atIndex:i];
            } break;
                
            case 'D': // 16: long double
            {
            
            long double  arg = [configArguments[i] longLongValue];
            [invocation setArgument:&arg atIndex:i];
            } break;
                
            case '*': // char *
            case '^': // pointer
            {
            id pointerObject = configArguments[i];
            if (strcmp(type, @encode(CGColorRef)) == 0) {
                CGColorRef arg = [pointerObject CGColor];
                [invocation setArgument:&arg atIndex:i];
        
            }else
                {
                void *arg = [pointerObject pointerValue];
                
                [invocation setArgument:&arg atIndex:i];
                }
            
            
            } break;
                
            case ':': // SEL
            {
            SEL arg = NSSelectorFromString(configArguments[i]);
            [invocation setArgument:&arg atIndex:i];
            } break;
                
            case '#': // Class
            {
            Class arg = [configArguments[i] class];
            [invocation setArgument:&arg atIndex:i];
            } break;
                
            case '@': // id
            {
            id arg = configArguments[i];
            [invocation setArgument:&arg atIndex:i];
            } break;
                
            case '{': // struct
            {   id structObj = configArguments[i];
                if (strcmp(type, @encode(CGPoint)) == 0) {
                    CGPoint arg = [structObj CGPointValue];
                    [invocation setArgument:&arg atIndex:i];
                    
                } else if (strcmp(type, @encode(CGSize)) == 0) {
                    CGSize arg = [structObj CGSizeValue];
                    [invocation setArgument:&arg atIndex:i];
                } else if (strcmp(type, @encode(CGRect)) == 0) {
                    CGRect arg = [structObj CGRectValue];
                    [invocation setArgument:&arg atIndex:i];
                } else if (strcmp(type, @encode(CGVector)) == 0) {
                    CGVector arg = [structObj CGVectorValue];
                    [invocation setArgument:&arg atIndex:i];
                } else if (strcmp(type, @encode(CGAffineTransform)) == 0) {
                    CGAffineTransform arg = [structObj CGAffineTransformValue];
                    [invocation setArgument:&arg atIndex:i];
                } else if (strcmp(type, @encode(CATransform3D)) == 0) {
                    CATransform3D arg = [structObj CATransform3DValue];
                    [invocation setArgument:&arg atIndex:i];
                    
                } else if (strcmp(type, @encode(NSRange)) == 0) {
                    NSRange arg = [structObj rangeValue];
                    [invocation setArgument:&arg atIndex:i];
                    
                } else if (strcmp(type, @encode(UIOffset)) == 0) {
                    UIOffset arg = [structObj UIOffsetValue];
                    [invocation setArgument:&arg atIndex:i];
                    
                } else if (strcmp(type, @encode(UIEdgeInsets)) == 0) {
                    UIEdgeInsets arg = [structObj UIEdgeInsetsValue];
                    [invocation setArgument:&arg atIndex:i];
                }
            }
                break;
                
            case '(': // union
            {
            unsupportedType = YES;
            } break;
                
            case '[': // array
            {
            unsupportedType = YES;
            } break;
                
            default: // what?!
            {
            unsupportedType = YES;
            } break;
        }
        
        if (unsupportedType) {
            // Try with some dummy type...
            
            NSUInteger size = 0;
            NSGetSizeAndAlignment(type, &size, NULL);
            
        }
    }
    [invocation invoke];

}


@end

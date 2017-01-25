//
//  NSObject+RunTimeHelper.m
//  LotterySteward
//
//  Created by apple on 15/10/16.
//  Copyright © 2015年 ytx. All rights reserved.
//

#import "NSObject+RunTimeHelper.h"
#import <objc/runtime.h>

@implementation NSObject (RunTimeHelper)


+ (NSArray *)arrayOfIvars
{
    unsigned int count = 0;
    Ivar *ivar = class_copyIvarList([self class], &count);
    NSMutableArray *ivarNameArray = [[NSMutableArray alloc] init];
    for (int i = 0; i<count; i++) {
        Ivar iva = ivar[i];
        const char *name = ivar_getName(iva);
        NSString *strName = [NSString stringWithUTF8String:name];
        [ivarNameArray addObject:strName];
        
    }
    
    free(ivar);
    return ivarNameArray;
    
}


+ (NSArray *)arrayOfProperties
{
    unsigned int count = 0;
    objc_property_t *properties = class_copyPropertyList(self, &count);
    
    NSMutableArray *propertyNameArray = [[NSMutableArray alloc] init];
    for (int i = 0; i<count; i++) {
        objc_property_t property = properties[i];
        const char *name = property_getName(property);
        NSString *strName = [NSString stringWithUTF8String:name];
        [propertyNameArray addObject:strName];
        
    }
    
    free(properties);
    return propertyNameArray;
    
}


+ (NSArray *)arrayOfInstanceMethods
{
    unsigned int count = 0;
    Method *methodList = class_copyMethodList(self, &count);
    NSMutableArray *methods = [[NSMutableArray alloc] init];
    
    for (NSInteger i = 0; i < count; i++) {
        SEL selector = method_getName(methodList[i]);
        NSString *selString = NSStringFromSelector(selector);
        [methods addObject:selString];
    }
    
    free(methodList);
    return methods;
}

+ (NSArray *)arrayOfClassMethods
{
    
    unsigned int count = 0;
    Method *methodList = class_copyMethodList(objc_getMetaClass(class_getName(self)), &count);
    NSMutableArray *methods = [[NSMutableArray alloc] init];
    
    for (NSInteger i = 0; i < count; i++) {
        SEL selector = method_getName(methodList[i]);
        NSString *methodString = NSStringFromSelector(selector);
        [methods addObject:methodString];
    }
    
    free(methodList);
    return methods;
}

+ (NSArray *)arrayOfProtocols{
    
    unsigned int count = 0;
    Protocol *__unsafe_unretained *protocols = class_copyProtocolList(self, &count);
    NSMutableArray *protocolArray = [[NSMutableArray alloc] init];
    for (int i = 0; i < count; i++) {
        [protocolArray addObject:[NSString stringWithUTF8String:protocol_getName(protocols[i])]];
    
    }
    
    
    free(protocols);
    return protocolArray;
}
+ (NSArray *)arrayOfSubClasses
{
     NSMutableArray *classList = [NSMutableArray array];
    NSArray *allClassList = [self arrayOfClassesWithPrefixs:@[@"NS", @"UI", @"CA"]];
    
    for (NSString *className in allClassList) {
        Class class = NSClassFromString(className);
        if ([class isSubclassOfClass:self]) {
            [classList addObject:className];
        }
    }
    return classList;
}
+ (NSArray *)arrayOfClassesWithPrefixs:(NSArray *)prefixs
{
    
    NSMutableArray *classList = [NSMutableArray array];
    NSArray *allClassList = [self arrayOfAllClass];
    for (NSString *className in allClassList) {
       
        for (NSString *prefix in prefixs) {
            if ([className hasPrefix:prefix]) {
                if ([NSClassFromString(className) isSubclassOfClass:[NSProxy class]]) {
                    break;
                }
                [classList addObject:className];
                break;
            }
        }
        
    }
    return classList;
}
+ (NSArray *)arrayOfAllClass {
    NSMutableArray *classList = [NSMutableArray array];
    
    unsigned int classesCount = 0;
    Class *classes = objc_copyClassList(&classesCount);
    
    
    for ( int i = 0; i < classesCount; ++i) {
        NSString *className = NSStringFromClass(classes[i]);
   
        [classList addObject:className];
    }
    
    free(classes);
    return classList;
}

+ (NSArray *)arrayOfPropertyAttributes
{
    
        unsigned int count = 0;
        //获取类中所有成员变量
        objc_property_t *properties = class_copyPropertyList(self, &count);
        NSMutableArray *propertyAttriArray = [[NSMutableArray alloc] init];
        for (int i = 0; i<count; i++) {
            objc_property_t property = properties[i];
            const char *attr = property_getAttributes(property);
            
            NSString *attrStr = [NSString stringWithUTF8String:attr];
            NSMutableString *mutAttrStr = [NSMutableString stringWithFormat:@"%@", attrStr];
            [mutAttrStr replaceOccurrencesOfString:@"\"" withString:@"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, mutAttrStr.length)];
            [mutAttrStr replaceOccurrencesOfString:@"@" withString:@"," options:NSCaseInsensitiveSearch range:NSMakeRange(0, mutAttrStr.length)];
            [mutAttrStr replaceOccurrencesOfString:@"_" withString:@"," options:NSCaseInsensitiveSearch range:NSMakeRange(0, mutAttrStr.length)];
            NSArray *attrs = [mutAttrStr componentsSeparatedByString:@","];
            [propertyAttriArray addObject:attrs];
            
        }
        
        free(properties);
        return propertyAttriArray;

}


- (void)setObjectPropertyAllKeyValueNil
{
    NSArray *properties = [[self class] arrayOfProperties];
   
    for (NSInteger i = 0; i < properties.count; i++) {
        if ([self valueForKey:properties[i]]) {
            if ([[self valueForKey:properties[i]] isKindOfClass:[NSString class]]) {
                 [self setValue:nil forKey:properties[i]];
            }
           else if([[self valueForKey:properties[i]] isKindOfClass:[NSNumber class]])
           {
               [self setValue:@0 forKey:properties[i]];
           }
        }
    }
    

}
#pragma mark - ========= 拼接 =========

- (NSDictionary *)dictionaryOfPropertyKeyValues
{
    NSArray *properties = [[self class] arrayOfProperties];
    NSMutableDictionary *keyValueDictionary = [[NSMutableDictionary alloc] init];
    for (NSInteger i = 0; i < properties.count; i++) {
        if ([self valueForKey:properties[i]]) {
            [keyValueDictionary setObject:[self valueForKey:properties[i]] forKey:properties[i]];
        }
    }
    return keyValueDictionary;
}

- (NSDictionary *)dictionaryWithIvarList:(NSArray *)ivarList
{
    //取Model成员变量拼接字典
    NSMutableDictionary *postParameter = [[NSMutableDictionary alloc] init];
    for (NSInteger i = 0 ; i< ivarList.count; i++) {
        
        NSString *ivarName = ivarList[i];
        id value = [self valueForKey:ivarName];
        if (value) {
            if ([ivarName hasPrefix:@"_"]) {
                ivarName = [ivarName substringFromIndex:1];
            }
            [postParameter addEntriesFromDictionary:@{ivarName:value}];
        }
      
        
    }
    return postParameter;
}


+ (void)ml_swizzleInstanceMethodSEL:(SEL)originalSEL withSEL:(SEL)swizzledSEL {

    
    Class class = [self class];
    
    Method originalMethod = class_getInstanceMethod(class, originalSEL);
    Method swizzledMethod = class_getInstanceMethod(class, swizzledSEL);
    
    BOOL didAddMethod =
    class_addMethod(class,
                    originalSEL,
                    method_getImplementation(swizzledMethod),
                    method_getTypeEncoding(swizzledMethod));
    
    if (didAddMethod) {
        class_replaceMethod(class,
                            swizzledSEL,
                            method_getImplementation(originalMethod),
                            method_getTypeEncoding(originalMethod));
    } else {
        method_exchangeImplementations(originalMethod, swizzledMethod);
    }

}

+ (void)ml_swizzleClassMethodSEL:(SEL)originalSEL withSEL:(SEL)swizzledSEL {
    
        
    Method originalMethod = class_getClassMethod(object_getClass(self), originalSEL);
    Method swizzledMethod = class_getClassMethod(object_getClass(self), swizzledSEL);
    Class metaClass = objc_getMetaClass(class_getName([self class]));
    BOOL didAddMethod =
    class_addMethod(metaClass,
                    originalSEL,
                    method_getImplementation(swizzledMethod),
                    method_getTypeEncoding(swizzledMethod));
  
    if(!didAddMethod) {

        method_exchangeImplementations(originalMethod, swizzledMethod);
    }

    
    
}

#pragma mark - ========= Setter & Getter =========
- (void)setOperationIdentifier:(NSString *)operationIdentifier
{
    objc_setAssociatedObject(self, @selector(operationIdentifier), operationIdentifier, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSString *)operationIdentifier
{
    return objc_getAssociatedObject(self, @selector(operationIdentifier));
}
- (void)setFeatureIdentifier:(NSString *)featureIdentifier
{
    objc_setAssociatedObject(self, @selector(featureIdentifier), featureIdentifier, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
- (NSString *)featureIdentifier
{
    return objc_getAssociatedObject(self, @selector(featureIdentifier));
}

@end

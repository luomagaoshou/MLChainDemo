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


+ (NSArray *)getIvarList
{
    unsigned int count = 0;
    //获取类中所有属性名
    Ivar *ivar = class_copyIvarList([self class], &count);
    NSMutableArray *propertyNameArray = [[NSMutableArray alloc] init];
    for (int i = 0; i<count; i++) {
        Ivar iva = ivar[i];
        const char *name = ivar_getName(iva);
        NSString *strName = [NSString stringWithUTF8String:name];
        [propertyNameArray addObject:strName];
        
    }
    
    free(ivar);
    return propertyNameArray;
    
}


+ (NSArray *)getPropertyList
{
    unsigned int count = 0;
    //获取类中所有成员变量
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

+ (NSArray *)getInstanceMethodList
{
    unsigned int count = 0;
    Method *methodList = class_copyMethodList([self class], &count);
    NSMutableArray *methods = [[NSMutableArray alloc] init];

    for (NSInteger i = 0; i < count; i++) {
        SEL selector = method_getName(methodList[i]);
        Method method = class_getInstanceMethod([self class], selector);
        
     
        if (!method) {
            continue;
        }
        
        NSString *selString = NSStringFromSelector(selector);
        [methods addObject:selString];
    }
    
    free(methodList);
    return methods;
}

+ (NSArray *)getClassMethodList
{

    unsigned int count = 0;
    Method *methodList = class_copyMethodList(object_getClass(self), &count);
    NSMutableArray *methods = [[NSMutableArray alloc] init];
   
    for (NSInteger i = 0; i < count; i++) {
        SEL selector = method_getName(methodList[i]);
             const char * type = method_getTypeEncoding(methodList[i]);
        Method classMethod = class_getClassMethod(object_getClass(self), selector);
        if (!classMethod) {
            continue;
        }
        
        NSString *methodString = NSStringFromSelector(selector);
        [methods addObject:methodString];
    }
  
    free(methodList);
    return methods;
}


+ (NSArray *)getProtocolList
{
    
     Protocol * protocols1 = objc_getProtocol("NSCoding");
    unsigned int count = 0;
    Protocol * __unsafe_unretained *protocols = class_copyProtocolList(self, &count);
    struct objc_category *categories;

   
    NSMutableArray *protocolArray = [[NSMutableArray alloc] init];
    for (int i = 0; i < count; i++) {
        [protocolArray addObject:[NSString stringWithUTF8String:protocol_getName(protocols[i])]];
    
    }
    
    
    free(protocols);
    return protocolArray;
}
+ (NSArray *)getSubClassList
{
     NSMutableArray * classList = [NSMutableArray array];
    NSArray *allClassList = [self getClassListWithPrefixs:@[@"NS", @"UI", @"CA"]];
    
    
    for (NSString *className in allClassList) {
        Class class = NSClassFromString(className);
        if ([class isSubclassOfClass:self]) {
            [classList addObject:className];
        }
    }
    return classList;
}
+ (NSArray *)getClassListWithPrefixs:(NSArray *)prefixs
{
    
    NSMutableArray * classList = [NSMutableArray array];
    NSArray *allClassList = [self getAllClassList];
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
+ (NSArray *)getAllClassList {
    NSMutableArray * classList = [NSMutableArray array];
    
    unsigned int classesCount = 0;
    Class * classes = objc_copyClassList(&classesCount);
    
    
    for ( int i = 0; i < classesCount; ++i) {
        NSString *className = NSStringFromClass(classes[i]);
   
        [classList addObject:className];
    }
    
    free(classes);
    return classList;
}

+ (NSArray *)getPropertyAttributeList
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

- (id)createSameObject
{

    id object =  [[[self class] alloc] init];
    NSArray *urlConfigProperties = [[self class] getPropertyList];
    for (NSInteger i = 0; i< urlConfigProperties.count; i++) {
        if ([self valueForKey:urlConfigProperties[i]]) {
            [object setValue:[self valueForKey:urlConfigProperties[i]] forKey:urlConfigProperties[i]];
        }
    }
    return object;
}
- (void)setObjectPropertyAllKeyValueNil
{
    NSArray *properties = [[self class] getPropertyList];
   
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

- (NSDictionary *)getPropertyKeyValueOnlyHaveValueDictionary
{
    NSArray *properties = [[self class] getPropertyList];
    NSMutableDictionary *keyValueDictionary = [[NSMutableDictionary alloc] init];
    for (NSInteger i = 0; i < properties.count; i++) {
        if ([self valueForKey:properties[i]]) {
            [keyValueDictionary setObject:[self valueForKey:properties[i]] forKey:properties[i]];
        }
    }
    return keyValueDictionary;
}
+ (NSDictionary *)getPropertyDictionaryJoinedWithIvarList:(NSArray *)ivarList model:(id)model
{
    //取Model成员变量拼接字典
    NSMutableDictionary *postParameter = [[NSMutableDictionary alloc] init];
    for (NSInteger i = 0 ; i< ivarList.count; i++) {
        
        NSString *propertyName = ivarList[i];
        id propertyValue = [model valueForKey:propertyName];
        if (!propertyValue) {
            propertyValue = @"";
        }
        NSString *actualPropertyName = [propertyName substringFromIndex:1];
        [postParameter addEntriesFromDictionary:@{actualPropertyName:propertyValue}];
        
    }
    return postParameter;
}

@end

//
//  NSObject+ChainFileCreater.m
//  MLProject
//
//  Created by 妙龙赖 on 16/5/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainFileCreater.h"
#import "NSObject+CreateCode.h"
#import "NSFileManager+ML_Tools.h"
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <CoreFoundation/CoreFoundation.h>
#import "NSObject+ChainInfoAdaptor.h"
#import "NSObject+RunTimeHelper.h"
@interface MLChainStructModel:NSObject
@property (nonatomic, copy) NSString *structName;
@property (nonatomic, copy) NSString *encodeTypeString;
@property (nonatomic, copy) NSString *makePrefixString;
+ (instancetype)modelWithStructName:(NSString *)structName encodeTypeString:(NSString *)encodeTypeString makePrefixString:(NSString *)makePrefixString;
+ (NSString *)makePrefixStringWithencodeTypeString:(NSString *)encodeTypeString;
@end
@implementation MLChainStructModel
+ (NSString *)makePrefixStringWithencodeTypeString:(NSString *)encodeTypeString{
    for (MLChainStructModel *model in [MLChainStructModel structModels]) {
        if ([model.encodeTypeString isEqualToString:encodeTypeString]) {
            return model.makePrefixString;
            break;
        }
    }
    return nil;
}
+ (instancetype)modelWithStructName:(NSString *)structName
                   encodeTypeString:(NSString *)encodeTypeString
                   makePrefixString:(NSString *)makePrefixString
{
    MLChainStructModel *model = [[MLChainStructModel alloc] init];
    model.structName = structName;
    model.encodeTypeString = encodeTypeString;
    model.makePrefixString = makePrefixString;
    return model;
}

+ (NSArray *)structModels
{
    
    static  NSArray *structModels = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        structModels = [[NSMutableArray alloc] init];
        MLChainStructModel *model1 = [MLChainStructModel modelWithStructName:@"CGPoint" encodeTypeString:[NSString stringWithUTF8String:@encode(CGPoint)]  makePrefixString:@"CGPointMake"];
        
        MLChainStructModel *model2 = [MLChainStructModel modelWithStructName:@"CGSize" encodeTypeString:[NSString stringWithUTF8String:@encode(CGSize)]  makePrefixString:@"CGSizeMake"];
        
        MLChainStructModel *model3 = [MLChainStructModel modelWithStructName:@"CGRect" encodeTypeString:[NSString stringWithUTF8String:@encode(CGRect)]  makePrefixString:@"CGRectMake"];
        
        MLChainStructModel *model4 = [MLChainStructModel modelWithStructName:@"CGAffineTransform" encodeTypeString:[NSString stringWithUTF8String:@encode(CGAffineTransform)]  makePrefixString:@"CGAffineTransformMake"];
        
        MLChainStructModel *model5 = [MLChainStructModel modelWithStructName:@"CATransform3D" encodeTypeString:[NSString stringWithUTF8String:@encode(CATransform3D)]  makePrefixString:nil];
        
        MLChainStructModel *model6 = [MLChainStructModel modelWithStructName:@"NSRange" encodeTypeString:[NSString stringWithUTF8String:@encode(NSRange)]  makePrefixString:@"NSMakeRange"];
        
        MLChainStructModel *model7 = [MLChainStructModel modelWithStructName:@"UIOffset" encodeTypeString:[NSString stringWithUTF8String:@encode(UIOffset)]  makePrefixString:@"UIOffsetMake"];
        MLChainStructModel *model8 = [MLChainStructModel modelWithStructName:@"UIEdgeInsets" encodeTypeString:[NSString stringWithUTF8String:@encode(UIEdgeInsets)]  makePrefixString:@"UIEdgeInsetsMake"];
        
        structModels = @[model1, model2, model3, model4, model5, model6 ,model7 ,model8];
    });
    
    return structModels;
}

@end






@implementation NSObject (ChainFileCreater)

+ (void)mlc_chainCreateChainFileWithClassNames:(NSArray *)classNames
{
    [self mlc_chainCreateChainFileWithClassNames:classNames superClassTogether:YES];
    
    
}

+ (void)mlc_chainCreateChainFileWithClassNames:(NSArray *)classNames superClassTogether:(BOOL)superClassTogether{
    
    classNames = [self mlc_classNamesToStringWithClassNames:classNames uperClassTogether:superClassTogether];
    
    [self mlc_createChainFileOfChainMakerWithClassNames:classNames];
    
    [self ml_createChainFileOfCategoryWithClassNames:classNames];
    
    [self ml_createChainFileOfMLChainHeaderFileWithClassNames:classNames];
}



+ (NSString *)mlc_methodStringInCategory
{
    NSMutableString *resultString = [[NSMutableString alloc] init];
    NSString *methodString1 = [NSString stringWithFormat:@"+ (MLChain4%@ *)ml_make;\n\n", NSStringFromClass(self)];
    NSString *methodString2 = [NSString stringWithFormat:@"- (MLChain4%@ *)ml_make;\n\n", NSStringFromClass(self)];
    NSString *methodString3 = [NSString stringWithFormat:@"- (MLChain4%@ *)ml_makeConfigs:(void(^)(MLChain4%@ *maker))block;\n\n", NSStringFromClass(self), NSStringFromClass(self)];
    
    [resultString appendString:methodString1];
    [resultString appendString:methodString2];
    [resultString appendString:methodString3];
    
    return resultString;
    
}

+ (NSString *)mlc_implementationStringInCategory
{
    
    NSMutableString *resultString = [[NSMutableString alloc] init];
    
    if (self == [NSObject class]) {
        NSString *implementationString1 =
        [NSString stringWithFormat:
         @"+ (MLChain4%@ *)ml_make {\
         \n\
         \n    id chainBridge = [self mlc_chainBridge];\
         \n    return chainBridge;\
         \n\
         \n}\n", NSStringFromClass(self)];
        NSString *implementationString2 =
        [NSString stringWithFormat:
         @"- (MLChain4%@ *)ml_make {\
         \n\
         \n    id chainBridge = [self mlc_chainBridge];\
         \n    return chainBridge;\
         \n\
         \n}\n", NSStringFromClass(self)];
        NSString *implementationString3 =
        [NSString stringWithFormat:
         @"- (MLChain4%@ *)ml_makeConfigs:(void(^)(MLChain4%@ *maker))block{\
         \n\
         \n    id chainBridge = [self mlc_chainBridge];\
         \n   block(chainBridge);\
         \n   return chainBridge;\
         \n\
         \n}\n", NSStringFromClass(self), NSStringFromClass(self)];
        
        [resultString appendString:implementationString1];
        [resultString appendString:implementationString2];
        [resultString appendString:implementationString3];
        
        
    }else{
        NSString *implementationString1 =
        [NSString stringWithFormat:
         @"+ (MLChain4%@ *)ml_make {\
         \n\
         \n   return (id)[super ml_make];\
         \n\
         \n}\n", NSStringFromClass(self)];
        NSString *implementationString2 =
        [NSString stringWithFormat:
         @"- (MLChain4%@ *)ml_make {\
         \n\
         \n   return (id)[super ml_make];\
         \n\
         \n}\n", NSStringFromClass(self)];
        NSString *implementationString3 =
        [NSString stringWithFormat:
         @"- (MLChain4%@ *)ml_makeConfigs:(void(^)(MLChain4%@ *maker))block{\
         \n\
         \n   MLChain4%@ *chainBridge = self.ml_make;\
         \n   block(chainBridge);\
         \n   return chainBridge;\
         \n\
         \n}\n", NSStringFromClass(self), NSStringFromClass(self), NSStringFromClass(self)];
        [resultString appendString:implementationString1];
        [resultString appendString:implementationString2];
        [resultString appendString:implementationString3];
    }
    
    
    
    return resultString;
}



+ (NSString *)mlc_methodStringsOfNoReturnSelName
{
    
    NSArray *noReturnSelNames = [self mlc_noReturnValueSelNames];
    return [self mlc_methodStringsOfNoReturnSelName:noReturnSelNames];
    
}

+ (NSString *)mlc_methodStringsOfNoReturnSelName:(NSArray *)noReturnSelNames
{
    
    NSMutableArray *methodAndMacroStrings = [[NSMutableArray alloc] init];
    for (NSString *selName in noReturnSelNames) {
        
        NSString *methodAndMacroString = [self mlc_selNameAndMacroDefineWithSelName:selName];
        
        if (methodAndMacroStrings) {
            [methodAndMacroStrings addObject:methodAndMacroString];
        }
    }
    
    NSString *resultString = [methodAndMacroStrings componentsJoinedByString:@"\n"];
    
    NSLog(@"================\n\n\n\n\n%@\n\n\n\n\n================", resultString);
    return resultString;
}

/**
 *  链式方法与宏定义
 *
 *  @param selName <#selName description#>
 *
 *  @return <#return value description#>
 */
+ (NSString *)mlc_selNameAndMacroDefineWithSelName:(NSString *)selName
{
    
    NSString *chainSelName = [self mlc_chainSelNameWithOringalSelName:selName];
    NSString *macroDefineString = [self mlc_macroDefineStringWithSelName:selName chainSelName:chainSelName];
    
    NSMutableString *resultString = [[NSMutableString alloc] init];
    if (macroDefineString) {
        [resultString appendString:macroDefineString];
    }
    
    NSString *getterString = [NSString stringWithFormat:@"- (MLChain4%@ *(^)())%@;", NSStringFromClass([self class]), chainSelName];
    [resultString appendFormat:@"%@\n",getterString];
    
    
    
    return resultString;
}

/**
 *  生成链式宏定义(参数非对象时需要)
 *
 *  @param selName      <#selName description#>
 *  @param chainSelName <#chainSelName description#>
 *
 *  @return <#return value description#>
 */
+ (NSString *)mlc_macroDefineStringWithSelName:(NSString *)selName chainSelName:(NSString *)chainSelName
{
    
    NSMethodSignature *methodSignature = [self instanceMethodSignatureForSelector:NSSelectorFromString(selName)];
    NSUInteger numberOfArguments = [methodSignature numberOfArguments];
    NSMutableString *resultStr = [[NSMutableString alloc] init];
    
    NSString *macroDefineString = [NSString stringWithFormat: @"#ifndef %@\
                                   \n#define %@(...)  %@(@\"%@\", __VA_ARGS__)\
                                   \n#endif\n", chainSelName, chainSelName, chainSelName, selName];
    
    [resultStr appendString:macroDefineString];
    if (numberOfArguments == 3) {
        
        const char *type = [methodSignature getArgumentTypeAtIndex:2];
        if (*type == '{') {
            NSString *encodeTypeString = [NSString stringWithUTF8String:type];
            NSString *structMakePrefixStr = [MLChainStructModel makePrefixStringWithencodeTypeString:encodeTypeString];
            NSString *structBoxStr =
            [NSString stringWithFormat:
             @"#ifndef %@_\
             \n#define %@_(...)  %@(%@(__VA_ARGS__))\
             \n#endif\n", chainSelName, chainSelName, chainSelName, structMakePrefixStr];
            [resultStr appendString:structBoxStr];
        }
        
 
    }
    
    
    NSString *explanationStr =
    [NSString stringWithFormat:@"/**     类名: %@\
                                \n%@\
     */\n",NSStringFromClass(self), [self mlc_selExplanationStrWithSelName:selName andMethodSignature:methodSignature]];
  
    [resultStr appendString:explanationStr];
    return resultStr;
    
}


- (NSString *)mlc_selExplanationStrWithSelName:(NSString *)selName andMethodSignature:(NSMethodSignature *)methodSignature{
    if (methodSignature.numberOfArguments > 2) {
        NSMutableString *resultStr = [[NSMutableString alloc] initWithString:@"SEL: "];
        
        NSArray *subSelStrs = [selName componentsSeparatedByString:@":"];
        for (NSInteger i = 0; i < subSelStrs.count - 1; i++) {
            const char *type = [methodSignature getArgumentTypeAtIndex:i + 2];
           NSString *subSelStr = subSelStrs[i];
            [resultStr appendFormat:@"  %@: '%c'\r\n", subSelStr, *type];
        }
       
        return resultStr;
    }else{
        return [@"SEL: " stringByAppendingString:selName];
    }
    
}


+ (void)mlc_createChainFileOfChainMakerWithClassNames:(NSArray *)classNames
{
    for (NSString *className in classNames) {
        
        NSString *hfileContentString = [self _hFileContentStrWithClassName:className];
        
        NSString *mfileContentString = [self _mFileContentStrWithClassName:className];
        
        
        NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory] stringByAppendingPathComponent:@"MLChain"];
        
        
        NSString *chainClassName = [NSString stringWithFormat:@"MLChain4%@", className];
        NSString *chainSuperClassName = nil;
        
        NSArray *hFileImportFileNames = nil;
        if (MLCSuperClassNameOfClassName(className)) {
            chainSuperClassName = [NSString stringWithFormat:@"MLChain4%@", NSStringFromClass([NSClassFromString(className) superclass])];
        }else{
            chainSuperClassName = @"NSObject";
            hFileImportFileNames = @[@"MLCFileHeader"];
        }
        
        MLCCreateCodeModel *model =
        [MLCCreateCodeModel modelWithClassName:chainClassName
                                superclassName:chainSuperClassName
                          hFileImportFileNames:hFileImportFileNames
                            hFileContentString:hfileContentString
                          mFileImportFileNames:nil
                            mFileContentString:mfileContentString
                                    moreConfig:^(MLCCreateCodeModel *modelOfSelf) {
                                        
                                        modelOfSelf.mFileStringBeforeImplementation = @"#pragma clang diagnostic push\
\n#pragma clang diagnostic ignored \"-Wincomplete-implementation\"";
                                        modelOfSelf.mFileStringAfterEnd = @"#pragma clang diagnostic pop";
                                    }];
        
        [[NSFileManager defaultManager] writefileString:model.hFileResultString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:chainClassName fileType:kML_CreateCodeFileType_h moveToTrashWhenFileExists:YES];
        
        [[NSFileManager defaultManager] writefileString:model.mFileResultString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:chainClassName fileType:kML_CreateCodeFileType_m moveToTrashWhenFileExists:YES];
    }
    
    
}
+ (void)ml_createChainFileOfCategoryWithClassNames:(NSArray *)classNames
{
    //category
    for (NSString *className in classNames) {
        
        NSString *ChainMethodConntenting = [NSClassFromString(className) mlc_methodStringInCategory];
        
        NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory] stringByAppendingPathComponent:@"MLChain"];
        NSString *chaingImplementationString = [NSClassFromString(className) mlc_implementationStringInCategory];
        
        
        
        NSString *chainSuperClassName = MLCSuperClassNameOfClassName(className);
        NSArray *hfileImportFileNames = @[[NSString stringWithFormat:@"MLChain4%@", className]];
        
        NSArray *mFileImportFileNames = @[[className stringByAppendingString:@"+MLChain"], @"NSObject+MLChain"];
        MLCCreateCodeModel *model =
        [MLCCreateCodeModel modelWithClassName:className
                                superclassName:chainSuperClassName
                          hFileImportFileNames:hfileImportFileNames
                            hFileContentString:ChainMethodConntenting
                          mFileImportFileNames:mFileImportFileNames
                            mFileContentString:chaingImplementationString
                                    moreConfig:^(MLCCreateCodeModel *modelOfSelf) {
                                        modelOfSelf.categoryName = @"MLChain";
                                    }];
        
        [[NSFileManager defaultManager] writefileString:model.hFileResultString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:model.fileName fileType:kML_CreateCodeFileType_h moveToTrashWhenFileExists:YES];
        
        [[NSFileManager defaultManager] writefileString:model.mFileResultString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:model.fileName  fileType:kML_CreateCodeFileType_m moveToTrashWhenFileExists:YES];
    }
    
    
}

+ (void)ml_createChainFileOfMLChainHeaderFileWithClassNames:(NSArray *)classNames
{
    //MLChain.h 头文件
    
    NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory] stringByAppendingPathComponent:@"MLChain"];
    
    
    NSMutableArray *hFileImportFileNames = [[NSMutableArray alloc] init];
    
    for (NSString *className in classNames) {
        [hFileImportFileNames addObject:[NSString stringWithFormat:@"MLChain4%@", className]];
        [hFileImportFileNames addObject:[NSString stringWithFormat:@"%@+MLChain", className]];
    }
    
    
    
    MLCCreateCodeModel *model =
    [MLCCreateCodeModel modelWithClassName:nil
                            superclassName:nil
                      hFileImportFileNames:hFileImportFileNames
                        hFileContentString:nil
                      mFileImportFileNames:nil
                        mFileContentString:nil
                                moreConfig:^(MLCCreateCodeModel *modelOfSelf) {
                                    
                                }];
    
    NSString *hFileString = [NSString stringWithFormat:@"%@\n#ifndef ML_Chain_h\n#define ML_Chain_h\n%@\n#endif", model.hFileTopString, model.hFileImportString];
    [[NSFileManager defaultManager] writefileString:hFileString
                                 ToFileWithDiretory:XcodeCreateCodeDirectory
                                           fileName:@"MLChain"
                                           fileType:kML_CreateCodeFileType_h
                          moveToTrashWhenFileExists:YES];
    
}


/**
 要生成的类的类名
 
 @param classNames <#classNames description#>
 @param superClassTogether <#superClassTogether description#>
 @return <#return value description#>
 */
+ (NSArray *)mlc_classNamesToStringWithClassNames:(NSArray *)classNames uperClassTogether:(BOOL)superClassTogether
{
    NSMutableSet *mutClassSet = [[NSMutableSet alloc] init];
    for (id obj in classNames) {
        NSString *className;
        if ([obj isKindOfClass:[NSString class]]) {
            className = obj;
        }else if (object_isClass(obj)){
            className = NSStringFromClass(obj);
        }else{
            assert(@"无法识别该对象");
        }
        
        [mutClassSet addObject:className];
        
        if (superClassTogether) {
            for ( NSString *superClassName = MLCSuperClassNameOfClassName(className); superClassName != nil; superClassName = MLCSuperClassNameOfClassName(superClassName)) {
                
                [mutClassSet addObject:superClassName];
                
            }
        }
        
        
        
    }
    NSMutableArray *mutArr = [[NSMutableArray alloc] init];
    for (id obj in mutClassSet) {
        [mutArr addObject:obj];
    }
    return mutArr;
}
#pragma mark - File Content Helper

/**
 h文件内容
 
 @param className <#className description#>
 @return <#return value description#>
 */
+ (NSString *)_hFileContentStrWithClassName:(NSString *)className{
    
    NSString *hFileContentString = @"";
    
    NSString *property = @"chainObject";
    if ([className isEqualToString:@"NSObject"]) {
        
        hFileContentString  = [NSString stringWithFormat:@"@property (nonatomic, strong)id %@;\n", property];
    }
    
    NSString *ChainMethodConntenting = [NSClassFromString(className) mlc_methodStringsOfNoReturnSelName];
    hFileContentString = [hFileContentString stringByAppendingString:ChainMethodConntenting];
    return hFileContentString;
}


/**
 m文件内容
 
 @param className <#className description#>
 @return <#return value description#>
 */
+ (NSString *)_mFileContentStrWithClassName:(NSString *)className{
    
    NSString *mfileContentString;
    if ([className isEqualToString:@"NSObject"]) {
    
        
    }else{
        
        mfileContentString = @"+ (void)load{\n\
        \n  [self mlc_setUpMethodDynamically];\
        \n}";
    }
    return mfileContentString;
    
}
@end

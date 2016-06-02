//
//  NSObject+ChainFileCreater.m
//  MLProject
//
//  Created by 妙龙赖 on 16/5/1.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "NSObject+ChainFileCreater.h"
#import "NSObject+ChainMethod.h"
#import "NSObject+ChainInvocation.m"
#import "NSObject+CreateCode.h"
#import "NSString+Class.h"
#import "NSFileManager+ML_Tools.h"
#import "NSString+Class.h"
@implementation NSObject (ChainFileCreater)

+ (void)ml_chainCreateChainFileWithClassNames:(NSArray *)classNames
{
    classNames = [self ml_classNamesToStringWithClassNames:classNames];
    
    [self ml_createChainFileOfChainMakerWithClassNames:classNames];
    [self ml_createChainFileOfCategoryWithClassNames:classNames];
    [self ml_createChainFileOfMLChainHeaderFileWithClassNames:classNames];
    
    
}


+ (void)ml_createChainFileOfChainMakerWithClassNames:(NSArray *)classNames
{
    for (NSString *className in classNames) {
        NSString *property = [NSClassFromString(className) objectPropertyNameInChainMaker];
        
        NSString *chainMethodString = [NSClassFromString(className) mlChain_allMethodStringsForNoReturnSelName];
        NSString *classDeclearString = @"";
        if ([className isEqualToString:@"NSObject"]) {
            classDeclearString = [NSObject mlChain_classDeclearStringOfNSObjectWithClassNames:classNames];
        }
        
        NSString *hfileContentString;
        if ([className isEqualToString:@"NSObject"]) {
            
            NSString *lookUpMakerString = [NSObject mlChain_lookUpMakerMethodStringOfNSObjectWithClassNames:classNames];
            hfileContentString  = [NSString stringWithFormat:@"@property (nonatomic, strong)%@ *%@;\n%@\n%@", className, property, lookUpMakerString, chainMethodString];
        }else{
            hfileContentString  = [NSString stringWithFormat:@"@property (nonatomic, strong)%@ *%@;\n%@", className, property, chainMethodString];
        }
        
        
        
        NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory] stringByAppendingPathComponent:@"MLChain"];
        NSString *chainImplementationString = [NSClassFromString(className) mlChain_allImplementationStringsOfInvocatioTypeForNoReturnSelName];
        NSString *mfileContentString;
        if ([className isEqualToString:@"NSObject"]) {
            NSString *lookUpMakerImplementationString = [NSObject mlChain_lookUpMakerImplementationStringOfNSObjectWithClassNames:classNames];
            
            mfileContentString = [NSString stringWithFormat:@"%@\n%@\n", lookUpMakerImplementationString, chainImplementationString];
        }else{
            mfileContentString = chainImplementationString;
        }
        
        NSString *chainClassName = [NSString stringWithFormat:@"MLChain4%@", className];
        NSString *chainSuperClassName = nil;
        
        if ([className ml_superClassNameFromSelf]) {
            chainSuperClassName = [NSString stringWithFormat:@"MLChain4%@", NSStringFromClass([NSClassFromString(className) superclass])];
        }else{
            chainSuperClassName = @"NSObject";
        }
        
        ML_CreateCodeModel *model =
        [ML_CreateCodeModel modelWithClassName:chainClassName
                                superclassName:chainSuperClassName
                          hFileImportFileNames:@[@"MLChainMacro"]
                            hFileContentString:hfileContentString
                          mFileImportFileNames:nil
                            mFileContentString:mfileContentString
                                    moreConfig:^(ML_CreateCodeModel *modelOfSelf) {
                                        modelOfSelf.typedefString = [NSString stringWithFormat:@"ml_chain_block_maker(%@);",className];
                                        modelOfSelf.classDeclearString = classDeclearString;
                                        
                                    }];
        
        [[NSFileManager defaultManager] writefileString:model.hFileResultString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:chainClassName fileType:kML_CreateCodeFileType_h moveToTrashWhenFileExists:YES];
        
        [[NSFileManager defaultManager] writefileString:model.mFileResultString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:chainClassName fileType:kML_CreateCodeFileType_m moveToTrashWhenFileExists:YES];
    }
    

}
+ (void)ml_createChainFileOfCategoryWithClassNames:(NSArray *)classNames
{
    //category
    for (NSString *className in classNames) {
        
        NSString *chainMethodString = [NSClassFromString(className) mlChain_methodStringInCategory];
        
        NSString *XcodeCreateCodeDirectory = [[NSFileManager macDeskTopDiretory] stringByAppendingPathComponent:@"MLChain"];
        NSString *chaingImplementationString = [NSClassFromString(className) mlChain_ImplementationStringInCategory];
        
        
        
        NSString *chainSuperClassName = [className ml_superClassNameFromSelf];
        NSArray *hfileImportFileNames = @[[NSString stringWithFormat:@"MLChain4%@", className]];
        
        NSArray *mFileImportFileNames = @[[className stringByAppendingString:@"+MLChain"], @"NSObject+MLChain"];
        ML_CreateCodeModel *model =
        [ML_CreateCodeModel modelWithClassName:className
                                superclassName:chainSuperClassName
                          hFileImportFileNames:hfileImportFileNames
                            hFileContentString:chainMethodString
                          mFileImportFileNames:mFileImportFileNames
                            mFileContentString:chaingImplementationString
                                    moreConfig:^(ML_CreateCodeModel *modelOfSelf) {
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
    
    [hFileImportFileNames addObject:@"NSObject+ChainInvocation"];
    for (NSString *className in classNames) {
        [hFileImportFileNames addObject:[NSString stringWithFormat:@"MLChain4%@", className]];
        [hFileImportFileNames addObject:[NSString stringWithFormat:@"%@+MLChain", className]];
    }
    
    
    
    ML_CreateCodeModel *model =
    [ML_CreateCodeModel modelWithClassName:nil
                            superclassName:nil
                      hFileImportFileNames:hFileImportFileNames
                        hFileContentString:nil
                      mFileImportFileNames:nil
                        mFileContentString:nil
                                moreConfig:^(ML_CreateCodeModel *modelOfSelf) {
                                    
                                }];
    
    NSString *hFileString = [NSString stringWithFormat:@"%@\n#ifndef ML_Chain_h\n#define ML_Chain_h\n%@\n#endif", model.hFileTopString, model.hFileImportString];
    [[NSFileManager defaultManager] writefileString:hFileString ToFileWithDiretory:XcodeCreateCodeDirectory fileName:@"MLChain" fileType:kML_CreateCodeFileType_h moveToTrashWhenFileExists:YES];

}

+ (NSArray *)ml_classNamesToStringWithClassNames:(NSArray *)classNames
{
    NSMutableArray *resultArr = [[NSMutableArray alloc] init];
    for (id obj in classNames) {
        NSString *className;
        if ([obj isKindOfClass:[NSString class]]) {
            className = obj;
        }else{
            className = NSStringFromClass(obj);
        }
        [resultArr addObject:className];
        
        
        NSString *superClassName = [className ml_superClassNameFromSelf];
        if (superClassName) {
            if (![resultArr containsObject:superClassName]) {
                [resultArr addObject:superClassName];
            }
        }
        
    }
    return resultArr;
}
@end

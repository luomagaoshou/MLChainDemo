//
//  MLCFileHeader.h
//  MLChainDemo
//
//  Created by 妙龙赖 on 2017/1/21.
//  Copyright © 2017年 妙龙赖. All rights reserved.
//

#ifndef MLCFileHeader_h
#define MLCFileHeader_h
#import "NSObject+ChainInvocation.h"
#import "NSObject+ChainInfoAdaptor.h"
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "MLChain_RACmetamacros.h"
#define MLC(_OBJ_)  ((void)(NO && [_OBJ_ class]), _OBJ_.mlc_make)

#endif /* MLCFileHeader_h */

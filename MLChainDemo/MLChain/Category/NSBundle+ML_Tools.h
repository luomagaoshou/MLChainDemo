//
//  NSBundle+ML_Tools.h
//  MLProject
//
//  Created by apple on 16/1/12.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (ML_Tools)
+ (id)loadNibWithNameOrClass:(id)NameOrClass;
+ (BOOL)isSystemClass:(Class)aClass;
@end

//
//  NSFileManager+ML_Tools.h
//  MLProject
//
//  Created by 妙龙赖 on 15/12/19.
//  Copyright © 2015年 妙龙赖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (ML_Tools)
+ (NSString *)macDeskTopDiretory;
+ (NSString *)macTrashDiretory;
- (BOOL)writefileString:(NSString *)fileString
     ToFileWithDiretory:(NSString *)diretory
                       fileName:(NSString *)fileName
                           fileType:(NSString *)fileType
      moveToTrashWhenFileExists:(BOOL)isMove;

@end

//  
//  UITableView+MLChain.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UITableView.h"


@interface UITableView(MLChain)
+ (MLChain4UITableView *)ml_make;

- (MLChain4UITableView *)ml_make;

- (MLChain4UITableView *)ml_makeConfigs:(void(^)(MLChain4UITableView *maker))block;


@end

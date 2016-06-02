//  
//  UITableView.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "UITableView+MLChain.h"
#import "NSObject+MLChain.h"
@implementation UITableView(MLChain)
+ (MLChain4UITableView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UITableView *)ml_make
{

return (id)[super ml_make];

}

- (MLChain4UITableView *)ml_makeConfigs:(void(^)(MLChain4UITableView *maker))block
{

MLChain4UITableView *chainMaker = self.ml_make;
block(chainMaker);
return chainMaker;

}


@end

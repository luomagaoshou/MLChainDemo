//
//  ViewController.m
//  MLChainDemo
//
//  Created by 妙龙赖 on 16/6/3.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ViewController.h"
#import "NSObject+ChainFileCreater.h"

#import "MLChain.h"
@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad {
    [super viewDidLoad];

    
    [self createMLChainFiles];
#if 1
    [self mlChainBaseUsage];

    [self mlChainUsageByUsingBlockConfig];
    
    [self mlChainUsageByUsingMacro];

#endif
}


/**
    生成链式方法文件，把想要生成的类名传给函数
    生成文件到桌面名字为MLChain的文件夹，然后将其拖入项目即可
    要使用的文件导入MLChain.h头文件即可
 */
- (void)createMLChainFiles{

    

    [NSObject mlc_chainCreateChainFileWithClassNames:
     @[[UIView class],
       [UITextField class],
       [CALayer class],
       [UIButton class],
       [CABasicAnimation class],
       ]];

}


/**
 基本用法
 */
- (void)mlChainBaseUsage{

    UIView *view1 = [[UIView alloc] init];
    //创建实例后调用
    view1.mlc_make.backgroundColor([UIColor orangeColor]).
    frame(CGRectMake(50, 100, 100, 100));
    [self.view addSubview:view1];
    
    //使用frame_，有时候比较方便
    UIView *view2 = UIView.mlc_make
    .backgroundColor([UIColor greenColor])
    .frame_(50, 220, 100, 100)
    .chainObject;
    [self.view addSubview:view2];
    
    //使用类方法进行设置，需要注意的是使用类方法mlc_make是没有代码提示的，不是很方便的一点
    UIView.mlc_make
    .backgroundColor([UIColor grayColor])
    .frame_(50, 340, 100, 100)
    .moveToSuperview(self.view);
    
    
    //两个参数以上的方法用下划线(_)作为分割符
    UIButton *button1 = [UIButton buttonWithType:UIButtonTypeSystem];
    
    button1.mlc_make
    .title_forState(@"button1", UIControlStateNormal).
    addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside)
    .backgroundColor([UIColor redColor])
    .frame_(170, 100, 100, 100)
    .moveToSuperview(self.view);
    
    
    UIButton.mlc_make
    .title_forState(@"button2", UIControlStateNormal).
    titleColor_forState([UIColor blueColor], UIControlStateNormal)
    .addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside)
    .frame_(170, 220, 100, 100)
    .backgroundColor([UIColor yellowColor])
    .moveToSuperview(self.view);
    
    UIButton.mlc_make
    .frame_(170, 340, 100, 100)
    .backgroundColor([UIColor cyanColor])
    .title_forState(@"button3", UIControlStateNormal)
    .titleColor_forState([UIColor blackColor], UIControlStateNormal)
    .addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside)
    .moveToSuperview(self.view);

}

/**
 使用block来配置
 */
- (void)mlChainUsageByUsingBlockConfig{
    
    //使用block统一设置，相关属性放在同一行进行设置，增加可读性
    CALayer *layer1 = [CALayer layer];
    [layer1 mlc_makeConfigs:^(MLChain4CALayer *maker) {
        maker.frame_(290, 100, 100, 100);
        maker.backgroundColor([UIColor brownColor].CGColor);
        maker.shadowRadius(20).shadowOff_(50, 50).shadowColor([UIColor blueColor].CGColor).shadowOpacity(1);
        
    }];
    [self.view.layer addSublayer:layer1];
    
    CALayer *layer2 =  CALayer.mlc_make
    .frame_(290, 220, 100, 100)
    .backgroundColor([UIColor purpleColor].CGColor)
    .chainObject;
    [self.view.layer addSublayer:layer2];
    
    CABasicAnimation *basicAni = [CABasicAnimation mlc_makeConfigs:^(MLChain4CABasicAnimation *maker) {
        maker.keyPath(@"transform.scale").fromValue(@(0.5)).toValue(@(1.5));
        maker.fillMode(kCAFillModeForwards).autoreverses(YES);
        maker.duration(1).repeatDuration(MAXFLOAT);
    }].chainObject;
    layer2.mlc_make.addAnimation_forKey(basicAni, @"动画");

}


/**
 使用宏来设置，其实只是桥梁类的便利方式
 */
- (void)mlChainUsageByUsingMacro{
    

    MLC(UITextField)
    .frame_(290, 340, 100, 40)
    .moveToSuperview(self.view)
    .backgroundColor([UIColor blueColor])
    .textColor([UIColor yellowColor])
    .text(@"textField1")
    .textAlignment(NSTextAlignmentCenter);
    
    UITextField *textField = [[UITextField alloc] init];
    MLC(textField)
    .frame_(290, 390, 100, 40)
    .moveToSuperview(self.view)
    .backgroundColor([UIColor purpleColor])
    .textColor([UIColor cyanColor])
    .text(@"textField2")
    .textAlignment(NSTextAlignmentCenter);
    
}

#pragma mark - Click Event
- (void)buttonClicked:(UIButton *)button
{
    NSLog(@"您点击的是:%@", [button titleForState:UIControlStateNormal]);
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

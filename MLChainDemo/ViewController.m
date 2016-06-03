//
//  ViewController.m
//  MLChainDemo
//
//  Created by 妙龙赖 on 16/6/3.
//  Copyright © 2016年 妙龙赖. All rights reserved.
//

#import "ViewController.h"
#import "NSObject+ChainFileCreater.h"
#import "NSObject+RunTimeHelper.h"
#import "MLChain.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
  
    //生成链式方法文件，该方法会生成文件到桌面名字为MLChain的文件夹，然后将其拖入项目即可
    //注意点：1.如果有方法重名需要手动删除
    //2.不管是私有方法还是公有方法都会生成
#if 0
    [NSObject ml_chainCreateChainFileWithClassNames:@[[UITableView class], [CALayer class], [CABasicAnimation class], [UIButton class], [UITextField class]]];
#endif
    

    UIView *view1 = [[UIView alloc] init];
    //创建实例后调用
    view1.ml_make.backgroundColor([UIColor orangeColor]).
    frame(CGRectMake(50, 100, 100, 100));
    [self.view addSubview:view1];
    
    //使用frame_，有时候比较方便
   UIView *view2 = UIView.ml_make.backgroundColor([UIColor greenColor]).frame_(50, 220, 100, 100).view;
    [self.view addSubview:view2];

    //使用类方法进行设置，需要注意的是使用类方法ml_make是没有代码提示的，不是很方便的一点
    UIView.ml_make.backgroundColor([UIColor grayColor]).frame_(50, 340, 100, 100).moveToSuperview(self.view);
    
    
    //两个参数以上的方法用下划线(_)作为分割符
    UIButton *button1 = [UIButton buttonWithType:UIButtonTypeSystem];
    button1.ml_make.title_forState(@"button1", UIControlStateNormal).
    addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside).
    backgroundColor([UIColor redColor]).
    frame_(170, 100, 100, 100).
    moveToSuperview(self.view);
    
    
    UIButton.ml_make.title_forState(@"button2", UIControlStateNormal).
    titleColor_forState([UIColor blueColor], UIControlStateNormal).
    addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside).
    frame_(170, 220, 100, 100).backgroundColor([UIColor yellowColor]).
    moveToSuperview(self.view);
    
#if 0
    UIButton.ml_make.frame_(170, 340, 100, 100).
    backgroundColor([UIColor cyanColor]).title_forState(@"button3", UIControlStateNormal).
    titleColor_forState([UIColor blackColor], UIControlStateNormal).
    addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside);
#endif
    //由于block用instancetype做为返回值没有点语法，因此如果子类使用了父类的方法会返回父类的对象类型，出现这种情况使用lookUpXXXX找回自身类型
    UIButton.ml_make.frame_(170, 340, 100, 100).
    backgroundColor([UIColor cyanColor]).
    lookUpMakerOfUIButton.
    title_forState(@"button3", UIControlStateNormal).
    titleColor_forState([UIColor blackColor], UIControlStateNormal).
    addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside).
    moveToSuperview(self.view);
    
    
    //对于CALayer这种比较底层的框架，部分参数用会所不同，如此时backgroudColor不需要转成CGColor
    CALayer *layer =  CALayer.ml_make.frame_(290, 100, 100, 100).backgroundColor([UIColor purpleColor]).layer;
    [self.view.layer addSublayer:layer];
    
    //动画
    CABasicAnimation *basicAni = [CABasicAnimation animation];
    basicAni.ml_make.keyPath(@"transform.scale").
    lookUpMakerOfCABasicAnimation.
    fromValue(@(0.5)).
    toValue(@(2.0)).
    fillMode(kCAFillModeForwards).
    repeatCount(MAXFLOAT).
    duration(1).
    autoreverses(YES);
    layer.ml_make.addAnimation_forKey(basicAni, @"动画");
    
    
    
}
- (void)buttonClicked:(UIButton *)button
{
    NSLog(@"您点击的是:%@", [button titleForState:UIControlStateNormal]);
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

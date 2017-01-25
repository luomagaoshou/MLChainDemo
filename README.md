# MLChainDemo
#前言
鸡年到了，祝广大程序猿鸡年大吉。
#简介
链式编程，可以使用返回调用者自身来实现。但是有类有很多，每个类也有很多方法，假如要实现链式编程，则需要每一个方法进行命令与实现，工作量之大可想而知。于是乎，笔者就在想如何不用自己写链式实现都可以进行链式编程。
#先说用法
##步骤1 
将该demo的MLCCategory文件夹拖入有新项目。
![5DA3D8A9-E8E7-4345-B387-A6D01D22B2F2.png](http://upload-images.jianshu.io/upload_images/2202779-a9e3e18a214f5019.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
导入 #import "NSObject+ChainFileCreater.h" 
##步骤2
调用方法链式实现文件，把你想进行链式编程的类加进数组，会把该类的没有返回值的实例方法提取出来，包括category方法
```
[NSObject mlc_chainCreateChainFileWithClassNames:
@[[UIView class],
[UITextField class],
[CALayer class],
[UIButton class],
[CABasicAnimation class],
]];
```
##步骤3
看到电脑桌面有个MLChain的文件夹，里面都是你想的链式方法文件，拖进项目

![22976CB8-466A-4568-953F-C8F1B16B330D.png](http://upload-images.jianshu.io/upload_images/2202779-17a5227c5332978c.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

##步骤4
###开始撸码
####简单一点撸
```
UIView *view1 = [[UIView alloc] init];
//创建实例后调用
view1.mlc_make.backgroundColor([UIColor orangeColor]).
frame(CGRectMake(50, 100, 100, 100));
[self.view addSubview:view1];
```
mlc_make相当于生成一个链式的桥梁对象，所有的方法都经过桥梁对象进行赋值。
另外笔者把setter方法的方法名改成getter的方法进行链式调用
####复杂一点撸
```
UIView *view2 = UIView.mlc_make
.backgroundColor([UIColor greenColor])
.frame_(50, 220, 100, 100)
.chainObject;
[self.view addSubview:view2];
```
与第一个对比，直接使用类创建链式桥梁对象，省却了生成对象的方法。
另外frame_是frame的便利方法，使用宏定义如下
```
#ifndef frame_             
#define frame_(...)  frame(CGRectMake(__VA_ARGS__))             
#endif
```
这样省却了CGRectMake的代码。
如果该方法只有一个参数且该参数为常用结构体时，在原链式方法名加下划线(_)的方法生成便利方法。
####再再复杂一点撸
```
UIButton.mlc_make
.title_forState(@"button2", UIControlStateNormal).
titleColor_forState([UIColor blueColor], UIControlStateNormal)
.addTarget_action_forEvents(self, @selector(buttonClicked:), UIControlEventTouchUpInside)
.frame_(170, 220, 100, 100)
.backgroundColor([UIColor yellowColor])
.moveToSuperview(self.view);
```
如果方法有两个或以上参数时，会使用下划线(_)分割方法名。
moveToSuperview是view的我写的category的方法，生成链式文件时包括category都会加进来。所以要如果写了新的category方法，需要更新链式方法时，则重新生成链式文件，然后删除有链式文件，最后再拖入链式文件到项目即可。

####换个姿势撸
```
CALayer *layer1 = [CALayer layer];
[layer1 mlc_makeConfigs:^(MLChain4CALayer *maker) {
maker.frame_(290, 100, 100, 100);
maker.backgroundColor([UIColor brownColor].CGColor);
maker.shadowRadius(20).shadowOff_(50, 50).shadowColor([UIColor blueColor].CGColor).shadowOpacity(1);

}];
[self.view.layer addSublayer:layer1];
```
模仿Masonry的设置方式便，将要设置的放在block里面设置，按自己的需求将设置分段。
####再换一个
```
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
```
用类方法调用，使用起来也很方便。

#原理
##1.如何链式才能编程
链式编程要返回自身，每一个链式方法都必须返回明确的类型才能一直点下去，使用protocol或继承都不行，必须在每一个方法的声明时明确返回对象的类型。所以链式文件中不但有该类的方法声明，也有父类的方法声明。
##2.如何使用block对原对象进行设置
为了减少对原类的侵入，使用桥梁类进行设置，对应的代码量的略微增加(生成桥梁对象的代码，即mlc_make)。
###参数的入口
首先要制造通用格式的block如下
```
- (id (^)())testMethod;
```
乍一看，这是一个不带参数block，其实不然，这是可以让你放肆的block,可以不传参数，也可以传N个参数。详情可见如下链接
[objc非主流代码技巧](http://blog.sunnyxx.com/2014/08/02/objc-weird-code/)
###参数的获得
笔者在所有的链式类中，在+ load方法中对所有链式方法做一个动态添加方法的操作，所有的声明链式方法都走这个方法。
```
- (instancetype (^)(NSString *selName, ...))mlc_rootChainMethod{
return ^ id (NSString *selName, ...){
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wundeclared-selector"
id chainObject = [self performSelector:@selector(chainObject)];
#pragma clang diagnostic pop

NSMethodSignature *sig = [chainObject methodSignatureForSelector:sel_registerName(selName.UTF8String)];
NSInvocation *inv = [NSInvocation invocationWithMethodSignature:sig];
[inv setTarget:chainObject];
[inv setSelector:sel_registerName(selName.UTF8String)];
va_list args;
va_start(args, selName);
[NSObject mlc_setInv:inv withSig:sig andArgs:args];
va_end(args);
[inv invoke];
return self;
};
}
```
第一个参数是调用方法的selName，va_list是可变参数列表，只要我们知道下个数据类型，就可以使用va_arg取得下个数据。而数据类型可以从方法的methodSignature取得，然后使用NSInvocation逐一根据数据类型设置。设置的方法setInv:withSig:andArgs:从[YYKit](https://github.com/ibireme/YYKit)中得来。

为了规范传入的值的格式，方便从va_list中取值，带参数的方法都有一个宏，如：
```
#ifndef alpha                                  
#define alpha(...)  alpha(@"setAlpha:", (double)__VA_ARGS__)                                  
#endif
/**     ClassName-> UIView                                
SEL:   setAlpha: 'd'
*/
- (MLChain4UIView *(^)())alpha;
```
假如传入int值，取float值，会造成取值不准。为了规避这种情况，需要对传递的参数进行强转成函数所对应的参数类型。于是笔者使用宏定义的方式，把原selName做为第一个参数，用于va_list查找第一个参数，而后续的参数如果是数值类型，则进行强转再传递。取参数使用到metamacro_at(N, ...)(来自RAC的宏定义)，并逐一进行强转。
#后语
这是一个链式方法文件的生成器，链式方法使用虽然方便，但是调试起来还是有稍有难度。平时用于撸demo还是挺爽的。

此处应有demo[MLChainDemo](https://github.com/luomagaoshou/MLChainDemo)

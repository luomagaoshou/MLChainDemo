//  
//  MLChain4CAAnimation.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4CAAnimation.h"
#import "MLChain4NSObject.h"
@implementation MLChain4CAAnimation
- (MLChainParamBlock4CAAnimation)value_forUndefinedKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setValue:forUndefinedKey:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)value_forKeyPath{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setValue:forKeyPath:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)value_forKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setValue:forKey:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)enabled{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setEnabled:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)delegate{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setDelegate:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)CAMLParser_setValue_forKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"CAMLParser:setValue:forKey:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)encodeWithCAMLWriter{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"encodeWithCAMLWriter:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)removedOnCompletion{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setRemovedOnCompletion:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)beginTime{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setBeginTime:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)repeatDuration{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setRepeatDuration:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)fillMode{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setFillMode:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)runActionForKey_object_arguments{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"runActionForKey:object:arguments:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)defaultDuration{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setDefaultDuration:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)applyForTime_presentationObject_modelObject{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"applyForTime:presentationObject:modelObject:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)beginTimeMode{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setBeginTimeMode:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)encodeWithCoder{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"encodeWithCoder:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)duration{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setDuration:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)timingFunction{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setTimingFunction:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)frameInterval{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setFrameInterval:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)timeOff{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setTimeOffset:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)repeatCount{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setRepeatCount:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)autoreverses{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setAutoreverses:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}

- (MLChainParamBlock4CAAnimation)speed{
__weak typeof(self) weakSelf = self;
return ^ MLChain4CAAnimation *(id firstObject, ...){
NSString *selName = @"setSpeed:";
__strong typeof(weakSelf) strongSelf = weakSelf;
id chainObject = [strongSelf objectOfChainMaker];
va_list arglist;
va_start(arglist, firstObject);
NSArray *arguments = [NSObject argumentsWithTarget:chainObject selectorName:selName arglist:arglist firstObject:firstObject];
va_end(arglist);
[NSObject excuteSettingWithTarget:chainObject selectorName:selName configArguments:arguments];

return weakSelf;
};
}
@end

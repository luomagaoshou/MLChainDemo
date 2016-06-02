//  
//  MLChain4NSObject.m
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"
@implementation MLChain4NSObject
- (instancetype)and
{
return self;
}
- (instancetype)with
{
return self;
}
- (MLChain4UITableView *)lookUpMakerOfUITableView
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4UIScrollView *)lookUpMakerOfUIScrollView
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4UIView *)lookUpMakerOfUIView
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4UIResponder *)lookUpMakerOfUIResponder
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4NSObject *)lookUpMakerOfNSObject
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4CALayer *)lookUpMakerOfCALayer
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4CABasicAnimation *)lookUpMakerOfCABasicAnimation
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4CAPropertyAnimation *)lookUpMakerOfCAPropertyAnimation
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4CAAnimation *)lookUpMakerOfCAAnimation
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4UIButton *)lookUpMakerOfUIButton
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4UIControl *)lookUpMakerOfUIControl
{
return [self lookUpMakerWithSelector:_cmd];
}
- (MLChain4UITextField *)lookUpMakerOfUITextField
{
return [self lookUpMakerWithSelector:_cmd];
}
- (id)lookUpMakerWithSelector:(SEL)selector
{
NSString *selName = NSStringFromSelector(selector);
NSString *className = [selName stringByReplacingOccurrencesOfString:@"lookUpMakerOf" withString:@""];
NSString *makerName = [NSClassFromString(className) chainMakerName];
if (![self isKindOfClass:NSClassFromString(makerName)]) {
NSAssert(0, @"lookUp maker pointer error, 该指针类型不属于该类或该类父类");
}
return self;

}

- (MLChainParamBlock4NSObject)objectPropertyAllKeyValueNil{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setObjectPropertyAllKeyValueNil";
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

- (MLChainParamBlock4NSObject)willUpdateFocusInContext_withAnimationCoordinator{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"willUpdateFocusInContext:withAnimationCoordinator:";
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

- (MLChainParamBlock4NSObject)willUpdateFocusToView{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"willUpdateFocusToView:";
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

- (MLChainParamBlock4NSObject)didUpdateFocusFromView{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"didUpdateFocusFromView:";
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

- (MLChainParamBlock4NSObject)accessibilityIdentifier{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityIdentifier:";
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

- (MLChainParamBlock4NSObject)accessibilitySetIdentification{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"accessibilitySetIdentification:";
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

- (MLChainParamBlock4NSObject)accessibilityElements{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityElements:";
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

- (MLChainParamBlock4NSObject)accessibilityIncrement{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"accessibilityIncrement";
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

- (MLChainParamBlock4NSObject)accessibilityDecrement{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"accessibilityDecrement";
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

- (MLChainParamBlock4NSObject)accessibilityCustomActions{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityCustomActions:";
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

- (MLChainParamBlock4NSObject)accessibilityElementDidBecomeFocused{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"accessibilityElementDidBecomeFocused";
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

- (MLChainParamBlock4NSObject)accessibilityElementDidLoseFocus{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"accessibilityElementDidLoseFocus";
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

- (MLChainParamBlock4NSObject)accessibilityElementsHidden{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityElementsHidden:";
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

- (MLChainParamBlock4NSObject)accessibilityViewIsModal{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityViewIsModal:";
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

- (MLChainParamBlock4NSObject)accessibilityHint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityHint:";
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

- (MLChainParamBlock4NSObject)accessibilityFrame{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityFrame:";
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

- (MLChainParamBlock4NSObject)accessibilityPath{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityPath:";
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

- (MLChainParamBlock4NSObject)accessibilityActivationPoint{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityActivationPoint:";
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

- (MLChainParamBlock4NSObject)accessibilityTraits{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityTraits:";
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

- (MLChainParamBlock4NSObject)isAccessibilityElement{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setIsAccessibilityElement:";
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

- (MLChainParamBlock4NSObject)accessibilityContainer{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityContainer:";
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

- (MLChainParamBlock4NSObject)accessibilityLanguage{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityLanguage:";
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

- (MLChainParamBlock4NSObject)shouldGroupAccessibilityChildren{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setShouldGroupAccessibilityChildren:";
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

- (MLChainParamBlock4NSObject)accessibilityNavigationStyle{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityNavigationStyle:";
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

- (MLChainParamBlock4NSObject)accessibilityHeaderElements{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityHeaderElements:";
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

- (MLChainParamBlock4NSObject)accessibilityLabel{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityLabel:";
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

- (MLChainParamBlock4NSObject)accessibilityValue{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setAccessibilityValue:";
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

- (MLChainParamBlock4NSObject)awakeFromNib{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"awakeFromNib";
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

- (MLChainParamBlock4NSObject)prepareForInterfaceBuilder{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"prepareForInterfaceBuilder";
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

- (MLChainParamBlock4NSObject)releaseOnMainThread{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"releaseOnMainThread";
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

- (MLChainParamBlock4NSObject)encodeWithCAMLWriter{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
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

- (MLChainParamBlock4NSObject)CA_prepareRenderValue{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"CA_prepareRenderValue";
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

- (MLChainParamBlock4NSObject)removeObservation{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"removeObservation:";
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

- (MLChainParamBlock4NSObject)receiveObservedValue{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"receiveObservedValue:";
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

- (MLChainParamBlock4NSObject)receiveObservedError{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"receiveObservedError:";
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

- (MLChainParamBlock4NSObject)finishObserving{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"finishObserving";
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

- (MLChainParamBlock4NSObject)performSelector_onThread_withObject_waitUntilDone_modes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelector:onThread:withObject:waitUntilDone:modes:";
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

- (MLChainParamBlock4NSObject)performSelectorOnMainThread_withObject_waitUntilDone_modes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelectorOnMainThread:withObject:waitUntilDone:modes:";
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

- (MLChainParamBlock4NSObject)performSelectorOnMainThread_withObject_waitUntilDone{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelectorOnMainThread:withObject:waitUntilDone:";
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

- (MLChainParamBlock4NSObject)performSelectorInBackground_withObject{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelectorInBackground:withObject:";
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

- (MLChainParamBlock4NSObject)performSelector_onThread_withObject_waitUntilDone{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelector:onThread:withObject:waitUntilDone:";
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

- (MLChainParamBlock4NSObject)performSelector_withObject_afterDelay_inModes{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelector:withObject:afterDelay:inModes:";
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

- (MLChainParamBlock4NSObject)performSelector_withObject_afterDelay{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelector:withObject:afterDelay:";
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

- (MLChainParamBlock4NSObject)performSelector_object_afterDelay{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"performSelector:object:afterDelay:";
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

- (MLChainParamBlock4NSObject)observation_forObservingKeyPath{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setObservation:forObservingKeyPath:";
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

- (MLChainParamBlock4NSObject)removeObservation_forObservableKeyPath{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"removeObservation:forObservableKeyPath:";
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

- (MLChainParamBlock4NSObject)observationInfo{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setObservationInfo:";
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

- (MLChainParamBlock4NSObject)willChange_valuesAtIndexes_forKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"willChange:valuesAtIndexes:forKey:";
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

- (MLChainParamBlock4NSObject)didChange_valuesAtIndexes_forKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"didChange:valuesAtIndexes:forKey:";
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

- (MLChainParamBlock4NSObject)willChangeValueForKey_withSetMutation_usingObjects{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"willChangeValueForKey:withSetMutation:usingObjects:";
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

- (MLChainParamBlock4NSObject)didChangeValueForKey_withSetMutation_usingObjects{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"didChangeValueForKey:withSetMutation:usingObjects:";
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

- (MLChainParamBlock4NSObject)willChangeValueForKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"willChangeValueForKey:";
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

- (MLChainParamBlock4NSObject)didChangeValueForKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"didChangeValueForKey:";
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

- (MLChainParamBlock4NSObject)removeObserver_forKeyPath_context{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"removeObserver:forKeyPath:context:";
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

- (MLChainParamBlock4NSObject)addObserver_forKeyPath_options_context{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"addObserver:forKeyPath:options:context:";
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

- (MLChainParamBlock4NSObject)removeObserver_forKeyPath{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"removeObserver:forKeyPath:";
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

- (MLChainParamBlock4NSObject)observeValueForKeyPath_ofObject_change_context{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"observeValueForKeyPath:ofObject:change:context:";
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

- (MLChainParamBlock4NSObject)value_forUndefinedKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
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

- (MLChainParamBlock4NSObject)nilValueForKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setNilValueForKey:";
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

- (MLChainParamBlock4NSObject)value_forKeyPath{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
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

- (MLChainParamBlock4NSObject)value_forKey{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
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

- (MLChainParamBlock4NSObject)valuesForKeysWithDictionary{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"setValuesForKeysWithDictionary:";
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

- (MLChainParamBlock4NSObject)doesNotRecognizeSelector{
__weak typeof(self) weakSelf = self;
return ^ MLChain4NSObject *(id firstObject, ...){
NSString *selName = @"doesNotRecognizeSelector:";
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

//  
//  MLChain4CABasicAnimation.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CAPropertyAnimation.h"



@interface MLChain4CABasicAnimation:MLChain4CAPropertyAnimation
- (CABasicAnimation *)chainObject;
#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> CA_prepareRenderValue     */
- (MLChain4CABasicAnimation *(^)())CA_prepareRenderValue;


#ifndef applyForTime_presentationObject_modelObject                                  
#define applyForTime_presentationObject_modelObject(...)  applyForTime_presentationObject_modelObject(@"applyForTime:presentationObject:modelObject:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   applyForTime: 'd'
  presentationObject: '@'
  modelObject: '@'
     */
- (MLChain4CABasicAnimation *(^)())applyForTime_presentationObject_modelObject;


#ifndef fromValue                                  
#define fromValue(...)  fromValue(@"setFromValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setFromValue: '@'
     */
- (MLChain4CABasicAnimation *(^)())fromValue;


#ifndef byValue                                  
#define byValue(...)  byValue(@"setByValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setByValue: '@'
     */
- (MLChain4CABasicAnimation *(^)())byValue;


#ifndef endAngle                                  
#define endAngle(...)  endAngle(@"setEndAngle:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setEndAngle: 'd'
     */
- (MLChain4CABasicAnimation *(^)())endAngle;


#ifndef roundsToInteger                                  
#define roundsToInteger(...)  roundsToInteger(@"setRoundsToInteger:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setRoundsToInteger: 'B'
     */
- (MLChain4CABasicAnimation *(^)())roundsToInteger;


#ifndef startAngle                                  
#define startAngle(...)  startAngle(@"setStartAngle:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setStartAngle: 'd'
     */
- (MLChain4CABasicAnimation *(^)())startAngle;


#ifndef toValue                                  
#define toValue(...)  toValue(@"setToValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setToValue: '@'
     */
- (MLChain4CABasicAnimation *(^)())toValue;


#ifndef keyPath                                  
#define keyPath(...)  keyPath(@"setKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setKeyPath: '@'
     */
- (MLChain4CABasicAnimation *(^)())keyPath;


#ifndef cumulative                                  
#define cumulative(...)  cumulative(@"setCumulative:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setCumulative: 'B'
     */
- (MLChain4CABasicAnimation *(^)())cumulative;


#ifndef additive                                  
#define additive(...)  additive(@"setAdditive:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAdditive: 'B'
     */
- (MLChain4CABasicAnimation *(^)())additive;


#ifndef valueFunction                                  
#define valueFunction(...)  valueFunction(@"setValueFunction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setValueFunction: '@'
     */
- (MLChain4CABasicAnimation *(^)())valueFunction;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())value_forUndefinedKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4CABasicAnimation *(^)())value_forKeyPath;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())value_forKey;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setEnabled: 'B'
     */
- (MLChain4CABasicAnimation *(^)())enabled;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setDelegate: '@'
     */
- (MLChain4CABasicAnimation *(^)())delegate;


#ifndef CAMLParser_setValue_forKey                                  
#define CAMLParser_setValue_forKey(...)  CAMLParser_setValue_forKey(@"CAMLParser:setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   CAMLParser: '@'
  setValue: '@'
  forKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())CAMLParser_setValue_forKey;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4CABasicAnimation *(^)())encodeWithCAMLWriter;


#ifndef beginTime                                  
#define beginTime(...)  beginTime(@"setBeginTime:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setBeginTime: 'd'
     */
- (MLChain4CABasicAnimation *(^)())beginTime;


#ifndef repeatDuration                                  
#define repeatDuration(...)  repeatDuration(@"setRepeatDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setRepeatDuration: 'd'
     */
- (MLChain4CABasicAnimation *(^)())repeatDuration;


#ifndef fillMode                                  
#define fillMode(...)  fillMode(@"setFillMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setFillMode: '@'
     */
- (MLChain4CABasicAnimation *(^)())fillMode;


#ifndef runActionForKey_object_arguments                                  
#define runActionForKey_object_arguments(...)  runActionForKey_object_arguments(@"runActionForKey:object:arguments:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   runActionForKey: '@'
  object: '@'
  arguments: '@'
     */
- (MLChain4CABasicAnimation *(^)())runActionForKey_object_arguments;


#ifndef defaultDuration                                  
#define defaultDuration(...)  defaultDuration(@"setDefaultDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setDefaultDuration: 'd'
     */
- (MLChain4CABasicAnimation *(^)())defaultDuration;


#ifndef beginTimeMode                                  
#define beginTimeMode(...)  beginTimeMode(@"setBeginTimeMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setBeginTimeMode: '@'
     */
- (MLChain4CABasicAnimation *(^)())beginTimeMode;


#ifndef removedOnCompletion                                  
#define removedOnCompletion(...)  removedOnCompletion(@"setRemovedOnCompletion:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setRemovedOnCompletion: 'B'
     */
- (MLChain4CABasicAnimation *(^)())removedOnCompletion;


#ifndef preferredFramesPerSecond                                  
#define preferredFramesPerSecond(...)  preferredFramesPerSecond(@"setPreferredFramesPerSecond:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setPreferredFramesPerSecond: 'q'
     */
- (MLChain4CABasicAnimation *(^)())preferredFramesPerSecond;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4CABasicAnimation *(^)())encodeWithCoder;


#ifndef duration                                  
#define duration(...)  duration(@"setDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setDuration: 'd'
     */
- (MLChain4CABasicAnimation *(^)())duration;


#ifndef timingFunction                                  
#define timingFunction(...)  timingFunction(@"setTimingFunction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setTimingFunction: '@'
     */
- (MLChain4CABasicAnimation *(^)())timingFunction;


#ifndef frameInterval                                  
#define frameInterval(...)  frameInterval(@"setFrameInterval:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setFrameInterval: 'd'
     */
- (MLChain4CABasicAnimation *(^)())frameInterval;


#ifndef timeOff                                  
#define timeOff(...)  timeOff(@"setTimeOffset:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setTimeOffset: 'd'
     */
- (MLChain4CABasicAnimation *(^)())timeOff;


#ifndef repeatCount                                  
#define repeatCount(...)  repeatCount(@"setRepeatCount:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setRepeatCount: 'f'
     */
- (MLChain4CABasicAnimation *(^)())repeatCount;


#ifndef autoreverses                                  
#define autoreverses(...)  autoreverses(@"setAutoreverses:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAutoreverses: 'B'
     */
- (MLChain4CABasicAnimation *(^)())autoreverses;


#ifndef speed                                  
#define speed(...)  speed(@"setSpeed:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setSpeed: 'f'
     */
- (MLChain4CABasicAnimation *(^)())speed;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4CABasicAnimation *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4CABasicAnimation *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4CABasicAnimation *(^)())featureIdentifier;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4CABasicAnimation *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4CABasicAnimation *(^)())willUpdateFocusToView;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4CABasicAnimation *(^)())didUpdateFocusFromView;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> accessibilityIncrement     */
- (MLChain4CABasicAnimation *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> accessibilityDecrement     */
- (MLChain4CABasicAnimation *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4CABasicAnimation *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4CABasicAnimation *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4CABasicAnimation *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4CABasicAnimation *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4CABasicAnimation *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> awakeFromNib     */
- (MLChain4CABasicAnimation *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4CABasicAnimation *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> releaseOnMainThread     */
- (MLChain4CABasicAnimation *(^)())releaseOnMainThread;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4CABasicAnimation *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   removeObservation: '@'
     */
- (MLChain4CABasicAnimation *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4CABasicAnimation *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> CABasicAnimation                                
SEL-> finishObserving     */
- (MLChain4CABasicAnimation *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CABasicAnimation *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CABasicAnimation *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CABasicAnimation *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4CABasicAnimation *(^)())performSelectorInBackground_withObject;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CABasicAnimation *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4CABasicAnimation *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4CABasicAnimation *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4CABasicAnimation *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4CABasicAnimation *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4CABasicAnimation *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4CABasicAnimation *(^)())observationInfo;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CABasicAnimation *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CABasicAnimation *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())didChangeValueForKey;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4CABasicAnimation *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4CABasicAnimation *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4CABasicAnimation *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4CABasicAnimation *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4CABasicAnimation *(^)())nilValueForKey;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4CABasicAnimation *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CABasicAnimation                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4CABasicAnimation *(^)())doesNotRecognizeSelector;


@end

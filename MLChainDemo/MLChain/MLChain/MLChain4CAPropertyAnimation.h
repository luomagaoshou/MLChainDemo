//  
//  MLChain4CAPropertyAnimation.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2017/01/25.
//  Copyright © 2017年 myCompany. All rights reserved.
//  


#import "MLChain4CAAnimation.h"



@interface MLChain4CAPropertyAnimation:MLChain4CAAnimation
- (CAPropertyAnimation *)chainObject;
#ifndef keyPath                                  
#define keyPath(...)  keyPath(@"setKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setKeyPath: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())keyPath;


#ifndef applyForTime_presentationObject_modelObject                                  
#define applyForTime_presentationObject_modelObject(...)  applyForTime_presentationObject_modelObject(@"applyForTime:presentationObject:modelObject:", (double)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   applyForTime: 'd'
  presentationObject: '@'
  modelObject: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())applyForTime_presentationObject_modelObject;


#ifndef cumulative                                  
#define cumulative(...)  cumulative(@"setCumulative:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setCumulative: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())cumulative;


#ifndef additive                                  
#define additive(...)  additive(@"setAdditive:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAdditive: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())additive;


#ifndef valueFunction                                  
#define valueFunction(...)  valueFunction(@"setValueFunction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setValueFunction: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())valueFunction;


#ifndef value_forUndefinedKey                                  
#define value_forUndefinedKey(...)  value_forUndefinedKey(@"setValue:forUndefinedKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setValue: '@'
  forUndefinedKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())value_forUndefinedKey;


#ifndef value_forKeyPath                                  
#define value_forKeyPath(...)  value_forKeyPath(@"setValue:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setValue: '@'
  forKeyPath: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())value_forKeyPath;


#ifndef value_forKey                                  
#define value_forKey(...)  value_forKey(@"setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setValue: '@'
  forKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())value_forKey;


#ifndef enabled                                  
#define enabled(...)  enabled(@"setEnabled:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setEnabled: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())enabled;


#ifndef delegate                                  
#define delegate(...)  delegate(@"setDelegate:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setDelegate: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())delegate;


#ifndef CAMLParser_setValue_forKey                                  
#define CAMLParser_setValue_forKey(...)  CAMLParser_setValue_forKey(@"CAMLParser:setValue:forKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   CAMLParser: '@'
  setValue: '@'
  forKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())CAMLParser_setValue_forKey;


#ifndef encodeWithCAMLWriter                                  
#define encodeWithCAMLWriter(...)  encodeWithCAMLWriter(@"encodeWithCAMLWriter:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   encodeWithCAMLWriter: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())encodeWithCAMLWriter;


#ifndef beginTime                                  
#define beginTime(...)  beginTime(@"setBeginTime:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setBeginTime: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())beginTime;


#ifndef repeatDuration                                  
#define repeatDuration(...)  repeatDuration(@"setRepeatDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setRepeatDuration: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())repeatDuration;


#ifndef fillMode                                  
#define fillMode(...)  fillMode(@"setFillMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setFillMode: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())fillMode;


#ifndef runActionForKey_object_arguments                                  
#define runActionForKey_object_arguments(...)  runActionForKey_object_arguments(@"runActionForKey:object:arguments:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   runActionForKey: '@'
  object: '@'
  arguments: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())runActionForKey_object_arguments;


#ifndef defaultDuration                                  
#define defaultDuration(...)  defaultDuration(@"setDefaultDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setDefaultDuration: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())defaultDuration;


#ifndef beginTimeMode                                  
#define beginTimeMode(...)  beginTimeMode(@"setBeginTimeMode:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setBeginTimeMode: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())beginTimeMode;


#ifndef removedOnCompletion                                  
#define removedOnCompletion(...)  removedOnCompletion(@"setRemovedOnCompletion:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setRemovedOnCompletion: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())removedOnCompletion;


#ifndef preferredFramesPerSecond                                  
#define preferredFramesPerSecond(...)  preferredFramesPerSecond(@"setPreferredFramesPerSecond:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setPreferredFramesPerSecond: 'q'
     */
- (MLChain4CAPropertyAnimation *(^)())preferredFramesPerSecond;


#ifndef encodeWithCoder                                  
#define encodeWithCoder(...)  encodeWithCoder(@"encodeWithCoder:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   encodeWithCoder: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())encodeWithCoder;


#ifndef duration                                  
#define duration(...)  duration(@"setDuration:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setDuration: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())duration;


#ifndef timingFunction                                  
#define timingFunction(...)  timingFunction(@"setTimingFunction:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setTimingFunction: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())timingFunction;


#ifndef frameInterval                                  
#define frameInterval(...)  frameInterval(@"setFrameInterval:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setFrameInterval: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())frameInterval;


#ifndef timeOff                                  
#define timeOff(...)  timeOff(@"setTimeOffset:", (double)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setTimeOffset: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())timeOff;


#ifndef repeatCount                                  
#define repeatCount(...)  repeatCount(@"setRepeatCount:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setRepeatCount: 'f'
     */
- (MLChain4CAPropertyAnimation *(^)())repeatCount;


#ifndef autoreverses                                  
#define autoreverses(...)  autoreverses(@"setAutoreverses:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAutoreverses: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())autoreverses;


#ifndef speed                                  
#define speed(...)  speed(@"setSpeed:", (float)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setSpeed: 'f'
     */
- (MLChain4CAPropertyAnimation *(^)())speed;


#ifndef setObjectPropertyAllKeyValueNil                              
#define setObjectPropertyAllKeyValueNil(...)  setObjectPropertyAllKeyValueNil(@"setObjectPropertyAllKeyValueNil")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> setObjectPropertyAllKeyValueNil     */
- (MLChain4CAPropertyAnimation *(^)())setObjectPropertyAllKeyValueNil;


#ifndef operationIdentifier                                  
#define operationIdentifier(...)  operationIdentifier(@"setOperationIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setOperationIdentifier: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())operationIdentifier;


#ifndef featureIdentifier                                  
#define featureIdentifier(...)  featureIdentifier(@"setFeatureIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setFeatureIdentifier: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())featureIdentifier;


#ifndef willUpdateFocusInContext_withAnimationCoordinator                                  
#define willUpdateFocusInContext_withAnimationCoordinator(...)  willUpdateFocusInContext_withAnimationCoordinator(@"willUpdateFocusInContext:withAnimationCoordinator:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   willUpdateFocusInContext: '@'
  withAnimationCoordinator: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())willUpdateFocusInContext_withAnimationCoordinator;


#ifndef willUpdateFocusToView                                  
#define willUpdateFocusToView(...)  willUpdateFocusToView(@"willUpdateFocusToView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   willUpdateFocusToView: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())willUpdateFocusToView;


#ifndef didUpdateFocusFromView                                  
#define didUpdateFocusFromView(...)  didUpdateFocusFromView(@"didUpdateFocusFromView:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   didUpdateFocusFromView: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())didUpdateFocusFromView;


#ifndef accessibilityCustomRotors                                  
#define accessibilityCustomRotors(...)  accessibilityCustomRotors(@"setAccessibilityCustomRotors:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityCustomRotors: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityCustomRotors;


#ifndef accessibilityIdentifier                                  
#define accessibilityIdentifier(...)  accessibilityIdentifier(@"setAccessibilityIdentifier:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityIdentifier: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityIdentifier;


#ifndef accessibilitySetIdentification                                  
#define accessibilitySetIdentification(...)  accessibilitySetIdentification(@"accessibilitySetIdentification:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   accessibilitySetIdentification: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilitySetIdentification;


#ifndef accessibilityElements                                  
#define accessibilityElements(...)  accessibilityElements(@"setAccessibilityElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityElements: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityElements;


#ifndef accessibilityIncrement                              
#define accessibilityIncrement(...)  accessibilityIncrement(@"accessibilityIncrement")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> accessibilityIncrement     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityIncrement;


#ifndef accessibilityDecrement                              
#define accessibilityDecrement(...)  accessibilityDecrement(@"accessibilityDecrement")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> accessibilityDecrement     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityDecrement;


#ifndef accessibilityCustomActions                                  
#define accessibilityCustomActions(...)  accessibilityCustomActions(@"setAccessibilityCustomActions:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityCustomActions: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityCustomActions;


#ifndef accessibilityElementDidBecomeFocused                              
#define accessibilityElementDidBecomeFocused(...)  accessibilityElementDidBecomeFocused(@"accessibilityElementDidBecomeFocused")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> accessibilityElementDidBecomeFocused     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityElementDidBecomeFocused;


#ifndef accessibilityElementDidLoseFocus                              
#define accessibilityElementDidLoseFocus(...)  accessibilityElementDidLoseFocus(@"accessibilityElementDidLoseFocus")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> accessibilityElementDidLoseFocus     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityElementDidLoseFocus;


#ifndef accessibilityElementsHidden                                  
#define accessibilityElementsHidden(...)  accessibilityElementsHidden(@"setAccessibilityElementsHidden:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityElementsHidden: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityElementsHidden;


#ifndef accessibilityViewIsModal                                  
#define accessibilityViewIsModal(...)  accessibilityViewIsModal(@"setAccessibilityViewIsModal:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityViewIsModal: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityViewIsModal;


#ifndef accessibilityHint                                  
#define accessibilityHint(...)  accessibilityHint(@"setAccessibilityHint:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityHint: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityHint;


#ifndef accessibilityFrame                                  
#define accessibilityFrame(...)  accessibilityFrame(@"setAccessibilityFrame:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityFrame_             
#define accessibilityFrame_(...)  accessibilityFrame(CGRectMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityFrame: '{'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityFrame;


#ifndef accessibilityPath                                  
#define accessibilityPath(...)  accessibilityPath(@"setAccessibilityPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityPath: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityPath;


#ifndef accessibilityActivationPoint                                  
#define accessibilityActivationPoint(...)  accessibilityActivationPoint(@"setAccessibilityActivationPoint:", __VA_ARGS__)                                  
#endif
#ifndef accessibilityActivationPoint_             
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(CGPointMake(__VA_ARGS__))             
#endif

/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityActivationPoint: '{'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityActivationPoint;


#ifndef accessibilityTraits                                  
#define accessibilityTraits(...)  accessibilityTraits(@"setAccessibilityTraits:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityTraits: 'Q'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityTraits;


#ifndef isAccessibilityElement                                  
#define isAccessibilityElement(...)  isAccessibilityElement(@"setIsAccessibilityElement:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setIsAccessibilityElement: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())isAccessibilityElement;


#ifndef accessibilityContainer                                  
#define accessibilityContainer(...)  accessibilityContainer(@"setAccessibilityContainer:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityContainer: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityContainer;


#ifndef accessibilityLanguage                                  
#define accessibilityLanguage(...)  accessibilityLanguage(@"setAccessibilityLanguage:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityLanguage: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityLanguage;


#ifndef shouldGroupAccessibilityChildren                                  
#define shouldGroupAccessibilityChildren(...)  shouldGroupAccessibilityChildren(@"setShouldGroupAccessibilityChildren:", (int)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setShouldGroupAccessibilityChildren: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())shouldGroupAccessibilityChildren;


#ifndef accessibilityNavigationStyle                                  
#define accessibilityNavigationStyle(...)  accessibilityNavigationStyle(@"setAccessibilityNavigationStyle:", (long long)metamacro_at(0, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityNavigationStyle: 'q'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityNavigationStyle;


#ifndef accessibilityHeaderElements                                  
#define accessibilityHeaderElements(...)  accessibilityHeaderElements(@"setAccessibilityHeaderElements:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityHeaderElements: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityHeaderElements;


#ifndef accessibilityLabel                                  
#define accessibilityLabel(...)  accessibilityLabel(@"setAccessibilityLabel:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityLabel: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityLabel;


#ifndef accessibilityValue                                  
#define accessibilityValue(...)  accessibilityValue(@"setAccessibilityValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setAccessibilityValue: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())accessibilityValue;


#ifndef awakeFromNib                              
#define awakeFromNib(...)  awakeFromNib(@"awakeFromNib")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> awakeFromNib     */
- (MLChain4CAPropertyAnimation *(^)())awakeFromNib;


#ifndef prepareForInterfaceBuilder                              
#define prepareForInterfaceBuilder(...)  prepareForInterfaceBuilder(@"prepareForInterfaceBuilder")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> prepareForInterfaceBuilder     */
- (MLChain4CAPropertyAnimation *(^)())prepareForInterfaceBuilder;


#ifndef releaseOnMainThread                              
#define releaseOnMainThread(...)  releaseOnMainThread(@"releaseOnMainThread")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> releaseOnMainThread     */
- (MLChain4CAPropertyAnimation *(^)())releaseOnMainThread;


#ifndef CA_prepareRenderValue                              
#define CA_prepareRenderValue(...)  CA_prepareRenderValue(@"CA_prepareRenderValue")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> CA_prepareRenderValue     */
- (MLChain4CAPropertyAnimation *(^)())CA_prepareRenderValue;


#ifndef receiveObservedValue                                  
#define receiveObservedValue(...)  receiveObservedValue(@"receiveObservedValue:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   receiveObservedValue: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())receiveObservedValue;


#ifndef removeObservation                                  
#define removeObservation(...)  removeObservation(@"removeObservation:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   removeObservation: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())removeObservation;


#ifndef receiveObservedError                                  
#define receiveObservedError(...)  receiveObservedError(@"receiveObservedError:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   receiveObservedError: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())receiveObservedError;


#ifndef finishObserving                              
#define finishObserving(...)  finishObserving(@"finishObserving")                              
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL-> finishObserving     */
- (MLChain4CAPropertyAnimation *(^)())finishObserving;


#ifndef performSelector_onThread_withObject_waitUntilDone_modes                                  
#define performSelector_onThread_withObject_waitUntilDone_modes(...)  performSelector_onThread_withObject_waitUntilDone_modes(@"performSelector:onThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__), metamacro_at(4, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelector_onThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes                                  
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...)  performSelectorOnMainThread_withObject_waitUntilDone_modes(@"performSelectorOnMainThread:withObject:waitUntilDone:modes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
  modes: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelectorOnMainThread_withObject_waitUntilDone_modes;


#ifndef performSelectorOnMainThread_withObject_waitUntilDone                                  
#define performSelectorOnMainThread_withObject_waitUntilDone(...)  performSelectorOnMainThread_withObject_waitUntilDone(@"performSelectorOnMainThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (int)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelectorOnMainThread: ':'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelectorOnMainThread_withObject_waitUntilDone;


#ifndef performSelectorInBackground_withObject                                  
#define performSelectorInBackground_withObject(...)  performSelectorInBackground_withObject(@"performSelectorInBackground:withObject:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelectorInBackground: ':'
  withObject: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelectorInBackground_withObject;


#ifndef performSelector_onThread_withObject_waitUntilDone                                  
#define performSelector_onThread_withObject_waitUntilDone(...)  performSelector_onThread_withObject_waitUntilDone(@"performSelector:onThread:withObject:waitUntilDone:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__), (int)metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelector: ':'
  onThread: '@'
  withObject: '@'
  waitUntilDone: 'B'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelector_onThread_withObject_waitUntilDone;


#ifndef performSelector_withObject_afterDelay_inModes                                  
#define performSelector_withObject_afterDelay_inModes(...)  performSelector_withObject_afterDelay_inModes(@"performSelector:withObject:afterDelay:inModes:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
  inModes: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelector_withObject_afterDelay_inModes;


#ifndef performSelector_withObject_afterDelay                                  
#define performSelector_withObject_afterDelay(...)  performSelector_withObject_afterDelay(@"performSelector:withObject:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelector: ':'
  withObject: '@'
  afterDelay: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelector_withObject_afterDelay;


#ifndef performSelector_object_afterDelay                                  
#define performSelector_object_afterDelay(...)  performSelector_object_afterDelay(@"performSelector:object:afterDelay:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (double)metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   performSelector: ':'
  object: '@'
  afterDelay: 'd'
     */
- (MLChain4CAPropertyAnimation *(^)())performSelector_object_afterDelay;


#ifndef observation_forObservingKeyPath                                  
#define observation_forObservingKeyPath(...)  observation_forObservingKeyPath(@"setObservation:forObservingKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setObservation: '@'
  forObservingKeyPath: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())observation_forObservingKeyPath;


#ifndef removeObservation_forObservableKeyPath                                  
#define removeObservation_forObservableKeyPath(...)  removeObservation_forObservableKeyPath(@"removeObservation:forObservableKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   removeObservation: '@'
  forObservableKeyPath: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())removeObservation_forObservableKeyPath;


#ifndef observationInfo                                  
#define observationInfo(...)  observationInfo(@"setObservationInfo:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setObservationInfo: '^'
     */
- (MLChain4CAPropertyAnimation *(^)())observationInfo;


#ifndef willChange_valuesAtIndexes_forKey                                  
#define willChange_valuesAtIndexes_forKey(...)  willChange_valuesAtIndexes_forKey(@"willChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   willChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())willChange_valuesAtIndexes_forKey;


#ifndef didChange_valuesAtIndexes_forKey                                  
#define didChange_valuesAtIndexes_forKey(...)  didChange_valuesAtIndexes_forKey(@"didChange:valuesAtIndexes:forKey:", (long long)metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   didChange: 'Q'
  valuesAtIndexes: '@'
  forKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())didChange_valuesAtIndexes_forKey;


#ifndef willChangeValueForKey_withSetMutation_usingObjects                                  
#define willChangeValueForKey_withSetMutation_usingObjects(...)  willChangeValueForKey_withSetMutation_usingObjects(@"willChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   willChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())willChangeValueForKey_withSetMutation_usingObjects;


#ifndef didChangeValueForKey_withSetMutation_usingObjects                                  
#define didChangeValueForKey_withSetMutation_usingObjects(...)  didChangeValueForKey_withSetMutation_usingObjects(@"didChangeValueForKey:withSetMutation:usingObjects:", metamacro_at(0, __VA_ARGS__), (long long)metamacro_at(1, __VA_ARGS__), metamacro_at(2, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   didChangeValueForKey: '@'
  withSetMutation: 'Q'
  usingObjects: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())didChangeValueForKey_withSetMutation_usingObjects;


#ifndef willChangeValueForKey                                  
#define willChangeValueForKey(...)  willChangeValueForKey(@"willChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   willChangeValueForKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())willChangeValueForKey;


#ifndef didChangeValueForKey                                  
#define didChangeValueForKey(...)  didChangeValueForKey(@"didChangeValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   didChangeValueForKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())didChangeValueForKey;


#ifndef removeObserver_forKeyPath_context                                  
#define removeObserver_forKeyPath_context(...)  removeObserver_forKeyPath_context(@"removeObserver:forKeyPath:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
  context: '^'
     */
- (MLChain4CAPropertyAnimation *(^)())removeObserver_forKeyPath_context;


#ifndef addObserver_forKeyPath_options_context                                  
#define addObserver_forKeyPath_options_context(...)  addObserver_forKeyPath_options_context(@"addObserver:forKeyPath:options:context:", metamacro_at(0, __VA_ARGS__), metamacro_at(1, __VA_ARGS__), (long long)metamacro_at(2, __VA_ARGS__), metamacro_at(3, __VA_ARGS__))                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   addObserver: '@'
  forKeyPath: '@'
  options: 'Q'
  context: '^'
     */
- (MLChain4CAPropertyAnimation *(^)())addObserver_forKeyPath_options_context;


#ifndef removeObserver_forKeyPath                                  
#define removeObserver_forKeyPath(...)  removeObserver_forKeyPath(@"removeObserver:forKeyPath:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   removeObserver: '@'
  forKeyPath: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())removeObserver_forKeyPath;


#ifndef observeValueForKeyPath_ofObject_change_context                                  
#define observeValueForKeyPath_ofObject_change_context(...)  observeValueForKeyPath_ofObject_change_context(@"observeValueForKeyPath:ofObject:change:context:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   observeValueForKeyPath: '@'
  ofObject: '@'
  change: '@'
  context: '^'
     */
- (MLChain4CAPropertyAnimation *(^)())observeValueForKeyPath_ofObject_change_context;


#ifndef nilValueForKey                                  
#define nilValueForKey(...)  nilValueForKey(@"setNilValueForKey:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setNilValueForKey: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())nilValueForKey;


#ifndef valuesForKeysWithDictionary                                  
#define valuesForKeysWithDictionary(...)  valuesForKeysWithDictionary(@"setValuesForKeysWithDictionary:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   setValuesForKeysWithDictionary: '@'
     */
- (MLChain4CAPropertyAnimation *(^)())valuesForKeysWithDictionary;


#ifndef doesNotRecognizeSelector                                  
#define doesNotRecognizeSelector(...)  doesNotRecognizeSelector(@"doesNotRecognizeSelector:", __VA_ARGS__)                                  
#endif
/**     ClassName-> CAPropertyAnimation                                
SEL:   doesNotRecognizeSelector: ':'
     */
- (MLChain4CAPropertyAnimation *(^)())doesNotRecognizeSelector;


@end

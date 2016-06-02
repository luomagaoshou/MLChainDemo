//  
//  MLChain4NSObject.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChainMacro.h"
@class MLChain4UITableView;
@class MLChain4UIScrollView;
@class MLChain4UIView;
@class MLChain4UIResponder;
@class MLChain4NSObject;
@class MLChain4CALayer;
@class MLChain4CABasicAnimation;
@class MLChain4CAPropertyAnimation;
@class MLChain4CAAnimation;
@class MLChain4UIButton;
@class MLChain4UIControl;
@class MLChain4UITextField;

ml_chain_block_maker(NSObject);
@interface MLChain4NSObject:NSObject
@property (nonatomic, strong)NSObject *object;
- (instancetype)and;
- (instancetype)with;
- (MLChain4UITableView *)lookUpMakerOfUITableView;
- (MLChain4UIScrollView *)lookUpMakerOfUIScrollView;
- (MLChain4UIView *)lookUpMakerOfUIView;
- (MLChain4UIResponder *)lookUpMakerOfUIResponder;
- (MLChain4NSObject *)lookUpMakerOfNSObject;
- (MLChain4CALayer *)lookUpMakerOfCALayer;
- (MLChain4CABasicAnimation *)lookUpMakerOfCABasicAnimation;
- (MLChain4CAPropertyAnimation *)lookUpMakerOfCAPropertyAnimation;
- (MLChain4CAAnimation *)lookUpMakerOfCAAnimation;
- (MLChain4UIButton *)lookUpMakerOfUIButton;
- (MLChain4UIControl *)lookUpMakerOfUIControl;
- (MLChain4UITextField *)lookUpMakerOfUITextField;

- (MLChainParamBlock4NSObject)objectPropertyAllKeyValueNil;

- (MLChainParamBlock4NSObject)willUpdateFocusInContext_withAnimationCoordinator;

- (MLChainParamBlock4NSObject)willUpdateFocusToView;

- (MLChainParamBlock4NSObject)didUpdateFocusFromView;

- (MLChainParamBlock4NSObject)accessibilityIdentifier;

- (MLChainParamBlock4NSObject)accessibilitySetIdentification;

- (MLChainParamBlock4NSObject)accessibilityElements;

- (MLChainParamBlock4NSObject)accessibilityIncrement;

- (MLChainParamBlock4NSObject)accessibilityDecrement;

- (MLChainParamBlock4NSObject)accessibilityCustomActions;

- (MLChainParamBlock4NSObject)accessibilityElementDidBecomeFocused;

- (MLChainParamBlock4NSObject)accessibilityElementDidLoseFocus;

#ifndef accessibilityElementsHidden
#define accessibilityElementsHidden(...) accessibilityElementsHidden(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityElementsHidden;

#ifndef accessibilityViewIsModal
#define accessibilityViewIsModal(...) accessibilityViewIsModal(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityViewIsModal;

- (MLChainParamBlock4NSObject)accessibilityHint;

#ifndef accessibilityFrame
#define accessibilityFrame(...) accessibilityFrame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef accessibilityFrame_
#define accessibilityFrame_(...)  accessibilityFrame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityFrame;

- (MLChainParamBlock4NSObject)accessibilityPath;

#ifndef accessibilityActivationPoint
#define accessibilityActivationPoint(...) accessibilityActivationPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef accessibilityActivationPoint_
#define accessibilityActivationPoint_(...)  accessibilityActivationPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityActivationPoint;

#ifndef accessibilityTraits
#define accessibilityTraits(...) accessibilityTraits(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityTraits;

#ifndef isAccessibilityElement
#define isAccessibilityElement(...) isAccessibilityElement(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)isAccessibilityElement;

- (MLChainParamBlock4NSObject)accessibilityContainer;

- (MLChainParamBlock4NSObject)accessibilityLanguage;

#ifndef shouldGroupAccessibilityChildren
#define shouldGroupAccessibilityChildren(...) shouldGroupAccessibilityChildren(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)shouldGroupAccessibilityChildren;

#ifndef accessibilityNavigationStyle
#define accessibilityNavigationStyle(...) accessibilityNavigationStyle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)accessibilityNavigationStyle;

- (MLChainParamBlock4NSObject)accessibilityHeaderElements;

- (MLChainParamBlock4NSObject)accessibilityLabel;

- (MLChainParamBlock4NSObject)accessibilityValue;

- (MLChainParamBlock4NSObject)awakeFromNib;

- (MLChainParamBlock4NSObject)prepareForInterfaceBuilder;

- (MLChainParamBlock4NSObject)releaseOnMainThread;

- (MLChainParamBlock4NSObject)encodeWithCAMLWriter;

- (MLChainParamBlock4NSObject)CA_prepareRenderValue;

- (MLChainParamBlock4NSObject)removeObservation;

- (MLChainParamBlock4NSObject)receiveObservedValue;

- (MLChainParamBlock4NSObject)receiveObservedError;

- (MLChainParamBlock4NSObject)finishObserving;

#ifndef performSelector_onThread_withObject_waitUntilDone_modes
#define performSelector_onThread_withObject_waitUntilDone_modes(...) performSelector_onThread_withObject_waitUntilDone_modes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_onThread_withObject_waitUntilDone_modes;

#ifndef performSelectorOnMainThread_withObject_waitUntilDone_modes
#define performSelectorOnMainThread_withObject_waitUntilDone_modes(...) performSelectorOnMainThread_withObject_waitUntilDone_modes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorOnMainThread_withObject_waitUntilDone_modes;

#ifndef performSelectorOnMainThread_withObject_waitUntilDone
#define performSelectorOnMainThread_withObject_waitUntilDone(...) performSelectorOnMainThread_withObject_waitUntilDone(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorOnMainThread_withObject_waitUntilDone;

#ifndef performSelectorInBackground_withObject
#define performSelectorInBackground_withObject(...) performSelectorInBackground_withObject(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelectorInBackground_withObject;

#ifndef performSelector_onThread_withObject_waitUntilDone
#define performSelector_onThread_withObject_waitUntilDone(...) performSelector_onThread_withObject_waitUntilDone(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_onThread_withObject_waitUntilDone;

#ifndef performSelector_withObject_afterDelay_inModes
#define performSelector_withObject_afterDelay_inModes(...) performSelector_withObject_afterDelay_inModes(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_withObject_afterDelay_inModes;

#ifndef performSelector_withObject_afterDelay
#define performSelector_withObject_afterDelay(...) performSelector_withObject_afterDelay(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_withObject_afterDelay;

#ifndef performSelector_object_afterDelay
#define performSelector_object_afterDelay(...) performSelector_object_afterDelay(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)performSelector_object_afterDelay;

- (MLChainParamBlock4NSObject)observation_forObservingKeyPath;

- (MLChainParamBlock4NSObject)removeObservation_forObservableKeyPath;

#ifndef observationInfo
#define observationInfo(...) observationInfo(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)observationInfo;

#ifndef willChange_valuesAtIndexes_forKey
#define willChange_valuesAtIndexes_forKey(...) willChange_valuesAtIndexes_forKey(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)willChange_valuesAtIndexes_forKey;

#ifndef didChange_valuesAtIndexes_forKey
#define didChange_valuesAtIndexes_forKey(...) didChange_valuesAtIndexes_forKey(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)didChange_valuesAtIndexes_forKey;

#ifndef willChangeValueForKey_withSetMutation_usingObjects
#define willChangeValueForKey_withSetMutation_usingObjects(...) willChangeValueForKey_withSetMutation_usingObjects(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)willChangeValueForKey_withSetMutation_usingObjects;

#ifndef didChangeValueForKey_withSetMutation_usingObjects
#define didChangeValueForKey_withSetMutation_usingObjects(...) didChangeValueForKey_withSetMutation_usingObjects(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)didChangeValueForKey_withSetMutation_usingObjects;

- (MLChainParamBlock4NSObject)willChangeValueForKey;

- (MLChainParamBlock4NSObject)didChangeValueForKey;

#ifndef removeObserver_forKeyPath_context
#define removeObserver_forKeyPath_context(...) removeObserver_forKeyPath_context(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)removeObserver_forKeyPath_context;

#ifndef addObserver_forKeyPath_options_context
#define addObserver_forKeyPath_options_context(...) addObserver_forKeyPath_options_context(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)addObserver_forKeyPath_options_context;

- (MLChainParamBlock4NSObject)removeObserver_forKeyPath;

#ifndef observeValueForKeyPath_ofObject_change_context
#define observeValueForKeyPath_ofObject_change_context(...) observeValueForKeyPath_ofObject_change_context(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)observeValueForKeyPath_ofObject_change_context;

- (MLChainParamBlock4NSObject)value_forUndefinedKey;

- (MLChainParamBlock4NSObject)nilValueForKey;

- (MLChainParamBlock4NSObject)value_forKeyPath;

- (MLChainParamBlock4NSObject)value_forKey;

- (MLChainParamBlock4NSObject)valuesForKeysWithDictionary;

#ifndef doesNotRecognizeSelector
#define doesNotRecognizeSelector(...) doesNotRecognizeSelector(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4NSObject)doesNotRecognizeSelector;

@end

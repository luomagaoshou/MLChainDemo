//  
//  MLChain4UIScrollView.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIView.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UIScrollView);
@interface MLChain4UIScrollView:MLChain4UIView
@property (nonatomic, strong)UIScrollView *scrollView;
- (MLChainParamBlock4UIScrollView)nsis_valueOfVariable_didChangeInEngine;

- (MLChainParamBlock4UIScrollView)delegate;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)bounds;

#ifndef userInteractionEnabled
#define userInteractionEnabled(...) userInteractionEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)userInteractionEnabled;

#ifndef showsVerticalScrollIndicator
#define showsVerticalScrollIndicator(...) showsVerticalScrollIndicator(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)showsVerticalScrollIndicator;

- (MLChainParamBlock4UIScrollView)layoutSubviews;

#ifndef showsHorizontalScrollIndicator
#define showsHorizontalScrollIndicator(...) showsHorizontalScrollIndicator(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)showsHorizontalScrollIndicator;

#ifndef contentOff_animated
#define contentOff_animated(...) contentOff_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)contentOff_animated;

#ifndef scrollRectToVisible_animated
#define scrollRectToVisible_animated(...) scrollRectToVisible_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)scrollRectToVisible_animated;

#ifndef scrollEnabled
#define scrollEnabled(...) scrollEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)scrollEnabled;

- (MLChainParamBlock4UIScrollView)touchesBegan_withEvent;

- (MLChainParamBlock4UIScrollView)touchesMoved_withEvent;

- (MLChainParamBlock4UIScrollView)touchesEnded_withEvent;

- (MLChainParamBlock4UIScrollView)touchesCancelled_withEvent;

- (MLChainParamBlock4UIScrollView)encodeRestorableStateWithCoder;

- (MLChainParamBlock4UIScrollView)decodeRestorableStateWithCoder;

#ifndef programmaticScrollEnabled
#define programmaticScrollEnabled(...) programmaticScrollEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)programmaticScrollEnabled;

#ifndef delaysContentTouches
#define delaysContentTouches(...) delaysContentTouches(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)delaysContentTouches;

#ifndef scrollIndicatorIns
#define scrollIndicatorIns(...) scrollIndicatorIns(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef scrollIndicatorIns_
#define scrollIndicatorIns_(...)  scrollIndicatorIns(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)scrollIndicatorIns;

#ifndef contentOff
#define contentOff(...) contentOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentOff_
#define contentOff_(...)  contentOff(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)contentOff;

#ifndef directionalLockEnabled
#define directionalLockEnabled(...) directionalLockEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)directionalLockEnabled;

#ifndef contentSize
#define contentSize(...) contentSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentSize_
#define contentSize_(...)  contentSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)contentSize;

- (MLChainParamBlock4UIScrollView)scrollTestParameters;

- (MLChainParamBlock4UIScrollView)handlePan;

- (MLChainParamBlock4UIScrollView)handlePinch;

- (MLChainParamBlock4UIScrollView)delayed;

- (MLChainParamBlock4UIScrollView)willRotateToInterfaceOrientation;

- (MLChainParamBlock4UIScrollView)willAnimateRotationToInterfaceOrientation;

#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(...) zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(5, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(6, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate;

#ifndef zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force
#define zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(...) zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(3, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(4, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(5, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(6, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(7, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)zoomScale_withAnchorPoint_validatingScrollOff_allowRubberbanding_animated_duration_notifyDelegate_force;

#ifndef zoomScale_animated
#define zoomScale_animated(...) zoomScale_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)zoomScale_animated;

#ifndef contentIn
#define contentIn(...) contentIn(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentIn_
#define contentIn_(...)  contentIn(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)contentIn;

#ifndef scrollingEnabled
#define scrollingEnabled(...) scrollingEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)scrollingEnabled;

#ifndef zoomEnabled
#define zoomEnabled(...) zoomEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)zoomEnabled;

#ifndef pagingEnabled
#define pagingEnabled(...) pagingEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)pagingEnabled;

#ifndef bounces
#define bounces(...) bounces(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)bounces;

#ifndef bouncesHorizontally
#define bouncesHorizontally(...) bouncesHorizontally(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)bouncesHorizontally;

#ifndef bouncesVertically
#define bouncesVertically(...) bouncesVertically(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)bouncesVertically;

#ifndef updateInBottomDuringKeyboardDismiss
#define updateInBottomDuringKeyboardDismiss(...) updateInBottomDuringKeyboardDismiss(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)updateInBottomDuringKeyboardDismiss;

#ifndef alwaysBounceVertical
#define alwaysBounceVertical(...) alwaysBounceVertical(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)alwaysBounceVertical;

#ifndef alwaysBounceHorizontal
#define alwaysBounceHorizontal(...) alwaysBounceHorizontal(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)alwaysBounceHorizontal;

#ifndef indicatorStyle
#define indicatorStyle(...) indicatorStyle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)indicatorStyle;

#ifndef decelerationRate
#define decelerationRate(...) decelerationRate(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)decelerationRate;

#ifndef horizontalScrollDecelerationFactor
#define horizontalScrollDecelerationFactor(...) horizontalScrollDecelerationFactor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)horizontalScrollDecelerationFactor;

#ifndef verticalScrollDecelerationFactor
#define verticalScrollDecelerationFactor(...) verticalScrollDecelerationFactor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)verticalScrollDecelerationFactor;

#ifndef allowsMultipleFingers
#define allowsMultipleFingers(...) allowsMultipleFingers(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)allowsMultipleFingers;

#ifndef tracksImmediatelyWhileDecelerating
#define tracksImmediatelyWhileDecelerating(...) tracksImmediatelyWhileDecelerating(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)tracksImmediatelyWhileDecelerating;

#ifndef preservesCenterDuringRotation
#define preservesCenterDuringRotation(...) preservesCenterDuringRotation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)preservesCenterDuringRotation;

- (MLChainParamBlock4UIScrollView)flashScrollIndicators;

#ifndef showBackgroundShadow
#define showBackgroundShadow(...) showBackgroundShadow(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)showBackgroundShadow;

#ifndef bouncesZoom
#define bouncesZoom(...) bouncesZoom(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)bouncesZoom;

#ifndef canCancelContentTouches
#define canCancelContentTouches(...) canCancelContentTouches(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)canCancelContentTouches;

#ifndef scrollsToTop
#define scrollsToTop(...) scrollsToTop(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)scrollsToTop;

#ifndef minimumZoomScale
#define minimumZoomScale(...) minimumZoomScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)minimumZoomScale;

#ifndef maximumZoomScale
#define maximumZoomScale(...) maximumZoomScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)maximumZoomScale;

#ifndef zoomScale
#define zoomScale(...) zoomScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)zoomScale;

#ifndef zoomToRect_animated
#define zoomToRect_animated(...) zoomToRect_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)zoomToRect_animated;

#ifndef keyboardDismissMode
#define keyboardDismissMode(...) keyboardDismissMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)keyboardDismissMode;

#ifndef animator_stopAnimation_fraction
#define animator_stopAnimation_fraction(...) animator_stopAnimation_fraction(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)animator_stopAnimation_fraction;

#ifndef autoscrollContentOff
#define autoscrollContentOff(...) autoscrollContentOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef autoscrollContentOff_
#define autoscrollContentOff_(...)  autoscrollContentOff(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)autoscrollContentOff;

- (MLChainParamBlock4UIScrollView)encodeWithCoder;

- (MLChainParamBlock4UIScrollView)removeFromSuperview;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIScrollView)frame;

@end

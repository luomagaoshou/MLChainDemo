//  
//  MLChain4UIView.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIResponder.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UIView);
@interface MLChain4UIView:MLChain4UIResponder
@property (nonatomic, strong)UIView *view;
- (MLChainParamBlock4UIView)moveToSuperview;

- (MLChainParamBlock4UIView)nsli_addConstraint;

- (MLChainParamBlock4UIView)nsis_valueOfVariable_didChangeInEngine;

- (MLChainParamBlock4UIView)engine_willBreakConstraint_dueToMutuallyExclusiveConstraints;

- (MLChainParamBlock4UIView)constraintsDidChangeInEngine;

- (MLChainParamBlock4UIView)value_forKey;

#ifndef enabled
#define enabled(...) enabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)enabled;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)bounds;

- (MLChainParamBlock4UIView)addAnimation_forKey;

#ifndef transform
#define transform(...) transform(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef transform_
#define transform_(...)  transform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)transform;

- (MLChainParamBlock4UIView)needsLayout;

- (MLChainParamBlock4UIView)needsDisplay;

#ifndef position
#define position(...) position(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef position_
#define position_(...)  position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)position;

#ifndef needsDisplayInRect
#define needsDisplayInRect(...) needsDisplayInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef needsDisplayInRect_
#define needsDisplayInRect_(...)  needsDisplayInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)needsDisplayInRect;

- (MLChainParamBlock4UIView)layoutIfNeeded;

#ifndef drawLayer_inContext
#define drawLayer_inContext(...) drawLayer_inContext(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)drawLayer_inContext;

- (MLChainParamBlock4UIView)layoutSublayersOfLayer;

#ifndef needsDisplayOnBoundsChange
#define needsDisplayOnBoundsChange(...) needsDisplayOnBoundsChange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)needsDisplayOnBoundsChange;

#ifndef userInteractionEnabled
#define userInteractionEnabled(...) userInteractionEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)userInteractionEnabled;

#ifndef clipsToBounds
#define clipsToBounds(...) clipsToBounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clipsToBounds;

#ifndef alpha
#define alpha(...) alpha(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)alpha;

- (MLChainParamBlock4UIView)didMoveToWindow;

- (MLChainParamBlock4UIView)invalidateIntrinsicContentSize;

- (MLChainParamBlock4UIView)bringSubviewToFront;

- (MLChainParamBlock4UIView)layoutSubviews;

#ifndef contentScaleFactor
#define contentScaleFactor(...) contentScaleFactor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentScaleFactor;

#ifndef insertSubview_atIndex
#define insertSubview_atIndex(...) insertSubview_atIndex(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)insertSubview_atIndex;

#ifndef clipsSubviews
#define clipsSubviews(...) clipsSubviews(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clipsSubviews;

- (MLChainParamBlock4UIView)sendSubviewToBack;

- (MLChainParamBlock4UIView)traitCollectionDidChange;

- (MLChainParamBlock4UIView)insertSubview_below;

- (MLChainParamBlock4UIView)insertSubview_belowSubview;

#ifndef contentMode
#define contentMode(...) contentMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentMode;

- (MLChainParamBlock4UIView)addGestureRecognizer;

- (MLChainParamBlock4UIView)removeGestureRecognizer;

#ifndef semanticContentAttribute
#define semanticContentAttribute(...) semanticContentAttribute(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)semanticContentAttribute;

#ifndef translatesAutoresizingMaskIntoConstraints
#define translatesAutoresizingMaskIntoConstraints(...) translatesAutoresizingMaskIntoConstraints(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)translatesAutoresizingMaskIntoConstraints;

- (MLChainParamBlock4UIView)addConstraints;

- (MLChainParamBlock4UIView)updateUserActivityState;

- (MLChainParamBlock4UIView)restoreUserActivityState;

- (MLChainParamBlock4UIView)needsPreferredFocusedItemUpdate;

- (MLChainParamBlock4UIView)needsFocusUpdate;

#ifndef center
#define center(...) center(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef center_
#define center_(...)  center(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)center;

- (MLChainParamBlock4UIView)layoutBelowIfNeeded;

#ifndef gestureEnded
#define gestureEnded(...) gestureEnded(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gestureEnded;

- (MLChainParamBlock4UIView)updatePreferredFocusedItemIfNeeded;

- (MLChainParamBlock4UIView)updateFocusIfNeeded;

- (MLChainParamBlock4UIView)removeConstraints;

#ifndef clearsContextBeforeDrawing
#define clearsContextBeforeDrawing(...) clearsContextBeforeDrawing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clearsContextBeforeDrawing;

- (MLChainParamBlock4UIView)addLayoutGuide;

#ifndef layoutMarginsFollowReadableWidth
#define layoutMarginsFollowReadableWidth(...) layoutMarginsFollowReadableWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)layoutMarginsFollowReadableWidth;

- (MLChainParamBlock4UIView)previewingSegueTemplateStorage;

- (MLChainParamBlock4UIView)removeAllGestureRecognizers;

- (MLChainParamBlock4UIView)layoutMarginsDidChange;

- (MLChainParamBlock4UIView)forceDisplayIfNeeded;

- (MLChainParamBlock4UIView)interactionTintColor;

- (MLChainParamBlock4UIView)tintColor;

#ifndef _countOfMotionEffectsInSubtree
#define _countOfMotionEffectsInSubtree(...) _countOfMotionEffectsInSubtree(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)_countOfMotionEffectsInSubtree;

- (MLChainParamBlock4UIView)addMotionEffect;

- (MLChainParamBlock4UIView)removeMotionEffect;

#ifndef _countOfFocusedAncestorTrackingViewsInSubtree
#define _countOfFocusedAncestorTrackingViewsInSubtree(...) _countOfFocusedAncestorTrackingViewsInSubtree(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)_countOfFocusedAncestorTrackingViewsInSubtree;

- (MLChainParamBlock4UIView)didUpdateFocusInContext_withAnimationCoordinator;

- (MLChainParamBlock4UIView)willUpdateFocusInContext_withAnimationCoordinator;

- (MLChainParamBlock4UIView)willUpdateFocusToView;

- (MLChainParamBlock4UIView)focusedViewWillChange;

- (MLChainParamBlock4UIView)didUpdateFocusFromView;

- (MLChainParamBlock4UIView)focusedViewDidChange;

- (MLChainParamBlock4UIView)removeConstraint;

- (MLChainParamBlock4UIView)addConstraint;

- (MLChainParamBlock4UIView)removeLayoutGuide;

- (MLChainParamBlock4UIView)tapDelegate;

#ifndef startHeartbeat_inRunLoopMode
#define startHeartbeat_inRunLoopMode(...) startHeartbeat_inRunLoopMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)startHeartbeat_inRunLoopMode;

#ifndef stopHeartbeat
#define stopHeartbeat(...) stopHeartbeat(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)stopHeartbeat;

#ifndef layoutMargins
#define layoutMargins(...) layoutMargins(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef layoutMargins_
#define layoutMargins_(...)  layoutMargins(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)layoutMargins;

#ifndef preservesSuperviewLayoutMargins
#define preservesSuperviewLayoutMargins(...) preservesSuperviewLayoutMargins(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)preservesSuperviewLayoutMargins;

#ifndef tintAdjustmentMode
#define tintAdjustmentMode(...) tintAdjustmentMode(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)tintAdjustmentMode;

- (MLChainParamBlock4UIView)tintColorDidChange;

- (MLChainParamBlock4UIView)interactionTintColorDidChange;

- (MLChainParamBlock4UIView)maskView;

- (MLChainParamBlock4UIView)motionEffects;

#ifndef tag
#define tag(...) tag(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)tag;

#ifndef resizeSubviewsWithOldSize
#define resizeSubviewsWithOldSize(...) resizeSubviewsWithOldSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef resizeSubviewsWithOldSize_
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)resizeSubviewsWithOldSize;

#ifndef resizeWithOldSuperviewSize
#define resizeWithOldSuperviewSize(...) resizeWithOldSuperviewSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef resizeWithOldSuperviewSize_
#define resizeWithOldSuperviewSize_(...)  resizeWithOldSuperviewSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)resizeWithOldSuperviewSize;

#ifndef multipleTouchEnabled
#define multipleTouchEnabled(...) multipleTouchEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)multipleTouchEnabled;

#ifndef exclusiveTouch
#define exclusiveTouch(...) exclusiveTouch(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)exclusiveTouch;

#ifndef frame_forFields
#define frame_forFields(...) frame_forFields(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)frame_forFields;

#ifndef rotationBy
#define rotationBy(...) rotationBy(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)rotationBy;

#ifndef autoresizesSubviews
#define autoresizesSubviews(...) autoresizesSubviews(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)autoresizesSubviews;

- (MLChainParamBlock4UIView)sizeToFit;

#ifndef origin
#define origin(...) origin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef origin_
#define origin_(...)  origin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)origin;

#ifndef viewTraversalMark
#define viewTraversalMark(...) viewTraversalMark(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)viewTraversalMark;

- (MLChainParamBlock4UIView)willMoveToWindow;

- (MLChainParamBlock4UIView)deferredBecomeFirstResponder;

- (MLChainParamBlock4UIView)movedFromSuperview;

- (MLChainParamBlock4UIView)didMoveToSuperview;

#ifndef exchangeSubviewAtIndex_withSubviewAtIndex
#define exchangeSubviewAtIndex_withSubviewAtIndex(...) exchangeSubviewAtIndex_withSubviewAtIndex(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)exchangeSubviewAtIndex_withSubviewAtIndex;

- (MLChainParamBlock4UIView)insertSubview_aboveSubview;

- (MLChainParamBlock4UIView)didAddSubview;

- (MLChainParamBlock4UIView)willMoveToSuperview;

- (MLChainParamBlock4UIView)insertSubview_above;

- (MLChainParamBlock4UIView)movedToSuperview;

- (MLChainParamBlock4UIView)viewWillMoveToSuperview;

- (MLChainParamBlock4UIView)viewDidMoveToSuperview;

- (MLChainParamBlock4UIView)movedFromWindow;

- (MLChainParamBlock4UIView)movedToWindow;

#ifndef clearsContext
#define clearsContext(...) clearsContext(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)clearsContext;

- (MLChainParamBlock4UIView)recursivelyForceDisplayIfNeeded;

#ifndef contentStretch
#define contentStretch(...) contentStretch(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentStretch_
#define contentStretch_(...)  contentStretch(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentStretch;

#ifndef fixedBackgroundPattern
#define fixedBackgroundPattern(...) fixedBackgroundPattern(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)fixedBackgroundPattern;

#ifndef contentsPosition
#define contentsPosition(...) contentsPosition(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentsPosition;

#ifndef skipsSubviewEnumeration
#define skipsSubviewEnumeration(...) skipsSubviewEnumeration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)skipsSubviewEnumeration;

- (MLChainParamBlock4UIView)gestureRecognizers;

#ifndef gesturesEnabled
#define gesturesEnabled(...) gesturesEnabled(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gesturesEnabled;

#ifndef deliversTouchesForGesturesToSuperview
#define deliversTouchesForGesturesToSuperview(...) deliversTouchesForGesturesToSuperview(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)deliversTouchesForGesturesToSuperview;

#ifndef deliversButtonsForGesturesToSuperview
#define deliversButtonsForGesturesToSuperview(...) deliversButtonsForGesturesToSuperview(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)deliversButtonsForGesturesToSuperview;

- (MLChainParamBlock4UIView)animator_stopAnimation;

- (MLChainParamBlock4UIView)animator_startAnimation;

- (MLChainParamBlock4UIView)updateConstraints;

#ifndef gestureStarted
#define gestureStarted(...) gestureStarted(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gestureStarted;

#ifndef gestureChanged
#define gestureChanged(...) gestureChanged(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)gestureChanged;

- (MLChainParamBlock4UIView)needsUpdateConstraints;

#ifndef zoomToScale
#define zoomToScale(...) zoomToScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)zoomToScale;

#ifndef rotateToDegrees
#define rotateToDegrees(...) rotateToDegrees(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)rotateToDegrees;

- (MLChainParamBlock4UIView)gestureDelegate;

#ifndef enabledGestures
#define enabledGestures(...) enabledGestures(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)enabledGestures;

#ifndef value_forGestureAttribute
#define value_forGestureAttribute(...) value_forGestureAttribute(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)value_forGestureAttribute;

#ifndef rotationDegrees_duration
#define rotationDegrees_duration(...) rotationDegrees_duration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)rotationDegrees_duration;

#ifndef reduceWidth
#define reduceWidth(...) reduceWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)reduceWidth;

#ifndef contentCompressionResistancePriority_forAxis
#define contentCompressionResistancePriority_forAxis(...) contentCompressionResistancePriority_forAxis(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentCompressionResistancePriority_forAxis;

#ifndef contentHuggingPriority_forAxis
#define contentHuggingPriority_forAxis(...) contentHuggingPriority_forAxis(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)contentHuggingPriority_forAxis;

- (MLChainParamBlock4UIView)updateConstraintsIfNeeded;

#ifndef drawRect_forViewPrintFormatter
#define drawRect_forViewPrintFormatter(...) drawRect_forViewPrintFormatter(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)drawRect_forViewPrintFormatter;

- (MLChainParamBlock4UIView)exerciseAmbiguityInLayout;

- (MLChainParamBlock4UIView)encodeWithCoder;

#ifndef size
#define size(...) size(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef size_
#define size_(...)  size(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)size;

- (MLChainParamBlock4UIView)backgroundColor;

- (MLChainParamBlock4UIView)removeFromSuperview;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)frame;

#ifndef hidden
#define hidden(...) hidden(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)hidden;

#ifndef opaque
#define opaque(...) opaque(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)opaque;

- (MLChainParamBlock4UIView)addSubview;

#ifndef drawRect
#define drawRect(...) drawRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef drawRect_
#define drawRect_(...)  drawRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)drawRect;

#ifndef frameOrigin
#define frameOrigin(...) frameOrigin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frameOrigin_
#define frameOrigin_(...)  frameOrigin(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)frameOrigin;

- (MLChainParamBlock4UIView)willRemoveSubview;

#ifndef autoresizingMask
#define autoresizingMask(...) autoresizingMask(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)autoresizingMask;

#ifndef charge
#define charge(...) charge(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UIView)charge;

@end

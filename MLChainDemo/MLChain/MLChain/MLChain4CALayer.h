//  
//  MLChain4CALayer.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4NSObject.h"
#import "MLChainMacro.h"

ml_chain_block_maker(CALayer);
@interface MLChain4CALayer:MLChain4NSObject
@property (nonatomic, strong)CALayer *layer;
#ifndef perspectiveDistance
#define perspectiveDistance(...) perspectiveDistance(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)perspectiveDistance;

- (MLChainParamBlock4CALayer)web_disableAllActions;

- (MLChainParamBlock4CALayer)value_forUndefinedKey;

- (MLChainParamBlock4CALayer)value_forKeyPath;

- (MLChainParamBlock4CALayer)style;

- (MLChainParamBlock4CALayer)value_forKey;

- (MLChainParamBlock4CALayer)delegate;

#ifndef insertState_atIndex
#define insertState_atIndex(...) insertState_atIndex(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)insertState_atIndex;

- (MLChainParamBlock4CALayer)addState;

- (MLChainParamBlock4CALayer)removeState;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)bounds;

- (MLChainParamBlock4CALayer)CAMLParser_setValue_forKey;

- (MLChainParamBlock4CALayer)encodeWithCAMLWriter;

- (MLChainParamBlock4CALayer)addAnimation_forKey;

#ifndef beginTime
#define beginTime(...) beginTime(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)beginTime;

- (MLChainParamBlock4CALayer)removeAnimationForKey;

#ifndef repeatDuration
#define repeatDuration(...) repeatDuration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)repeatDuration;

- (MLChainParamBlock4CALayer)fillMode;

#ifndef transform
#define transform(...) transform(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef transform_
#define transform_(...)  transform(ml_chain_MASBoxValue((null)(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)transform;

- (MLChainParamBlock4CALayer)contents;

#ifndef minificationFilterBias
#define minificationFilterBias(...) minificationFilterBias(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)minificationFilterBias;

- (MLChainParamBlock4CALayer)reloadValueForKeyPath;

- (MLChainParamBlock4CALayer)needsLayout;

- (MLChainParamBlock4CALayer)needsDisplay;

- (MLChainParamBlock4CALayer)contentsChanged;

#ifndef layerDidBecomeVisible
#define layerDidBecomeVisible(...) layerDidBecomeVisible(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)layerDidBecomeVisible;

#ifndef position
#define position(...) position(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef position_
#define position_(...)  position(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)position;

#ifndef needsDisplayInRect
#define needsDisplayInRect(...) needsDisplayInRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef needsDisplayInRect_
#define needsDisplayInRect_(...)  needsDisplayInRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)needsDisplayInRect;

- (MLChainParamBlock4CALayer)layoutIfNeeded;

- (MLChainParamBlock4CALayer)displayIfNeeded;

#ifndef renderInContext
#define renderInContext(...) renderInContext(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)renderInContext;

#ifndef drawInContext
#define drawInContext(...) drawInContext(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)drawInContext;

#ifndef sizeRequisition
#define sizeRequisition(...) sizeRequisition(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef sizeRequisition_
#define sizeRequisition_(...)  sizeRequisition(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)sizeRequisition;

- (MLChainParamBlock4CALayer)layoutSublayers;

#ifndef geometryFlipped
#define geometryFlipped(...) geometryFlipped(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)geometryFlipped;

#ifndef maskedCorners
#define maskedCorners(...) maskedCorners(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)maskedCorners;

- (MLChainParamBlock4CALayer)backgroundFilters;

#ifndef flipped
#define flipped(...) flipped(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)flipped;

#ifndef allowsHitTesting
#define allowsHitTesting(...) allowsHitTesting(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)allowsHitTesting;

#ifndef literalContentsCenter
#define literalContentsCenter(...) literalContentsCenter(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)literalContentsCenter;

#ifndef sortsSublayers
#define sortsSublayers(...) sortsSublayers(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)sortsSublayers;

#ifndef invertsShadow
#define invertsShadow(...) invertsShadow(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)invertsShadow;

#ifndef shadowPathIsBounds
#define shadowPathIsBounds(...) shadowPathIsBounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shadowPathIsBounds;

#ifndef contentsOpaque
#define contentsOpaque(...) contentsOpaque(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)contentsOpaque;

#ifndef swapsMaskAndLayer
#define swapsMaskAndLayer(...) swapsMaskAndLayer(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)swapsMaskAndLayer;

#ifndef allowsContentsRectCornerMasking
#define allowsContentsRectCornerMasking(...) allowsContentsRectCornerMasking(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)allowsContentsRectCornerMasking;

#ifndef motionBlurAmount
#define motionBlurAmount(...) motionBlurAmount(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)motionBlurAmount;

#ifndef allowsDisplayCompositing
#define allowsDisplayCompositing(...) allowsDisplayCompositing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)allowsDisplayCompositing;

#ifndef wantsExtendedDynamicRangeContent
#define wantsExtendedDynamicRangeContent(...) wantsExtendedDynamicRangeContent(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)wantsExtendedDynamicRangeContent;

#ifndef backgroundColorPhase
#define backgroundColorPhase(...) backgroundColorPhase(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef backgroundColorPhase_
#define backgroundColorPhase_(...)  backgroundColorPhase(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)backgroundColorPhase;

- (MLChainParamBlock4CALayer)lights;

#ifndef acceptsLights
#define acceptsLights(...) acceptsLights(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)acceptsLights;

#ifndef ambientReflectance
#define ambientReflectance(...) ambientReflectance(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)ambientReflectance;

#ifndef diffuseReflectance
#define diffuseReflectance(...) diffuseReflectance(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)diffuseReflectance;

#ifndef specularReflectance
#define specularReflectance(...) specularReflectance(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)specularReflectance;

#ifndef shininess
#define shininess(...) shininess(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shininess;

#ifndef metallicity
#define metallicity(...) metallicity(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)metallicity;

#ifndef velocityStretch
#define velocityStretch(...) velocityStretch(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)velocityStretch;

#ifndef momentOfInertia
#define momentOfInertia(...) momentOfInertia(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)momentOfInertia;

#ifndef coefficientOfRestitution
#define coefficientOfRestitution(...) coefficientOfRestitution(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)coefficientOfRestitution;

#ifndef needsDisplayOnBoundsChange
#define needsDisplayOnBoundsChange(...) needsDisplayOnBoundsChange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)needsDisplayOnBoundsChange;

#ifndef hitTestsAsOpaque
#define hitTestsAsOpaque(...) hitTestsAsOpaque(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)hitTestsAsOpaque;

#ifndef rasterizationPrefersDisplayCompositing
#define rasterizationPrefersDisplayCompositing(...) rasterizationPrefersDisplayCompositing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)rasterizationPrefersDisplayCompositing;

#ifndef affineTransform
#define affineTransform(...) affineTransform(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef affineTransform_
#define affineTransform_(...)  affineTransform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)affineTransform;

- (MLChainParamBlock4CALayer)layoutBelowIfNeeded;

#ifndef allowsGroupBlending
#define allowsGroupBlending(...) allowsGroupBlending(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)allowsGroupBlending;

- (MLChainParamBlock4CALayer)cornerContents;

#ifndef cornerContentsCenter
#define cornerContentsCenter(...) cornerContentsCenter(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef cornerContentsCenter_
#define cornerContentsCenter_(...)  cornerContentsCenter(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)cornerContentsCenter;

#ifndef shouldRasterize
#define shouldRasterize(...) shouldRasterize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shouldRasterize;

#ifndef clearsContext
#define clearsContext(...) clearsContext(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)clearsContext;

- (MLChainParamBlock4CALayer)clearHasBeenCommitted;

- (MLChainParamBlock4CALayer)removeAllAnimations;

- (MLChainParamBlock4CALayer)invalidateContents;

#ifndef contentsTransform
#define contentsTransform(...) contentsTransform(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentsTransform_
#define contentsTransform_(...)  contentsTransform(ml_chain_MASBoxValue(CGAffineTransformMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)contentsTransform;

- (MLChainParamBlock4CALayer)insertSublayer_below;

#ifndef allowsGroupOpacity
#define allowsGroupOpacity(...) allowsGroupOpacity(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)allowsGroupOpacity;

#ifndef preloadsCache
#define preloadsCache(...) preloadsCache(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)preloadsCache;

#ifndef frozen
#define frozen(...) frozen(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)frozen;

#ifndef shadowPath
#define shadowPath(...) shadowPath(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shadowPath;

#ifndef allowsEdgeAntialiasing
#define allowsEdgeAntialiasing(...) allowsEdgeAntialiasing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)allowsEdgeAntialiasing;

- (MLChainParamBlock4CALayer)meshTransform;

- (MLChainParamBlock4CALayer)behaviors;

- (MLChainParamBlock4CALayer)name;

- (MLChainParamBlock4CALayer)encodeWithCoder;

#ifndef shadowOff
#define shadowOff(...) shadowOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef shadowOff_
#define shadowOff_(...)  shadowOff(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shadowOff;

#ifndef shadowColor
#define shadowColor(...) shadowColor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shadowColor;

- (MLChainParamBlock4CALayer)removeFromSuperlayer;

- (MLChainParamBlock4CALayer)addSublayer;

#ifndef contentsScale
#define contentsScale(...) contentsScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)contentsScale;

#ifndef rasterizationScale
#define rasterizationScale(...) rasterizationScale(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)rasterizationScale;

#ifndef drawsAsynchronously
#define drawsAsynchronously(...) drawsAsynchronously(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)drawsAsynchronously;

#ifndef backgroundColor
#define backgroundColor(...) backgroundColor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)backgroundColor;

#ifndef borderColor
#define borderColor(...) borderColor(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)borderColor;

- (MLChainParamBlock4CALayer)actions;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)frame;

#ifndef mass
#define mass(...) mass(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)mass;

#ifndef duration
#define duration(...) duration(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)duration;

#ifndef contentsCenter
#define contentsCenter(...) contentsCenter(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentsCenter_
#define contentsCenter_(...)  contentsCenter(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)contentsCenter;

- (MLChainParamBlock4CALayer)contentsScaling;

- (MLChainParamBlock4CALayer)display;

#ifndef scrollRectToVisible
#define scrollRectToVisible(...) scrollRectToVisible(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef scrollRectToVisible_
#define scrollRectToVisible_(...)  scrollRectToVisible(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)scrollRectToVisible;

#ifndef canDrawConcurrently
#define canDrawConcurrently(...) canDrawConcurrently(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)canDrawConcurrently;

#ifndef borderWidth
#define borderWidth(...) borderWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)borderWidth;

#ifndef hidden
#define hidden(...) hidden(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)hidden;

#ifndef opaque
#define opaque(...) opaque(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)opaque;

#ifndef insertSublayer_atIndex
#define insertSublayer_atIndex(...) insertSublayer_atIndex(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)insertSublayer_atIndex;

- (MLChainParamBlock4CALayer)insertSublayer_above;

#ifndef edgeAntialiasingMask
#define edgeAntialiasingMask(...) edgeAntialiasingMask(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)edgeAntialiasingMask;

#ifndef needsLayoutOnGeometryChange
#define needsLayoutOnGeometryChange(...) needsLayoutOnGeometryChange(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)needsLayoutOnGeometryChange;

#ifndef acceleratesDrawing
#define acceleratesDrawing(...) acceleratesDrawing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)acceleratesDrawing;

- (MLChainParamBlock4CALayer)contentsFormat;

#ifndef anchorPoint
#define anchorPoint(...) anchorPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef anchorPoint_
#define anchorPoint_(...)  anchorPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)anchorPoint;

#ifndef timeOff
#define timeOff(...) timeOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)timeOff;

#ifndef repeatCount
#define repeatCount(...) repeatCount(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)repeatCount;

#ifndef autoreverses
#define autoreverses(...) autoreverses(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)autoreverses;

- (MLChainParamBlock4CALayer)filters;

#ifndef shadowRadius
#define shadowRadius(...) shadowRadius(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shadowRadius;

#ifndef shadowOpacity
#define shadowOpacity(...) shadowOpacity(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)shadowOpacity;

- (MLChainParamBlock4CALayer)compositingFilter;

- (MLChainParamBlock4CALayer)sublayers;

- (MLChainParamBlock4CALayer)replaceSublayer_with;

- (MLChainParamBlock4CALayer)mask;

#ifndef zPosition
#define zPosition(...) zPosition(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)zPosition;

#ifndef anchorPointZ
#define anchorPointZ(...) anchorPointZ(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)anchorPointZ;

#ifndef sublayerTransform
#define sublayerTransform(...) sublayerTransform(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef sublayerTransform_
#define sublayerTransform_(...)  sublayerTransform(ml_chain_MASBoxValue((null)(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)sublayerTransform;

#ifndef doubleSided
#define doubleSided(...) doubleSided(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)doubleSided;

#ifndef masksToBounds
#define masksToBounds(...) masksToBounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)masksToBounds;

#ifndef contentsRect
#define contentsRect(...) contentsRect(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentsRect_
#define contentsRect_(...)  contentsRect(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)contentsRect;

- (MLChainParamBlock4CALayer)minificationFilter;

- (MLChainParamBlock4CALayer)magnificationFilter;

#ifndef opacity
#define opacity(...) opacity(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)opacity;

#ifndef cornerRadius
#define cornerRadius(...) cornerRadius(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)cornerRadius;

#ifndef scrollPoint
#define scrollPoint(...) scrollPoint(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef scrollPoint_
#define scrollPoint_(...)  scrollPoint(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)scrollPoint;

- (MLChainParamBlock4CALayer)contentsGravity;

#ifndef speed
#define speed(...) speed(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4CALayer)speed;

@end

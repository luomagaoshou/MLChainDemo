//  
//  MLChain4UITableView.h
//  MLChainDemo
//  
//  Created by 赖妙龙 on 2016/06/03.
//  Copyright © 2016年 myCompany. All rights reserved.
//  


#import "MLChain4UIScrollView.h"
#import "MLChainMacro.h"

ml_chain_block_maker(UITableView);
@interface MLChain4UITableView:MLChain4UIScrollView
@property (nonatomic, strong)UITableView *tableView;
- (MLChainParamBlock4UITableView)delegate;

#ifndef bounds
#define bounds(...) bounds(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef bounds_
#define bounds_(...)  bounds(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)bounds;

- (MLChainParamBlock4UITableView)didMoveToWindow;

- (MLChainParamBlock4UITableView)reloadData;

#ifndef rowHeight
#define rowHeight(...) rowHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)rowHeight;

#ifndef showsVerticalScrollIndicator
#define showsVerticalScrollIndicator(...) showsVerticalScrollIndicator(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)showsVerticalScrollIndicator;

- (MLChainParamBlock4UITableView)layoutSubviews;

#ifndef allowsMultipleSelection
#define allowsMultipleSelection(...) allowsMultipleSelection(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)allowsMultipleSelection;

#ifndef scrollViewWillEndDragging_withVelocity_targetContentOffset
#define scrollViewWillEndDragging_withVelocity_targetContentOffset(...) scrollViewWillEndDragging_withVelocity_targetContentOffset(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)scrollViewWillEndDragging_withVelocity_targetContentOffset;

#ifndef scrollViewDidEndDragging_willDecelerate
#define scrollViewDidEndDragging_willDecelerate(...) scrollViewDidEndDragging_willDecelerate(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)scrollViewDidEndDragging_willDecelerate;

- (MLChainParamBlock4UITableView)scrollViewDidEndDecelerating;

#ifndef semanticContentAttribute
#define semanticContentAttribute(...) semanticContentAttribute(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)semanticContentAttribute;

#ifndef showsHorizontalScrollIndicator
#define showsHorizontalScrollIndicator(...) showsHorizontalScrollIndicator(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)showsHorizontalScrollIndicator;

- (MLChainParamBlock4UITableView)touchesBegan_withEvent;

- (MLChainParamBlock4UITableView)touchesMoved_withEvent;

- (MLChainParamBlock4UITableView)touchesEnded_withEvent;

- (MLChainParamBlock4UITableView)touchesCancelled_withEvent;

- (MLChainParamBlock4UITableView)pressesBegan_withEvent;

- (MLChainParamBlock4UITableView)pressesEnded_withEvent;

- (MLChainParamBlock4UITableView)pressesCancelled_withEvent;

- (MLChainParamBlock4UITableView)encodeRestorableStateWithCoder;

- (MLChainParamBlock4UITableView)decodeRestorableStateWithCoder;

- (MLChainParamBlock4UITableView)pressesChanged_withEvent;

- (MLChainParamBlock4UITableView)awakeFromNib;

#ifndef layoutMarginsFollowReadableWidth
#define layoutMarginsFollowReadableWidth(...) layoutMarginsFollowReadableWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)layoutMarginsFollowReadableWidth;

- (MLChainParamBlock4UITableView)layoutMarginsDidChange;

#ifndef layoutMargins
#define layoutMargins(...) layoutMargins(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef layoutMargins_
#define layoutMargins_(...)  layoutMargins(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)layoutMargins;

#ifndef resizeSubviewsWithOldSize
#define resizeSubviewsWithOldSize(...) resizeSubviewsWithOldSize(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef resizeSubviewsWithOldSize_
#define resizeSubviewsWithOldSize_(...)  resizeSubviewsWithOldSize(ml_chain_MASBoxValue(CGSizeMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)resizeSubviewsWithOldSize;

- (MLChainParamBlock4UITableView)willMoveToSuperview;

#ifndef contentOff
#define contentOff(...) contentOff(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentOff_
#define contentOff_(...)  contentOff(ml_chain_MASBoxValue(CGPointMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)contentOff;

#ifndef contentIn
#define contentIn(...) contentIn(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef contentIn_
#define contentIn_(...)  contentIn(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)contentIn;

- (MLChainParamBlock4UITableView)flashScrollIndicators;

- (MLChainParamBlock4UITableView)longPress;

- (MLChainParamBlock4UITableView)sectionBorderColor;

#ifndef separatorStyle
#define separatorStyle(...) separatorStyle(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)separatorStyle;

- (MLChainParamBlock4UITableView)separatorEffect;

- (MLChainParamBlock4UITableView)animateDeletionOfRowWithCell;

#ifndef editing_animated
#define editing_animated(...) editing_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)editing_animated;

#ifndef scrollToRowAtIndexPath_atScrollPosition_animated
#define scrollToRowAtIndexPath_atScrollPosition_animated(...) scrollToRowAtIndexPath_atScrollPosition_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)scrollToRowAtIndexPath_atScrollPosition_animated;

- (MLChainParamBlock4UITableView)sectionIndexColor;

- (MLChainParamBlock4UITableView)sectionIndexTrackingBackgroundColor;

- (MLChainParamBlock4UITableView)separatorColor;

#ifndef cellLayoutMarginsFollowReadableWidth
#define cellLayoutMarginsFollowReadableWidth(...) cellLayoutMarginsFollowReadableWidth(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)cellLayoutMarginsFollowReadableWidth;

#ifndef allowsSelection
#define allowsSelection(...) allowsSelection(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)allowsSelection;

#ifndef tableHeaderViewShouldAutoHide
#define tableHeaderViewShouldAutoHide(...) tableHeaderViewShouldAutoHide(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)tableHeaderViewShouldAutoHide;

- (MLChainParamBlock4UITableView)noteNumberOfRowsChanged;

- (MLChainParamBlock4UITableView)endUpdatesWithContext;

- (MLChainParamBlock4UITableView)beginUpdates;

#ifndef allowsMultipleSelectionDuringEditing
#define allowsMultipleSelectionDuringEditing(...) allowsMultipleSelectionDuringEditing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)allowsMultipleSelectionDuringEditing;

#ifndef selectRowAtIndexPath_animated_scrollPosition
#define selectRowAtIndexPath_animated_scrollPosition(...) selectRowAtIndexPath_animated_scrollPosition(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(2, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)selectRowAtIndexPath_animated_scrollPosition;

#ifndef deselectRowAtIndexPath_animated
#define deselectRowAtIndexPath_animated(...) deselectRowAtIndexPath_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)deselectRowAtIndexPath_animated;

#ifndef unhighlightRowAtIndexPath_animated
#define unhighlightRowAtIndexPath_animated(...) unhighlightRowAtIndexPath_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)unhighlightRowAtIndexPath_animated;

- (MLChainParamBlock4UITableView)backgroundView;

- (MLChainParamBlock4UITableView)currentTouch;

#ifndef separatorIn
#define separatorIn(...) separatorIn(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef separatorIn_
#define separatorIn_(...)  separatorIn(ml_chain_MASBoxValue(UIEdgeInsetsMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)separatorIn;

#ifndef remembersLastFocusedIndexPath
#define remembersLastFocusedIndexPath(...) remembersLastFocusedIndexPath(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)remembersLastFocusedIndexPath;

- (MLChainParamBlock4UITableView)adjustIndexPaths_forMoveOfIndexPath_toIndexPath;

#ifndef countStringInsignificantRowCount
#define countStringInsignificantRowCount(...) countStringInsignificantRowCount(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)countStringInsignificantRowCount;

- (MLChainParamBlock4UITableView)countString;

- (MLChainParamBlock4UITableView)tableHeaderBackgroundColor;

- (MLChainParamBlock4UITableView)multiselectCheckmarkColor;

#ifndef deleteConfirmationIndexPath_animated
#define deleteConfirmationIndexPath_animated(...) deleteConfirmationIndexPath_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)deleteConfirmationIndexPath_animated;

#ifndef estimatedRowHeight
#define estimatedRowHeight(...) estimatedRowHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)estimatedRowHeight;

- (MLChainParamBlock4UITableView)sectionIndexBackgroundColor;

#ifndef sectionHeaderHeight
#define sectionHeaderHeight(...) sectionHeaderHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)sectionHeaderHeight;

#ifndef sectionFooterHeight
#define sectionFooterHeight(...) sectionFooterHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)sectionFooterHeight;

- (MLChainParamBlock4UITableView)reloadSectionIndexTitles;

#ifndef indexHiddenForSearch
#define indexHiddenForSearch(...) indexHiddenForSearch(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)indexHiddenForSearch;

#ifndef indexHidden_animated
#define indexHidden_animated(...) indexHidden_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)indexHidden_animated;

#ifndef overlapsSectionHeaderViews
#define overlapsSectionHeaderViews(...) overlapsSectionHeaderViews(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)overlapsSectionHeaderViews;

#ifndef scrollToNearestSelectedRowAtScrollPosition_animated
#define scrollToNearestSelectedRowAtScrollPosition_animated(...) scrollToNearestSelectedRowAtScrollPosition_animated(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)scrollToNearestSelectedRowAtScrollPosition_animated;

- (MLChainParamBlock4UITableView)endUpdates;

#ifndef insertSections_withRowAnimation
#define insertSections_withRowAnimation(...) insertSections_withRowAnimation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)insertSections_withRowAnimation;

#ifndef deleteSections_withRowAnimation
#define deleteSections_withRowAnimation(...) deleteSections_withRowAnimation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)deleteSections_withRowAnimation;

#ifndef reloadSections_withRowAnimation
#define reloadSections_withRowAnimation(...) reloadSections_withRowAnimation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)reloadSections_withRowAnimation;

#ifndef moveSection_toSection
#define moveSection_toSection(...) moveSection_toSection(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)moveSection_toSection;

#ifndef insertRowsAtIndexPaths_withRowAnimation
#define insertRowsAtIndexPaths_withRowAnimation(...) insertRowsAtIndexPaths_withRowAnimation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)insertRowsAtIndexPaths_withRowAnimation;

#ifndef deleteRowsAtIndexPaths_withRowAnimation
#define deleteRowsAtIndexPaths_withRowAnimation(...) deleteRowsAtIndexPaths_withRowAnimation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)deleteRowsAtIndexPaths_withRowAnimation;

#ifndef reloadRowsAtIndexPaths_withRowAnimation
#define reloadRowsAtIndexPaths_withRowAnimation(...) reloadRowsAtIndexPaths_withRowAnimation(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)reloadRowsAtIndexPaths_withRowAnimation;

- (MLChainParamBlock4UITableView)moveRowAtIndexPath_toIndexPath;

#ifndef allowsSelectionDuringEditing
#define allowsSelectionDuringEditing(...) allowsSelectionDuringEditing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)allowsSelectionDuringEditing;

#ifndef showsSelectionImmediatelyOnTouchBegin
#define showsSelectionImmediatelyOnTouchBegin(...) showsSelectionImmediatelyOnTouchBegin(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)showsSelectionImmediatelyOnTouchBegin;

- (MLChainParamBlock4UITableView)separatorTopShadowColor;

- (MLChainParamBlock4UITableView)separatorBottomShadowColor;

#ifndef usesVariableMargins
#define usesVariableMargins(...) usesVariableMargins(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)usesVariableMargins;

- (MLChainParamBlock4UITableView)tableHeaderView;

- (MLChainParamBlock4UITableView)tableFooterView;

#ifndef editing
#define editing(...) editing(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)editing;

- (MLChainParamBlock4UITableView)registerNib_forCellReuseIdentifier;

- (MLChainParamBlock4UITableView)registerNib_forHeaderFooterViewReuseIdentifier;

#ifndef registerClass_forCellReuseIdentifier
#define registerClass_forCellReuseIdentifier(...) registerClass_forCellReuseIdentifier(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)registerClass_forCellReuseIdentifier;

#ifndef registerClass_forHeaderFooterViewReuseIdentifier
#define registerClass_forHeaderFooterViewReuseIdentifier(...) registerClass_forHeaderFooterViewReuseIdentifier(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)), ml_chain_MASBoxValue(metamacro_at(1, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)registerClass_forHeaderFooterViewReuseIdentifier;

#ifndef estimatedSectionHeaderHeight
#define estimatedSectionHeaderHeight(...) estimatedSectionHeaderHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)estimatedSectionHeaderHeight;

#ifndef estimatedSectionFooterHeight
#define estimatedSectionFooterHeight(...) estimatedSectionFooterHeight(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)estimatedSectionFooterHeight;

#ifndef sectionIndexMinimumDisplayRowCount
#define sectionIndexMinimumDisplayRowCount(...) sectionIndexMinimumDisplayRowCount(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)sectionIndexMinimumDisplayRowCount;

- (MLChainParamBlock4UITableView)encodeWithCoder;

- (MLChainParamBlock4UITableView)backgroundColor;

#ifndef frame
#define frame(...) frame(ml_chain_MASBoxValue(metamacro_at(0, __VA_ARGS__)))
#endif
#ifndef frame_
#define frame_(...)  frame(ml_chain_MASBoxValue(CGRectMake(__VA_ARGS__)))
#endif
- (MLChainParamBlock4UITableView)frame;

- (MLChainParamBlock4UITableView)dataSource;

@end

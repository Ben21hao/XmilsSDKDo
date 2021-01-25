//
//  SceneAdSdkSuspendCoinView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/9/4.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkRewardExcitationModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkSuspendCoinView : UIView

/**
 *  点击金币悬浮控件
 */
@property (nonatomic, copy) void (^clickGoldCoinBlock)(SceneAdSdkRewardExcitationModel *model);

/** model */
@property (nonatomic, strong) SceneAdSdkRewardExcitationModel * model;

/**
 显示金币视图
 */
-(void)showCoinAnimation;

/**
 隐藏金币视图
 */
-(void)hideCoinAnimation;

/**
 滑动动画
 */
- (void)doSliderAnimation;

@end

NS_ASSUME_NONNULL_END

//
//  SceneAdSdkWheelTaskRewardVC.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/18.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 抽奖次数达到后奖励弹窗视图类
 UI地址：https://lanhuapp.com//web/#/item/project/board?pid=088243a0-e627-4da6-84ae-e1eae7eadb76
 */
@interface SceneAdSdkWheelTaskRewardVC : UIViewController

/**
 *  确定回调
 */
@property (nonatomic, copy) void (^click_confirm)(void);

/**
 *  关闭回调
 */
@property (nonatomic, copy) void (^click_close)(void);

/**
 显示弹窗
 调用 [[SceneAdSdkWheelTaskRewardVC new] showWithCount:300];

 @param drawCount 抽奖次数
 @param rewardNum 奖励数量
 */
- (void)showWithCount:(NSInteger)drawCount rewardNum:(NSInteger)rewardNum;

@end

NS_ASSUME_NONNULL_END

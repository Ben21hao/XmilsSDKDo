//
//  SceneAdSdkAccountRewardDialog.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/25.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkGeneralDialogModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkAccountRewardDialog : UIViewController

/**
 model 调用方式如下
 
 SceneAdSdkAccountRewardDialog * vc = [SceneAdSdkAccountRewardDialog new];
 SceneAdSdkGeneralDialogModel *model = [[SceneAdSdkGeneralDialogModel alloc] init];
 [model setReward:321]; // 必须字段
 [model setFlowPosition:@"17"]; // 必须字段
 [model setCountDownSec:100]; // 必须字段
 vc.model = model;
 [self presentViewController:vc animated:YES completion:nil];
 
 */
@property (nonatomic , strong) SceneAdSdkGeneralDialogModel * model;

/**
 点击更多赚钱任务回调
 */
@property (nonatomic, copy) void (^clickMore)(void);

@end

NS_ASSUME_NONNULL_END

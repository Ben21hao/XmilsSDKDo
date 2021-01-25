//
//  SceneAdSdkZKRewardView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/10/14.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkZKDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkZKRewardView : UIViewController

/** SceneAdSdkZKDataModel */
@property (nonatomic, strong) SceneAdSdkZKDataModel * zkModel;

//关闭广告
@property (nonatomic, copy) void (^ _Nullable adDidCloseBlock)(void);
// 2019.09.03
/**
 激励完成
 @param rewardResult 激励结果
 */
@property (nonatomic, copy) void(^ _Nullable adRewardFinshBlock)(BOOL rewardResult);

@end

NS_ASSUME_NONNULL_END

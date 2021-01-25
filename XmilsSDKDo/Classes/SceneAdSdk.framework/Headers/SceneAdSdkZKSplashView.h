//
//  SceneAdSdkZKSplashView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/10/14.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkZKDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkZKSplashView : UIView

/**
 * SceneAdSdkZKDataModel
 */
@property (nonatomic, strong) SceneAdSdkZKDataModel * zkModel;

/**
* 关闭广告
*/
@property (nonatomic, copy) void (^ _Nullable adDidCloseBlock)(void);

// 2019.10.12 新增
/**
 点击广告后广告详情页关闭
 */
@property (nonatomic, copy) void(^ _Nullable adDetailCloseAdBlock)(void);

@end

NS_ASSUME_NONNULL_END

//
//  SceneAdSdkCashBeanDialog.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/7/22.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkCashBeanModel.h"


NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkCashBeanDialog : UIViewController

/**
 *  点击关闭回调
 */
@property (nonatomic, copy) void (^clickClose)(void);
/**
 *  点击立即兑换
 */
@property (nonatomic, copy) void (^clickExchange)(void);

/**
 * 传递进来的数据
 */

@property (nonatomic , strong) SceneAdSdkCashBeanModel *model;

@end

NS_ASSUME_NONNULL_END

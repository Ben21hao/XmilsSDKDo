//
//  SceneAdSdkGeneralDialog2.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/9/18.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <SceneAdSdk/SceneAdSdk.h>
#import <SceneAdSdk/SceneAdSdkBaseDialogVC.h>
#import "SceneAdSdkGeneralDialogModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkGeneralDialog2 : SceneAdSdkBaseDialogVC

/**
 model
 */
@property (nonatomic , strong) SceneAdSdkGeneralDialogModel * model;
/**
 页面来源
 */
@property (nonatomic, copy) NSString * fromPage;
/**
 *  关闭回调
 */
@property (nonatomic, copy) void (^closeCallback)(void);
/**
 *  点击领取礼包回调
 */
@property (nonatomic, copy) void (^click_getGift)(void);

@end

NS_ASSUME_NONNULL_END

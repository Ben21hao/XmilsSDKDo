//
//  SceneAdSdkGeneralDialog.h
//  wheel
//
//  Created by caizifeng on 2019/5/19.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkGeneralDialogModel.h"

#define SceneAdSdk_GeneralDialog_viewDidDisappear_Status @"SceneAdSdk_GeneralDialog_viewDidDisappear_Status"

typedef void(^CloseCallback)(void);

@interface SceneAdSdkGeneralDialog : UIViewController
/**
 model
 */
@property (nonatomic , strong) SceneAdSdkGeneralDialogModel * model;
/**
 页面来源
 */
@property (nonatomic, copy) NSString * fromPage;
/**
 关闭回调
 */
@property (nonatomic , copy) CloseCallback closeCallback;
/**
 *  点击领取礼包回调
 */
@property (nonatomic, copy) void (^click_getGift)(void);

@end

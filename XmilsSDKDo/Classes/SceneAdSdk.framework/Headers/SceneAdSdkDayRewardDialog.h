//
//  SceneAdSdkDayRewardDialog.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/9/4.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import "SceneAdSdkBaseDialogVC.h"
#import "SceneAdSdkRewardExcitationModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkDayRewardDialog : SceneAdSdkBaseDialogVC

/** model */
@property (nonatomic, strong) SceneAdSdkRewardExcitationModel * model;

/** 是否为退出时才弹窗 */
@property (nonatomic, assign) BOOL isExitDialog;

/** 弹出类型, 是否自动弹窗 */
@property (nonatomic, assign) BOOL isAutoPop;

/**
 *  左按钮点击事件
 */
@property (nonatomic, copy) void (^click_left_block)(void);

@end

NS_ASSUME_NONNULL_END

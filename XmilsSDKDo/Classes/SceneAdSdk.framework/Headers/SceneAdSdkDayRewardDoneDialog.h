//
//  SceneAdSdkDayRewardDoneDialog.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/9/5.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import "SceneAdSdkBaseDialogVC.h"
#import "SceneAdSdkRewardExcitationModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkDayRewardDoneDialog : SceneAdSdkBaseDialogVC

/** model */
@property (nonatomic, strong) SceneAdSdkRewardExcitationModel * model;
/** 弹出类型, 是否自动弹窗 */
@property (nonatomic, assign) BOOL isAutoPop;

@end

NS_ASSUME_NONNULL_END

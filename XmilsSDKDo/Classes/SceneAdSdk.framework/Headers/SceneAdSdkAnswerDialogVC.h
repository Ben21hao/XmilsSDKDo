//
//  SceneAdSdkAnswerDialogViewController.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/25.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkAnswerDialogModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkAnswerDialogVC : UIViewController

@property (nonatomic , strong) SceneAdSdkAnswerDialogModel *model;

/**
 *  点击继续按钮回调
 */
@property (nonatomic, copy) void (^click_moreBtn)(void);

@end

NS_ASSUME_NONNULL_END

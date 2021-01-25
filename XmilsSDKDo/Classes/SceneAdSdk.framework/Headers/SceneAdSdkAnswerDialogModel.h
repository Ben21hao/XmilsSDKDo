//
//  SceneAdSdkAnswerDialogModel.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/26.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkAnswerDialogModel : NSObject
@property (nonatomic , assign) BOOL hasSuccess;      //是否是正确的弹窗     true正确弹窗  false错误弹窗
@property (nonatomic , assign) BOOL hasShowCloseAd;  //是否显示关闭弹窗广告(成功弹窗才有效)   true显示  fasle不显示
@property (nonatomic , assign) NSInteger reward;     //获得的奖励
@property (nonatomic , assign) NSInteger multiple;   //翻倍倍数 2019.8.27新增
@end

NS_ASSUME_NONNULL_END

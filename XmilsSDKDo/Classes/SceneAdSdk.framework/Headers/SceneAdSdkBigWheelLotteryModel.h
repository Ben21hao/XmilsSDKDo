//
//  SceneAdSdkBigWheelLotteryModel.h
//  wheel
//  大转盘点击抽奖的Model
//  Created by caizifeng on 2019/5/16.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdSdkBigWheelModel.h"
#import "SceneAdSdkRewardExcitationModel.h"

@interface SceneAdSdkBigWheelLotteryModel : NSObject
@property (nonatomic , strong) SceneAdSdkBigWheelModel *indexResponse;
@property (nonatomic , strong) SceneAdSdkBigWheelConfigModel *config;
/** 2019.09.05 激励模块 */
@property (nonatomic, strong) SceneAdSdkRewardExcitationModel * excitation;
@property (nonatomic , assign) int isDouble;

+(SceneAdSdkBigWheelLotteryModel *)modelWithDic:(NSDictionary *)dic;
@end

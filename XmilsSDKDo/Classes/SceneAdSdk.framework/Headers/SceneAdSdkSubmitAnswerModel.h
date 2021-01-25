//
//  SceneAdSdkSubmitAnswerModel.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/27.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MJExtension.h>
#import "SceneAdSdkAnswerModel.h"
#import "SceneAdSdkRewardExcitationModel.h"

@interface SceneAdSdkSubmitAnswerModel : NSObject

@property (nonatomic , assign) BOOL answerStatus;            //回答是否正确
@property (nonatomic , assign) NSInteger awardCoin;          //奖励金币
@property (nonatomic , assign) NSInteger multiple;            //翻倍倍数 2019.8.27新增
@property (nonatomic , assign) BOOL doubleQualification;     //翻倍资格
@property (nonatomic , assign) BOOL haveUnreceivedExtReward; //是否有未领取额外奖励
@property (nonatomic , assign) NSInteger nextExtRewardSurplusAnswerTimes;   //距离领取下次额外奖励需要的阅读次数
@property (nonatomic , strong) IdiomSubject *nextIdiomSubject;
@property (nonatomic , strong) UserAnswerInfo *userAnswerInfo;
@property (nonatomic, strong) SceneAdSdkRewardExcitationModel *excitation;  // 激励模块

@end

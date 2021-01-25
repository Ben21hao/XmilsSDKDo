//
//  SceneAdSdkExtRewardListModel.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/27.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserExtReward : NSObject
@property (nonatomic , assign) NSInteger answerTimesLimit;  //答题次数限制
@property (nonatomic , assign) NSInteger lessAnswerTimes;   //距离领取奖励答题次数
@property (nonatomic , assign) NSInteger level;             //level 额外奖励等级
@property (nonatomic , assign) NSInteger status;            //0:未完成 1:已完成，2:已领取
@property (nonatomic , assign) NSInteger awardCoin;         //奖励金币
@end

@interface SceneAdSdkExtRewardListModel : NSObject
@property (nonatomic , assign) NSInteger userAnswerRightTimes;         //用户成语答题正确次数 
@property (nonatomic , strong)NSMutableArray<UserExtReward *> *userExtRewardList;

@end

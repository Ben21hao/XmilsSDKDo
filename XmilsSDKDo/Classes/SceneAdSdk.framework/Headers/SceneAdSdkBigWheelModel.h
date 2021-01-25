//
//  SceneAdSdkBigWheelModel.h
//  wheel
//  大转盘首页的Model
//  Created by caizifeng on 2019/5/16.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdSdkRewardExcitationModel.h"

@interface SceneAdSdkBigWheelConfigModel : NSObject
    @property (nonatomic , assign) int configId;
    @property (nonatomic , copy) NSString *prdId;
    @property (nonatomic , copy) NSString *title;
    @property (nonatomic , copy) NSString *subtitle;
    @property (nonatomic , copy) NSString *describe;
    @property (nonatomic , copy) NSString *img;
    @property (nonatomic , assign) int position;
    @property (nonatomic , assign) int rate;
    @property (nonatomic , assign) int rewardType;
    @property (nonatomic , copy) NSString *reward;
    @property (nonatomic , assign) int status;
    @property (nonatomic , copy) NSString *operator;
    @property (nonatomic , assign) long ctime;
    @property (nonatomic , assign) long utime;
    @property (nonatomic , assign) long  rewardCode;
    @property (nonatomic , assign) NSInteger coinDetailId;
    @property (nonatomic , assign) int coinDetailType;
    @property (nonatomic , copy) NSString *multiple;
@end
@interface SceneAdSdkBigWheelExtConfigModel : NSObject 
    @property (nonatomic , assign) int extConfigId;
    @property (nonatomic , copy) NSString *prdId;
    @property (nonatomic , copy) NSString *title;
    @property (nonatomic , copy) NSString *subtitle;
    @property (nonatomic , copy) NSString *describe;
    @property (nonatomic , copy) NSString *img;
    @property (nonatomic , copy) NSString *imgOpen;
    @property (nonatomic , assign) int position;
    @property (nonatomic , assign) int lessLotteryCount;
    @property (nonatomic , assign) int rewardType;
    @property (nonatomic , copy) NSString *reward;
    @property (nonatomic , assign) int status;
    @property (nonatomic , copy) NSString *operator;
    @property (nonatomic , assign) long ctime;
    @property (nonatomic , assign) long utime;
    @property (nonatomic , assign) long  rewardCode;
@end

@interface SceneAdSdkBigWheelModel : NSObject
    @property (nonatomic , copy)  NSString *title;
    @property (nonatomic , assign) int remainCount;
    @property (nonatomic , assign) int useCount;
    @property (nonatomic , assign) int bigwheelReachCount;
    @property (nonatomic , assign) int bigwheelReachCount2;
    @property (nonatomic , assign) int bigwheelCoinCount;
    @property (nonatomic , copy) NSArray <SceneAdSdkBigWheelConfigModel *>*configs;
    @property (nonatomic , copy) NSArray <SceneAdSdkBigWheelExtConfigModel*>*extConfigs;
    @property (nonatomic , assign) NSInteger ruleType; //规则类型：1-不分场次类型(保持原有逻辑)，2-区分场次类型
    @property (nonatomic , assign) NSInteger countDownSecond; //大转盘距离下一场倒计时（秒
    @property (nonatomic , copy) NSString *ruleDetails;     //规则详情说明
    /** 2019.09.05 激励模块 */
    @property (nonatomic, strong) SceneAdSdkRewardExcitationModel * excitation;

+(SceneAdSdkBigWheelModel *)modelWithDic:(NSDictionary *)dic;

@end


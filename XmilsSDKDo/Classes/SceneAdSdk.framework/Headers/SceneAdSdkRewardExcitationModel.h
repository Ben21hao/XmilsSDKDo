//
//  SceneAdSdkRewardExcitationModel.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/9/6.
//  Copyright © 2019 dengsir. All rights reserved.
//

//模块激励 {
//    award (integer, optional): 本次奖励(触发游戏之后返回 如：点击大转盘) ,
//    exitPopupSwitch (integer, optional): 退出是否弹窗 1-是、0-否 ,
//    moduleName (string, optional): 模块名称 ,
//    recommendModuleBanner (string, optional): 推荐模块Banner(usableAwardCount==0返回) ,
//    recommendModuleName (string, optional): 推荐模块名称(usableAwardCount==0返回) ,
//    recommendProtocol (string, optional): 推荐模块跳转协议(usableAwardCount==0返回) ,
//    todayAward (integer, optional): 今日已获得奖励 ,
//    totalAward (integer, optional): 今日可获得奖励 ,
//    totalAwardCount (integer, optional): 今日可获得奖励次数 ,
//    usableAward (integer, optional): 剩余奖励金豆 ,
//    usableAwardCount (integer, optional): 剩余奖励次数 ,
//    userCoin (integer, optional): 用户现金豆(触发游戏之后返回 如：点击大转盘)
//}

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkRewardExcitationModel : NSObject

@property (nonatomic, copy) NSString *award;

@property (nonatomic, assign) NSInteger usableAward;

@property (nonatomic, assign) NSInteger usableAwardCount;

@property (nonatomic, copy) NSString *recommendModuleName;

@property (nonatomic, assign) NSInteger totalAward;

@property (nonatomic, assign) NSInteger exitPopupSwitch;

@property (nonatomic, copy) NSString *moduleName;

@property (nonatomic, assign) NSInteger todayAward;

@property (nonatomic, copy) NSString *recommendModuleBanner;

@property (nonatomic, assign) NSInteger totalAwardCount;

@property (nonatomic, copy) NSString *recommendProtocol;

@property (nonatomic, copy) NSString *userCoin;

@end

NS_ASSUME_NONNULL_END

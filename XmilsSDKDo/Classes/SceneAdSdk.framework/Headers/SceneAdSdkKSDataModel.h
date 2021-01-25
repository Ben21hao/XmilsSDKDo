//
//  SceneAdSdkKSDataModel.h
//  SceneAdSdk
//
//  Created by xmiles on 2021/1/14.
//  Copyright © 2021 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdConfigModel.h"
#import <KSAdSDK/KSAdSDK.h>
#import <KSAdSDK/KSCUContentPage.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkKSDataModel : NSObject

/**
 *当前加载的广告配置
 */
@property (nonatomic, strong) SceneAdRuleConfig *adRuleConfig;

/**
 *激励视频
 */
@property (nonatomic, strong) KSRewardedVideoAd *rewardedVideoAd;

/**
 *全屏视频
 */
@property (nonatomic, strong) KSFullscreenVideoAd *fullscreenVideoAd;

/**
 *draw信息流
 */
@property (nonatomic, strong) KSDrawAdsManager *drawAdsManager;
@property (nonatomic, strong) KSDrawAd *drawAd;

/**
 *信息流自渲染
 */
@property (nonatomic, strong) KSNativeAd *nativeAd;

/**
 *信息流模板
 */
@property (nonatomic, strong) KSFeedAdsManager *feedAdsManager;
@property (nonatomic, strong) KSFeedAd *feedAd;

/**
 *快手短视频
 */
@property (nonatomic, strong) KSCUContentPage *contentEcology;


@end

NS_ASSUME_NONNULL_END

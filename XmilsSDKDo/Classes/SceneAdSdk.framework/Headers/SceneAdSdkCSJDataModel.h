//
//  SceneAdSdkCSJDataModel.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/7/15.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkCSJDataModel : NSObject

// 1 - 插屏
@property(nonatomic, strong) BUInterstitialAd *interstitialAd;
// 2 - 激励广告
@property(nonatomic, strong) BURewardedVideoAd *rewardedVideoAd;
// 5 - 全屏视频
@property(nonatomic, strong) BUFullscreenVideoAd *fullscreenVideoAd;
// 9 - banner广告
@property(nonatomic, strong) BUBannerAdView *bannerView;
// 20 - 模板渲染banner
@property(nonatomic, strong) BUNativeExpressBannerView *expressBannerView;
// 7 - 开屏广告视图
@property(nonatomic, strong) BUSplashAdView *splashView;
/** 个性化插屏广告 */
@property(nonatomic, strong) BUNativeExpressInterstitialAd *expressInterstitialAd;
// 4 - 原生广告数据
@property(nonatomic, strong) BUNativeAd *nativeAd;
// 原生广告数据管理器
@property(nonatomic, strong) BUNativeAdsManager *nativeAdsManager;
// 当前加载的广告配置
@property(nonatomic, strong) SceneAdRuleConfig *adRuleConfig;
// 信息流加载完成后得到的数据
@property(nonatomic, strong) NSArray<BUNativeAd *> *nativeAdDataArray;
// 2019.10.16 个性化Draw视频
/** 个性化Draw视频  */
@property(nonatomic, strong) BUNativeExpressAdManager *nativeExpressAdManager;
/** 个性化Draw视图 */
@property(nonatomic, strong) BUNativeExpressAdView *nativeExpressView;

@end

NS_ASSUME_NONNULL_END

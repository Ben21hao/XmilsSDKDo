//
//  SceneAdSdkGDTDataModel.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/8/22.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdConfigModel.h"
#import "GDTSplashAd.h"
#import "GDTUnifiedBannerView.h"
#import "GDTUnifiedInterstitialAd.h"
#import "GDTNativeExpressAd.h"
#import "GDTNativeExpressAdView.h"
#import "GDTUnifiedNativeAd.h"
#import "GDTRewardVideoAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkGDTDataModel : NSObject

/**
 当前加载的广告配置
 */
@property (nonatomic, strong) SceneAdRuleConfig *adRuleConfig;

/**
 开屏广告model
 */
@property (strong, nonatomic) GDTSplashAd *splash;

/**
 banner广告对象
 */
@property (nonatomic, strong) GDTUnifiedBannerView *bannerView;
/**
 插屏2.0
 */
@property (nonatomic, strong) GDTUnifiedInterstitialAd *interstitial;

/**
 原生模板广告数组
 */
@property (nonatomic, strong) NSMutableArray *expressAdViews;
/**
 原生模板广告
 */
@property (nonatomic, strong) GDTNativeExpressAd *nativeExpressAd;
/**
 自渲染2.0
 */
@property (nonatomic, strong) GDTUnifiedNativeAd *unifiedNativeAd;
/**
 自渲染数据数组
 */
@property (nonatomic, strong) NSMutableArray<GDTUnifiedNativeAdDataObject *> *unifiedNativeAdArray;
/**
 第一个自渲染数据
 */
@property (nonatomic, strong) GDTUnifiedNativeAdDataObject *unifiedNativeAdObject;
/**
 激励视频
*/
@property (nonatomic, strong) GDTRewardVideoAd *rewardVideoAd;

@end

NS_ASSUME_NONNULL_END

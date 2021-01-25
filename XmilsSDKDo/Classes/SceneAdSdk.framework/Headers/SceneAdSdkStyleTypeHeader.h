//
//  SceneAdSdkStyleTypeHeader.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/11.
//  Copyright © 2019 gaven. All rights reserved.
//


/**
 广告类型头文件
 **/


/**穿山甲（插屏-1（完成）；激励视频-2（完成）；信息流-4（外面传view,搞定）；全屏视频-5(完成)；原生插屏-6(完成)；开屏广告-7(完成)；draw信息流视频广告-8(完成)；banner广告-9(完成)；原生全屏-10(这个现在不用)；自适应高度信息流-11；信息流渲染成插屏-12(跟6一样的样式)；原生插屏广告位渲染成信息流-13（外面传view，跟4一样的样式，完成)；个性化插屏广告-15**/

//穿山甲广告类型
typedef NS_ENUM(NSUInteger, SceneAdSdk_CSJ_Ad_Type) {
    SceneAdSdk_CSJ_Ad_Type_Interstitial = 1, //插屏
    SceneAdSdk_CSJ_Ad_Type_RewardedVideo = 2, //激励视频
    SceneAdSdk_CSJ_Ad_Type_Feed = 4, //信息流
    SceneAdSdk_CSJ_Ad_Type_FullscreenVideo = 5, //全屏视频
    SceneAdSdk_CSJ_Ad_Type_Native_Interstitial = 6, //原生插屏
    SceneAdSdk_CSJ_Ad_Type_SplashView = 7,//开屏广告
    SceneAdSdk_CSJ_Ad_Type_Draw_Feed = 8,//draw信息流视频广告
    SceneAdSdk_CSJ_Ad_Type_BannerView = 9,//banner广告
    SceneAdSdk_CSJ_Ad_Type_AutoFit_Feed = 11,//自适应高度信息流
    SceneAdSdk_CSJ_Ad_Type_Native_Feed_Interstitial = 12, //信息流渲染成插屏
    SceneAdSdk_CSJ_Ad_Type_Interstitial_Feed = 13, //原生插屏广告位渲染成信息流
    SceneAdSdk_CSJ_Ad_Type_Splash_Interstitial = 14,  // 开屏广告当插屏用 2021.1.7新增，未测
    SceneAdSdk_CSJ_Ad_Type_ExpressInterstitialAd = 15, //个性化模板插屏广告
    SceneAdSdk_CSJ_Ad_Type_CUSTOM_FREE = 16,  // 个性化模板信息流(2020 11-13新增)
    SceneAdSdk_CSJ_Ad_Type_NativeExpressAd = 17,  // 个性化Draw视频广告
    
    SceneAdSdk_CSJ_Ad_Type_NativeExpressRewardedVideoAd = 18,  // 个性化激励视频
    SceneAdSdk_CSJ_Ad_Type_NativeExpressFullScreenVideoAd = 19,  // 个性化全屏视频
    
    SceneAdSdk_CSJ_Ad_Type_Banner_Express = 20,     // 模板渲染Banner  目前尺寸无法变动
    SceneAdSdk_CSJ_Ad_Type_Banner_Native = 21,      // 自渲染Banner   2021.1.7新增，展示视图没实现, （已回收，不再提供创建）
    SceneAdSdk_CSJ_Ad_Type_NativeExpressAd_Reward = 22,  // Draw信息流渲染成激励视频 目前用 17 的展示逻辑，比17多一个倒计时按钮
    SceneAdSdk_CSJ_Ad_Type_Banner_Express_45 = 23,     // 45高度的模板渲染Banner
};

//原生插屏的样式
typedef NS_ENUM(NSUInteger, SceneAdSdk_CSJ_Ad_Interstitial_Style_Type) {
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_One = 5,
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_Two = 6,
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_Three = 7,
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_Four = 8,
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_Five = 9,
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_Eighteen = 18,
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_Nineteen = 19,
    SceneAdSdk_CSJ_Ad_Interstitial_Style_Type_Twenty = 20,
};

//信息流广告样式
typedef NS_ENUM(NSUInteger, SceneAdSdk_CSJ_Ad_Feed_Style_Type) {
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_One = 1,
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_Two = 2,
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_Three = 3,
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_Four = 4,
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_Eleven = 11,   // 小视频广告位
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_Twelve = 12,   // 视频列表广告位
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_Thirteen = 13,  // 清理
    SceneAdSdk_CSJ_Ad_Feed_Style_Type_Fourteen = 14  // 步步赚大转盘弹窗广告
};

//模板渲染banner   新增 2021.1.8
typedef NS_ENUM(NSUInteger, SceneAdSdk_CSJ_Ad_Express_Banner_Type) {
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_60090 = 0,    // 尺寸(300, 45)
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_640100,       // 尺寸(320, 50)
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_600150,       // 尺寸(300, 75)
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_690388,       // 尺寸(345, 194)
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_600260,       // 尺寸(300, 130)
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_600300,       // 尺寸(300, 150)
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_600400_BOTH,  // 尺寸(300, 200)
    SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_600500_BOTH,  // 尺寸(300, 250)
};

// 广点通广告类型 2019.08.22 新增
typedef NS_ENUM(NSUInteger, SceneAdSdk_GDT_Ad_Type) {
    SceneAdSdk_GDT_Ad_Type_BannerView = 1, // Banner广告(已废弃)
    SceneAdSdk_GDT_Ad_Type_Native_Interstitial = 3, // 原生模板
    SceneAdSdk_GDT_Ad_Type_Feed = 4, // 原生自渲染，只有这种类型需要按上面的信息流广告样式来填充数据显示(已废弃)
    SceneAdSdk_GDT_Ad_Type_RewardVideo = 6, // 激励视频
    SceneAdSdk_GDT_Ad_Type_Feed_2_0 = 7,    //自渲染2.0 根据代码来看，和4一样
    SceneAdSdk_GDT_Ad_Type_SplashView = 8, // 开屏广告
    SceneAdSdk_GDT_Ad_Type_Interstitial_2_0 = 9, // 插屏2.0
    SceneAdSdk_GDT_Ad_Type_BannerAd = 10, // Banner 2.0广告   与banner 1 方法一样
    SceneAdSdk_GDT_Ad_Type_Feed_Interstitial = 11, // 信息流渲染成插屏   与 7 方法一样
    SceneAdSdk_GDT_Ad_Type_Full_Video = 12, // 全屏视频   与 9 方法一样
};

// Mobvista广告类型 2019.09.27 新增
typedef NS_ENUM(NSUInteger, SceneAdSdk_MTG_Ad_Type) {
    SceneAdSdk_MTG_Ad_Type_Interstitial = 3, // 插屏
    SceneAdSdk_MTG_Ad_Type_Feed = 2, // 信息流
    SceneAdSdk_MTG_Ad_Type_RewardVideo = 1, // 激励视频
};

// 直客广告类型 2019.10.12 新增
typedef NS_ENUM(NSUInteger, SceneAdSdk_ZK_Ad_Type) {
    SceneAdSdk_ZK_Ad_Type_Feed = 1, // 信息流
    SceneAdSdk_ZK_Ad_Type_SplashView = 4, // 开屏广告
    SceneAdSdk_ZK_Ad_Type_Interstitial = 2, // 插屏
    SceneAdSdk_ZK_Ad_Type_RewardVideo = 3, // 激励视频
};

// 快手广告类型 2021.1.14 新增
typedef NS_ENUM(NSUInteger, SceneAdSdk_KS_Ad_Type) {
    SceneAdSdk_KS_Ad_Type_Reward = 1, // 激励视频
    SceneAdSdk_KS_Ad_Type_FullScreen = 2, // 全屏视频
    SceneAdSdk_KS_Ad_Type_Feed_Native = 3, // 信息流自渲染
    SceneAdSdk_KS_Ad_Type_Feed_Express = 4, // 信息流模板渲染
    SceneAdSdk_KS_Ad_Type_Draw_Feed = 5, // draw信息流
    SceneAdSdk_KS_Ad_Type_Short_Video = 6, // 快手短视频
    SceneAdSdk_KS_Ad_Type_SplashView = 7, // 开屏广告
};

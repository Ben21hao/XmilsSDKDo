//
//  SceneAdSdkAdModel.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/7/15.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdConfigModel.h"
#import "SceneAdSdkHuDongAdModel.h"
#import "SceneAdSdkCSJDataModel.h"
#import "SceneAdSdkGDTDataModel.h"
#import "SceneAdSdkZKDataModel.h"
#import "SceneAdSdkKSDataModel.h"

NS_ASSUME_NONNULL_BEGIN

//穿山甲广告类型
typedef NS_ENUM(NSUInteger, SCENEADSDK_AD_MODEL_TYPE) {
    SCENEADSDK_AD_MODEL_CSJ = 0, // 穿山甲
    SCENEADSDK_AD_MODEL_HUDONG = 1, // 互动广告
    SCENEADSDK_AD_MODEL_GDT = 2, // 广点通广告
    SCENEADSDK_AD_MODEL_MTG = 3, // Mobvista广告
    SCENEADSDK_AD_MODEL_ZK = 4, // 直客广告
    SCENEADSDK_AD_MODEL_KS = 5, // 快手广告
    // 其他拓展 (待开发)
};

/**
 SDK广告model类
 用于业务端取广告源数据
 */
@interface SceneAdSdkAdDataModel : NSObject

/**
 广告类型
 表明是哪类广告，包括穿山甲、互动广告等
 */
@property (nonatomic, assign) SCENEADSDK_AD_MODEL_TYPE adModelType;

/**
 广告配置model（通用）, 在其他的model里也可能有
 */
@property (nonatomic, strong) SceneAdRuleConfig * configModel;

/**
 注意！以下四个属性，只有当configModel.adType为以下值时对会赋值
 SceneAdSdk_CSJ_Ad_Type_Feed
 SceneAdSdk_CSJ_Ad_Type_AutoFit_Feed
 SceneAdSdk_CSJ_Ad_Type_Native_Interstitial_Feed
 SceneAdSdk_CSJ_Ad_Type_Draw_Feed
 SceneAdSdk_CSJ_Ad_Type_Banner_Feed
 SceneAdSdk_CSJ_Ad_Type_Native_Interstitial
 
 SceneAdSdk_GDT_Ad_Type_Feed
 */

/** 广告标题 */
@property (nonatomic, strong) NSString * adTitle;
/** 广告描述 */
@property (nonatomic, strong) NSString * adDescription;
/** 广告Icon */
@property (nonatomic, strong) NSString * adIconUrl;
/** 广告图片数组 */
@property (nonatomic, strong) NSMutableArray * adImageUrlList;

/**
 某些类型广告会返回视图
 注意！此属性，只有当configModel.adType 为以下值时会取此视图
 SceneAdSdk_CSJ_Ad_Type_BannerView
 SceneAdSdk_CSJ_Ad_Type_SplashView
 */
@property (nonatomic, strong) UIView * adView;

/////////////////////////////////////////////////////////// 以下属性业务端App非特殊要求请勿使用
/**
 互动广告model，只有当adModelType = SCENEADSDK_AD_MODEL_HUDONG 时才有值
 */
@property (nonatomic, strong) SceneAdSdkHuDongAdModel * hudongModel;

/**
 穿山甲广告Model, 只有当adModelType = SCENEADSDK_AD_MODEL_CSJ 时才有值
 */
@property (nonatomic, strong) SceneAdSdkCSJDataModel * csjModel;

/**
 广点通广告Model, 只有当adModelType = SCENEADSDK_AD_MODEL_GDT 时才有值
 */
@property (nonatomic, strong) SceneAdSdkGDTDataModel * gdtModel;

/**
 直客广告Model, 只有当adModelType = SCENEADSDK_AD_MODEL_ZK 时才有值
 */
@property (nonatomic, strong) SceneAdSdkZKDataModel * zkModel;

/**
 快手广告Model, 只有当adModelType = SCENEADSDK_AD_MODEL_KS 时才有值
 */
@property (nonatomic, strong) SceneAdSdkKSDataModel * ksModel;

/**
 注册点击响应广告视图
 */
- (void)registerView:(UIView *)view;
/**
 取消注册点击视图
 */
- (void)unregisterView;

/**
 信息流广告视图高度, 注意在model赋值后使用
 */
- (CGFloat)getFeedAdHeightWithWidth:(CGFloat)width;

@end

NS_ASSUME_NONNULL_END

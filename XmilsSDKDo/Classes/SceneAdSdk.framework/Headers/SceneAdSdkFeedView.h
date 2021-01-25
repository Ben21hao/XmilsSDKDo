//
//  SceneAdSdkFeedView.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/17.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkStyleTypeHeader.h"
#import "SceneAdSdkGDTDataModel.h"
#import "SceneAdSdkZKDataModel.h"
//#import <MTGSDK/MTGSDK.h>
#import <KSAdSDK/KSAdSDK.h>

@class SceneAdSdkFeedView;

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkFeedView : UIView

/**
 穿山甲信息流类型model
 **/
@property (nonatomic, strong) BUNativeAd *nativeAd;

/** 广点通自渲染2.0 Model */
@property (nonatomic, strong) GDTUnifiedNativeAdDataObject * gdtNativeAd;

/** Mobvista原生广告数据对象 */
//@property (nonatomic, strong) MTGCampaign *mtgCampaign;

/** 广告位Id, Mobvista广告需要 */
//@property (nonatomic, copy) NSString * mtgAdId;

/** 直客广告数据 */
@property (nonatomic, strong) SceneAdSdkZKDataModel * zkModel;

/**快手广告数据 */
@property (nonatomic, strong) KSNativeAd *ksNativeAd;

/**
 广告样式
 */
@property (nonatomic, assign) SceneAdSdk_CSJ_Ad_Feed_Style_Type adStyle;

/**
 *  重绘回调
 */
@property (nonatomic, copy) void (^layoutsubviews_Block)(SceneAdSdkFeedView * _Nonnull styleView);

/**
 *  直客广告点击回调， 非直客广告不需要监听
 */
@property (nonatomic, copy) void (^ZKAdClick)(SceneAdSdkZKDataModel * _Nonnull model);


/**
 *  广点通自渲染展示回调
 */
@property (nonatomic, copy) void (^gdtAdShow)(GDTUnifiedNativeAdDataObject * gdtNativeAd);
/**
 *  广点通自渲染点击回调
 */
@property (nonatomic, copy) void (^gdtAdClick)(GDTUnifiedNativeAdDataObject * gdtNativeAd);
/**
 *  广点通自渲染详情广告页关闭回调
 */
@property (nonatomic, copy) void (^gdtDetailAdClose)(GDTUnifiedNativeAdDataObject * gdtNativeAd);
/**
 *  信息流广告点击隐藏
 */
@property (nonatomic, copy) void (^adClickHideBlock)(void);

@end

NS_ASSUME_NONNULL_END

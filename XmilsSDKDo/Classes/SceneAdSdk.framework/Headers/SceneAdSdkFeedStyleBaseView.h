//
//  SceneAdSdkFeedStyleBaseView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/13.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkStyleTypeHeader.h"
#import "SceneAdSdkGDTDataModel.h"
#import "SceneAdSdkZKDataModel.h"
#import "SceneAdSdkZKTouchView.h"
#import <KSAdSDK/KSAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkFeedStyleBaseView : UIView<GDTUnifiedNativeAdViewDelegate>

@property (nonatomic, strong) BUNativeAd *nativeAd;
@property (nonatomic, strong) BUNativeAdRelatedView *nativeAdRelatedView;

/** 广点通自渲染2.0 Model */
@property (nonatomic, strong) GDTUnifiedNativeAdDataObject * gdtNativeAd;
/** 广点通自渲染View */
@property (nonatomic, strong) GDTUnifiedNativeAdView * gdtAdView;

/** 直客广告数据 */
@property (nonatomic, strong) SceneAdSdkZKDataModel * zkModel;
/** 直客广告点击视图 */
@property (nonatomic, strong) SceneAdSdkZKTouchView * zkTouchView;

/**快手信息流-自渲染*/
@property (nonatomic, strong) KSNativeAd *ksNativeAd;
@property (nonatomic, strong) KSNativeAdRelatedView *relatedView;

@property (nonatomic, assign) SceneAdSdk_CSJ_Ad_Feed_Style_Type adStyle;

/**
 *  直客广告点击回调
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

@end

NS_ASSUME_NONNULL_END

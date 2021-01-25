//
//  SceneAdSdkInterstitialBaseViewController.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/5.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BUAdSDK/BUNativeAd.h>
#import "SceneAdSdkCSJLoader.h"
#import "SceneAdSdkZKDataModel.h"
#import "SceneAdSdkZKTouchView.h"
#import "BaseAdLoader.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkInterstitialBaseVC : UIViewController

//==== 通用 ====
@property (nonatomic, strong) BaseAdLoader *adLoader;

//==== 穿山甲数据源 ====
@property (nonatomic, strong) BUNativeAd *nativeAd;
//是否全屏可点击,ps：要先设nativeAd,才能设这个属性注意点击事件
@property (nonatomic, assign) BOOL isFullScreenClickable;
@property (nonatomic, strong) BUNativeAdRelatedView *nativeAdRelatedView;

//==== 直客广告数据源 ====
/** 直客广告model */
@property (nonatomic, strong) SceneAdSdkZKDataModel * zkModel;
/**
 *  直客广告点击回调，非直客广告无需监听
 */
@property (nonatomic, copy) void (^ZKAdClick)(SceneAdSdkZKDataModel * model);

@end

NS_ASSUME_NONNULL_END

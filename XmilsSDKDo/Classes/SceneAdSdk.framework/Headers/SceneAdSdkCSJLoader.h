//
//  CSJLoader.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/15.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkCSJDataModel.h"
#import "SceneAdSdkFeedView.h"
#import "BaseAdLoader.h"


@class SceneAdSdkCSJLoader,SceneAdSdkLoaderParams;

@interface SceneAdSdkCSJLoader : BaseAdLoader

/////////////// 穿山甲回调代码块

//加载成功（参数返回）ps:现在只有（类型4，信息流）回调
@property(nonatomic, copy) void (^ _Nullable adDidFinishLoadBlock)(BUNativeAd *_Nullable nativeAd);
//显示完毕（多个参数返回） ps:现在只有（类型4，信息流）回调,传信息流的view和穿山甲数据model出来
@property(nonatomic, copy) void (^ _Nullable adDidFinishVisibleBlock)(SceneAdSdkFeedView *_Nullable feedView, BUNativeAd *_Nullable nativeAd);
//开屏广告关闭关闭广告控制器
@property(nonatomic, copy) void (^ _Nullable splashAdDidCloseOtherController)(BUSplashAdView *_Nullable splashAd, BUInteractionType interactionType);

// 2019.7.12 新增
/**
 （慎用！后期可能会废弃！）广告将要显示，带广告View
 */
@property(nonatomic, copy) void (^ _Nullable adWillFinshVisibleBlock)(SceneAdSdkFeedView *_Nullable feedView);

/////////////// 穿山甲回调代码块End

/**
 加载成功后的广告数据Model
 */
@property(nonatomic, strong) SceneAdSdkCSJDataModel *_Nullable model;

/**
 用广告配置model自动加载广告
 
 @param adRuleConfig 广告配置model
 @param params 用户广告的配置
 @param csjLoaderCompleteBlock 加载完成
 */
- (void)csjADTypeHandlerWithModel:(SceneAdRuleConfig *_Nullable)adRuleConfig loaderParams:(SceneAdSdkLoaderParams *_Nonnull)params csjLoaderCompleteBlock:(SceneAdSdkCSJLoaderCompleteBlock _Nullable)csjLoaderCompleteBlock;

/**
 显示广告，在广告加载成功后调用
 */
- (void)showAd;

@end





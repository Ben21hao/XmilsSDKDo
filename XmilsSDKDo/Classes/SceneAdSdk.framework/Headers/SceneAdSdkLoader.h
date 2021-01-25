//
//  SceneAdSdkLoader.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/17.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdSdkLoaderParams.h"
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkFeedView.h"
#import "SceneAdConfigModel.h"
#import "SceneAdSdkAdDataModel.h"

@class SceneAdSdkLoader;

/**
 加载器完成回调类声明
 
 @param success 标识是否已完成加载
 */
typedef void(^SceneAdSdkLoaderCompleteBlock)(BOOL success, NSError * _Null_unspecified error);

/**
 广告加载类，所有的广告均通过此类加载
 */
@interface SceneAdSdkLoader : NSObject

#pragma mark - ======= 回调映射代码块 =======

/**
 1 - 广告加载成功
 */
@property(nonatomic, copy) void (^ _Nullable adDidLoadBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 2 - 广告加载失败
 */
@property(nonatomic, copy) void (^ _Nullable adDidFailBlock)(SceneAdSdkLoader *_Nullable loader, NSError *_Nullable error);

/**
 3 - 点击了广告
 */
@property(nonatomic, copy) void (^ _Nullable adDidClickBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 4 - 广告将要显示
 */
@property(nonatomic, copy) void (^ _Nullable adWillVisibleBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 5 - 广告显示失败
 */
@property(nonatomic, copy) void (^ _Nullable adVisibleFailBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 6 - 关闭广告
 */
@property(nonatomic, copy) void (^ _Nullable adDidCloseBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 7 - 视频播放完成
 */
@property(nonatomic, copy) void (^ _Nullable adVideoDidPlayBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 8 - 激励完成
 @param rewardResult 激励结果
 */
@property(nonatomic, copy) void (^ _Nullable adRewardFinshBlock)(SceneAdSdkLoader *_Nullable loader, BOOL rewardResult);

/**
 9 - 点击广告后广告详情页关闭(开屏、广点通等广告)   2019.08.26 新增
 */
@property(nonatomic, copy) void (^ _Nullable adDetailCloseAdBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 10 - 点击隐藏信息流广告
 */
@property (nonatomic, copy) void (^ _Nullable adClickHideBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 11- 模板信息流广告视图渲染成功，回调模板信息流渲染后的高度，用于调整广告页面高度
 */
@property (nonatomic, copy) void (^ _Nullable nativiveExpressAdRenderBlock)(CGFloat height);

#pragma mark - ======= End =======


#pragma mark - ======= 补丁级回调 =======

/**
 （慎用！后期可能会废弃！）广告将要显示，带广告View
 */
@property(nonatomic, copy) void (^ _Nullable adWillFinshVisibleBlock)(SceneAdSdkLoader *_Nullable loader, SceneAdSdkFeedView *_Nullable feedView);

/**
 （慎用！后期可能会废弃！）广告显示完毕
 */
@property(nonatomic, copy) void (^ _Nullable adDidVisibleBlock)(SceneAdSdkLoader *_Nullable loader, SceneAdSdkFeedView *_Nullable feedView);

/**
 （慎用！后期可能会废弃！）视频广告数据已加载 只有激励视频和全屏视频会回调
 */
@property(nonatomic, copy) void (^ _Nullable adVideoDidLoadBlock)(SceneAdSdkLoader *_Nullable loader);

/**
 （慎用！后期可能会废弃！）广告加载成功 带穿山甲广告实体 2019年7月8日新增
 注意：只有信息流、插屏6、原生Banner会回调，其他的广告形式因为数据源不是此类型故不做回调
 */
@property(nonatomic, copy) void (^ _Nullable adDidFinshLoadBlock)(SceneAdSdkLoader *_Nullable loader, BUNativeAd *_Nullable nativeAd, SceneAdRuleConfig *_Nullable adConfig);

/**
 （慎用！后期可能会废弃！）广告显示完毕 带穿山甲广告实体
 */
@property(nonatomic, copy) void (^ _Nullable adDidFinishVisibleBlock)(SceneAdSdkLoader *_Nullable loader, UIView *_Nullable adView, BUNativeAd *_Nullable nativeAd, SceneAdRuleConfig *_Nullable ruleConfig);

/**
 （慎用！后期可能会废弃！）开屏广告关闭广告详情页时回调
 */
@property(nonatomic, copy) void (^ _Nullable splashAdDidCloseOtherController)(BUSplashAdView *_Nullable splashAd, BUInteractionType interactionType) DEPRECATED_MSG_ATTRIBUTE("2019.08.22废除，请用adSplashCloseAdBlock代替");

#pragma mark - ======= End =======


/** 当前广告位id */
@property(nonatomic, copy, readonly) NSString *_Nullable position;
/**
 获取广告源始数据model
 用于获取加载成功后的广告数据, 请在didLoadBlock回调后再取值 (2019.7.15)
 */
@property(nonatomic, strong) SceneAdSdkAdDataModel *_Nullable adModel;
/**
 加载器创建时间
 用于标识缓存超过45分钟失效，客户端可无视此字段
 */
@property(nonatomic, assign) NSUInteger createTime;
/**
 广告加载参数
 */
@property(nonatomic, strong) SceneAdSdkLoaderParams *_Nullable parmas;


/**
 初始化加载广告数据

 @param position 广告位
 @param parmas 参数
 @return 加载类对象
 */
- (instancetype _Nullable)initWithPosition:(NSString *_Nullable)position params:(SceneAdSdkLoaderParams *_Nullable)parmas;

/**
 初始化加载互动广告数据
 
 @param position 广告位
 @return 加载类对象
 */
- (instancetype _Nullable)initHuDongAdWithPosition:(NSString *_Nullable)position;

/**
 显示广告数据
 */
- (void)showAd;

/**
 更新子视图布局，用于仅当广告类型是信息流里重新撑满父视图
 
 @param sview 信息流广告父视图
 */
- (void)updateFeedAdWithSuperView:(UIView *_Nonnull)sview;

@end

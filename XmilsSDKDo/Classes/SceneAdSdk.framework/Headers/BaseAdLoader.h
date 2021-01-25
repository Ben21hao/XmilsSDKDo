//
//  BaseAdLoader.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/8/22.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdSdkFeedView.h"

NS_ASSUME_NONNULL_BEGIN

@interface BaseAdLoader : NSObject

/**
 广告内容View
 */
@property (nonatomic, strong) UIView * _Nullable contentView;
/**
 作为广告SDK的承载VC，如不设置则默认为当前最上层的VC，若设置则在广告需要弹出时用这个VC
 */
@property (nonatomic, strong) UIViewController * adViewController;

/**
 目前感觉并没什么卵用
 
 @param success 结果标识
 */
typedef void(^SceneAdSdkCSJLoaderCompleteBlock)(BOOL success, NSError *error);

//加载成功
@property(nonatomic, copy) void (^ _Nullable adDidLoadBlock)(void);
//加载失败
@property(nonatomic, copy) void (^ _Nullable adDidFailBlock)(NSError *_Nullable error);
//将要显示
@property(nonatomic, copy) void (^ _Nullable adWillVisibleBlock)(void);
//点击了广告
@property(nonatomic, copy) void (^ _Nullable adDidClickBlock)(void);
//关闭广告
@property(nonatomic, copy) void (^ _Nullable adDidCloseBlock)(void);
//视频已加载
@property(nonatomic, copy) void (^ _Nullable adVideoDidLoadBlock)(void);
//显示完毕（多个参数返回） ps:现在只有（类型4，信息流）回调,传信息流的view出来
@property(nonatomic, copy) void (^ _Nullable adDidVisibleBlock)(SceneAdSdkFeedView *_Nullable feedView);

// 2019.09.03
/**
 激励完成
 @param rewardResult 激励结果
 */
@property(nonatomic, copy) void (^ _Nullable adRewardFinshBlock)(BOOL rewardResult);

// 2019.7.10 新增
/**
 视频播放完成
 */
@property(nonatomic, copy) void (^ _Nullable adVideoDidPlayBlock)(void);

/**
 广告显示失败
 */
@property(nonatomic, copy) void (^ _Nullable adVisibleFailBlock)(void);

// 2019.08.26 新增
/**
 点击广告后广告详情页关闭
 */
@property(nonatomic, copy) void (^ _Nullable adDetailCloseAdBlock)(void);

// 2019.12.06 新增
/**
 点击隐藏信息流广告
 */
@property (nonatomic, copy) void (^ _Nullable adClickHideBlock)(void);
// 2021.1.13 新增
/**
 信息流广告视图渲染成功
 */
@property (nonatomic, copy) void (^ _Nullable nativiveExpressAdRenderBlock)(CGFloat height);


@end

NS_ASSUME_NONNULL_END

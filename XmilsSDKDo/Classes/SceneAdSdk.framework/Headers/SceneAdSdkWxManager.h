//
//  SceneAdSdkWxManager.h
//  SceneAdSdk
//
//  Created by xmiles on 2021/1/14.
//  Copyright © 2021 dengsir. All rights reserved.
//  微信管理类

#import <Foundation/Foundation.h>

#import "WXApi.h"
NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkWxManager : NSObject <WXApiDelegate>

+ (SceneAdSdkWxManager *)shareManager;

/// 微信授权页返回后，准备发起网络请求（可用于添加 loading 动画）
@property (nonatomic, copy) void(^willSendWxAuthNetwork)(void);

/// 微信授权后，网络返回的结果（可用于结束 loading 动画）
@property (nonatomic, copy) void(^callWxAuthorizeResult)(NSDictionary *result,BOOL success);

/// 接入微信开发
/// @param appId 微信appid
/// @param universalLink 微信universalLink
/// @param secretId 微信secretId
- (void)sceneAd_wxRegisterAppId:(NSString *)appId universalLink:(NSString *)universalLink secretId:(NSString *)secretId;


/// 拉起微信授权
- (void)sceneAd_wxSendAuthRequest;

/**
 跳转小程序
 * 字典携带参数
 * sourceId --> 拉起的小程序的username
 * path --> 拉起小程序页面的可带参路径，不填默认拉起小程序首页
 * isRelease --> 拉起小程序类型 YES为正式版 NO为体验版
 */
+ (NSString *)launchMini:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END

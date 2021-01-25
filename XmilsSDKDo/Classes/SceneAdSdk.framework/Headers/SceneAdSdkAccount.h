//
//  SceneAdSdkAccount.h
//  SceneAdSdk
//
//  Created by xmiles on 2021/1/11.
//  Copyright © 2021 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkAccount : NSObject

+ (SceneAdSdkAccount *)shareManager;

/// 登陆账号服务
/// @param success 成功回调
/// @param failure 失败回调
- (void)sceneAd_accountLoginSuccess:(nullable void (^)(id _Nullable responseObject))success failure:(nullable void (^)(NSError *error))failure;

/// 用户账号绑定微信
/// @param params 微信参数 headimgurl，nickname，openid，unionid
/// @param success 成功回调
/// @param failure 失败回调
- (void)sceneAd_BindWxSilentParams:(NSDictionary *)params Success:(nullable void (^)(NSDictionary *responseObject))success failure:(nullable void (^)(NSDictionary *error))failure;

/**
 添加用户虚拟货币
 
 @param businessType 功能模块code
 @param coinCount 数量
 @param reason 添加描述，用于后台明细记录
 @param successCallback 成功回调
 @param errorCallback 失败回调
 */
+ (void)addUserCoinBusinessType:(NSInteger)businessType coinCount:(NSInteger)coinCount reason:(NSString *)reason successCallback:(void (^)(NSDictionary *))successCallback errorCallback:(void (^)(NSError *))errorCallback;

/// 获取用户金币相关的数据
/// @param successCallback 成功回调
/// @param errorCallback 失败回调
+ (void)getUserCoinDataSuccessCallback:(void (^)(NSDictionary *))successCallback errorCallback:(void (^)(NSError *))errorCallback;

// 请求额外奖励
+ (void)requestInteractiveAdvertisingPosition:(NSInteger)position success:(void (^)(_Nullable id))successCallback errorCallback:(void (^)(NSError *))errorCallback;

@end

NS_ASSUME_NONNULL_END

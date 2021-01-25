//
//  SceneAdManager.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/15.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SceneAdSdk/SceneAdSdkParams.h>


@interface SceneAdSdkManager : NSObject

/**
 全局配置参数类
 */
@property(nonatomic, strong, readonly) SceneAdSdkParams *params;

/**
 *  处理趣专享第三方弹窗时，签到弹窗覆盖了他们的全屏弹窗，在签到弹窗弹出时回调此方法决定是否弹窗，2019.11.22新增
 *  当业务端关闭全屏弹窗时，可用actionDic形参再次用协议调起签到弹窗
 */
@property (nonatomic, copy) BOOL (^shouldShowSignDialog)(NSDictionary *actionDic);

/**
 实例化单例

 @return 对象
 */
+ (SceneAdSdkManager *)shareManager;

/**
 * 获取 SDK 版本
 */
+ (NSString *)sceneSdkVersion;

/**
 初始化SDK

 @param params 参数
 @param completeBlock SDK初始化完成后回调
 */
- (void)setupSDK:(SceneAdSdkParams *)params complete:(void (^)(void))completeBlock;

/**
 根据参数进行路由跳转

 @param actionJsonDic 路由参数
 */
- (void)launch:(NSDictionary *)actionJsonDic;

/**
 通知网页
 对应执行网页脚本 javascript:onNotifyWebMessage(%@)
 */
- (void)notifyWebPageMessage:(NSDictionary *)params;


/// 打印日志。默认不输出
/// @param enable YES为输出
- (void)setSceneAdLogEnable:(BOOL)enable;

@end

//
//  SceneAdParams.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/15.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SceneAdSdkPheadParams;

@interface SceneAdSdkParams : NSObject

/**
 穿山甲appID
 */
@property (nonatomic, copy) NSString *csjAppId;

/**
 广点通AppId
 */
@property (nonatomic, copy) NSString * gdtAppId;

/**
 快手AppId
 */
@property (nonatomic, copy) NSString * ksAppId;

/**
 推啊AppKey
 */
@property (nonatomic, copy) NSString * taAppkey;

/**
 是否debug模式
 */
@property (nonatomic, assign) BOOL isDebug;

/**
 设置此phead会自动生成adhead并更新到此类的adhead中
 注意！在设置phead时形参没有activityChannel值时，会先默认先取成员变量activityChannel中的值，如果形参
 的字典中带有activityChannel值，则会自动更新到成员变量activityChannel中

 如下是SDK需要的参数，另外项目需要其他参数自行添加到字典即可
 /// 产品id
NSString *prdid;

 /// 手机ID
NSString* phoneid;

 /// 渠道号
NSString *channel;

 /// App的版本号
NSNumber *cversion;
 */
@property (nonatomic, strong) NSDictionary *phead;

/**
 客户端通过params.activityChannel来设置此值，在更新phead时会默认取这个值，如果phead的形参中含有activityChannel值
 则会以形参中为准，且更新到成员变量activityChannel中
 客户端亦可通过[SceneAdSdkManager shareManager].params.activityChannel设置此值更新到phead中
 */
@property (nonatomic, copy) NSString *activityChannel;

/**
 客户端通过[SceneAdSdkManager shareManager].params.userIdentify设置用户标识
 目前涉及到的地方有现金豆兑换页面
 */
@property (nonatomic, copy) NSString *userIdentify;

/**
 从哪里来,统计用
 */
@property (nonatomic, copy) NSString *startFrom;

/**
 adhead:会根据传入的phead自动转化
 */
@property (nonatomic, strong, readonly) NSMutableDictionary *adhead;

/**
 设置奖励的单位，趣专享：现金豆、指尖特效：积分、车主：mL油
 */
@property (nonatomic, copy) NSString *rewardUnit;

/** 用户标签，由应用方进行设置，用于对特定用户进行识别，会加载到adHead中 */
@property (nonatomic, copy) NSString * tag;

/**
 是否自动登陆账号服务
 */
@property (nonatomic, assign) BOOL autoLogin;

/**
 状态栏颜色
 - 当前只针对【来电秀】生效
 - 需要配置info.plist View controller-based status bar appearance=NO才生效
 */
@property (nonatomic, assign) UIStatusBarStyle statusBarStyle;

@end

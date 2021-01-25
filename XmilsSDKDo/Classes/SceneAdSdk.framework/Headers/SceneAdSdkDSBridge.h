//
//  SceneAdSdkDSBridge.h
//  VipGift
//
//  Created by merrill on 2017/11/10.
//  Copyright © 2017年 小迈科技. All rights reserved.
//

#import <UIKit/UIKit.h>

//#import "VGMeService.h"
@class VGCartsProductListModel;
extern NSString *const SceneAdSdk_JS_ON_PAUSE;
extern NSString *const SceneAdSdk_JS_ON_RESUME;
extern NSString *const SceneAdSdk_JS_ON_BACKPRESSED;
extern NSString *const SceneAdSdk_JS_ON_sdkAdListener;

@interface SceneAdSdkDSBridge : NSObject

//2020年12月23日，为了让brige触发方法知道是哪个界面触发的，添加这个参数，如有其它方法可以讨论
@property (nonatomic, weak) UIViewController* bindedVC;

// 这里是网页->SDK->客户端
@property (nonatomic, copy) void(^jsEnableOnResumeOnPause)(NSDictionary* params);
@property (nonatomic, copy) void(^jsReload)(NSDictionary* params);
@property (nonatomic, copy) void(^loginSuccessHandler)(NSString * result,BOOL complete);
@property (nonatomic, copy) void(^enableReloadWhenLoginHandler)(BOOL isReload);
@property (nonatomic, copy) void(^bindWechatSuccessHandler)(NSString * result,BOOL complete);
@property (nonatomic, copy) void(^shareSuccessHandler)(NSString * result,BOOL complete);
@property (nonatomic, copy) void(^advertShowHandler)(NSString *pageId);
@property (nonatomic, copy) void(^setNavigationBarItemsHandler)(NSDictionary *resultParams);
@property (nonatomic, copy) void(^showAnswerGDTHandler)(NSString *adPlaceId);
@property (nonatomic, copy) void(^getLastPageInfoHandle)(NSString * result,BOOL complete);
@property (nonatomic, copy) void(^payByWeixinHandler)(NSDictionary *params);
@property (nonatomic, copy) void(^payByAlipayHandler)(NSDictionary *params);
@property (nonatomic, copy) void(^enableTaobaoMonitor)(NSDictionary* params);
@property (nonatomic, copy) void(^jsEnableOnBackpressed)(NSDictionary *params);
@property (nonatomic, copy) void(^uploadTBOrderInfoFinish)(void);
@property (nonatomic, copy) void(^jsLoadAdSdkDidLoad)(NSDictionary *params);
//@property (nonatomic, copy) void(^didGetTBUserId)(VGUserModel *userModel,NSError *error);
@property (nonatomic, copy) void(^jsAdViewListenner)(NSDictionary *params);
//1.22选择性别
@property (nonatomic, copy) void(^changeSex)(NSDictionary* params);
//保存网页图片
@property (nonatomic, copy) void(^savePicture)(NSDictionary* params);

@property (nonatomic, copy) dispatch_block_t udeskCustomService;


@end

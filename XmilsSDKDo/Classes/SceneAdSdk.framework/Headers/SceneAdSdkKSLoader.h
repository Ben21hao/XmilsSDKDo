//
//  SceneAdSdkKSLoader.h
//  SceneAdSdk
//
//  Created by xmiles on 2021/1/14.
//  Copyright © 2021 dengsir. All rights reserved.
//

#import <SceneAdSdk/SceneAdSdk.h>
#import "BaseAdLoader.h"
#import "SceneAdSdkKSDataModel.h"
#import <KSAdSDK/KSAdSDK.h>

NS_ASSUME_NONNULL_BEGIN
@class SceneAdSdkCSJLoader,SceneAdSdkLoaderParams;

@interface SceneAdSdkKSLoader : BaseAdLoader

/**
 加载成功后的广告数据Model
 */
@property(nonatomic, strong) SceneAdSdkKSDataModel *model;

/**
 用广告配置model自动加载广告
 
 @param adRuleConfig 广告配置model
 @param params 用户广告的配置
 */
- (void)ksAdTypeHandlerWithModel:(SceneAdRuleConfig *_Nullable)adRuleConfig loaderParams:(SceneAdSdkLoaderParams *_Nonnull)params;

/**
 显示广告，在广告加载成功后调用
 */
- (void)showAd;

@end

NS_ASSUME_NONNULL_END

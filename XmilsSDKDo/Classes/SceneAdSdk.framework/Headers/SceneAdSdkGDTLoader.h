//
//  SceneAdSdkGDTLoader.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/8/22.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdConfigModel.h"
#import <UIKit/UIView.h>
#import "BaseAdLoader.h"
#import "SceneAdSdkGDTDataModel.h"
#import "SceneAdSdkLoaderParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkGDTLoader : BaseAdLoader

/**
 开屏广告下方Logo视图，实现半屏视图
 */
@property (nonatomic, strong) UIView * _Nullable gdtSplashContentView;
/**
 model
 */
@property (nonatomic, strong) SceneAdSdkGDTDataModel * model;

/**
 用广告配置model自动加载广告
 
 @param adRuleConfig 广告配置model
 */
-(void)gdtADTypeHandlerWithModel:(SceneAdRuleConfig *_Nullable)adRuleConfig contentViewParams:(nullable SceneAdSdkLoaderParams * )params;

/**
 显示广告，在广告加载成功后调用
 */
-(void)showAd;

/**
 *  2019.12.13 解决展示量差距大的问题
 */
@property (nonatomic, copy) void (^adFeedExpose)(void);

@end

NS_ASSUME_NONNULL_END

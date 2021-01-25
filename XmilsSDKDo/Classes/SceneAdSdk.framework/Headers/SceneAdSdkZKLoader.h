//
//  SceneAdSdkZKLoader.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/10/12.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <SceneAdSdk/SceneAdSdk.h>
#import "SceneAdSdkZKDataModel.h"
#import "BaseAdLoader.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkZKLoader : BaseAdLoader


/**
 加载成功后的广告数据Model
 */
@property (nonatomic, strong) SceneAdSdkZKDataModel * _Nullable model;

/**
 用广告配置model自动加载广告
 
 @param adRuleConfig 广告配置model
 @param contentView 广告的父视图
 */
-(void)zkADTypeHandlerWithModel:(SceneAdRuleConfig *_Nullable)adRuleConfig contentView:(nullable UIView *)contentView;

/**
 显示广告，在广告加载成功后调用
 */
-(void)showAd;

@end

NS_ASSUME_NONNULL_END

//
//  SceneAdSdkLoaderParams.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/17.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SceneAdSdkStyleTypeHeader.h"

/**
 广告加载参数类
 **/

@interface SceneAdSdkLoaderParams : NSObject

/**
 作为广告sdk的承载view
 */
@property(nonatomic, strong) UIView *contentView;

/**
 作为广告SDK的承载VC，如不设置则默认为当前最上层的VC，若设置则在广告需要弹出时用这个VC
 */
@property (nonatomic, strong) UIViewController * adViewController;

/**
======  注意！！！ ======
当广告源为广点通的开屏广告时，应将此视图设置为下方的logo视图，用于实现半屏广告，保证高度不超过屏幕高度的 25%，否则广点通开屏广告永远全屏，此举实为无奈，广点通的开屏广告太奇葩
例子如下：
SceneAdSdkLoaderParams * param = [[SceneAdSdkLoaderParams alloc] init];
param.contentView = self.view; // 这里设置的是开屏广告的父容器
param.gdtSplashContentView = <构造的下方logo视图>; // 广点通的半屏广告下方logo视图，不实现则默认全屏开屏广告
SceneAdSdkLoader *loader = [[SceneAdSdkLoader alloc] initWithPosition:@"20" params:param];
loader.adDidLoadBlock = ^(SceneAdSdkLoader *loader) {
   [loader showAd];
};
======================
 */
@property(nonatomic, strong) UIView *gdtSplashContentView;


/**
 ===== 注意 =====
 当广告源为穿山甲的模板渲染banner广告，需要传入尺寸类型；如果不传，默认为SceneAdSdk_CSJ_Ad_Express_Banner_SIZE_60090，使用(300, 45)；
 */
@property (nonatomic, assign) SceneAdSdk_CSJ_Ad_Express_Banner_Type experssBannerType;

@end



//
//  SceneAdSdkFeedStyleView11.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/7/4.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkStyleTypeHeader.h"
#import "SceneAdSdkFeedStyleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@class SceneAdSdkFeedStyleView11;

typedef void(^SceneAdSdkFeedStyleView11_Layoutsubviews_Block)(SceneAdSdkFeedStyleView11 * _Nullable styleView);

@interface SceneAdSdkFeedStyleView11 : SceneAdSdkFeedStyleBaseView

@property (nonatomic, copy) SceneAdSdkFeedStyleView11_Layoutsubviews_Block layoutsubviews_Block;

/**
 *  关闭
 */
@property (nonatomic, copy) void (^click_closee)(void);

@end

NS_ASSUME_NONNULL_END

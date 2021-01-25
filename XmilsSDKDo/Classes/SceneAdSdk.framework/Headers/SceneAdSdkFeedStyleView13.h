//
//  SceneAdSdkFeedStyleView13.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/7/11.
//  Copyright © 2019 gaven. All rights reserved.
//

#import "SceneAdSdkFeedStyleBaseView.h"
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkStyleTypeHeader.h"
#import "SceneAdSdkFeedStyleBaseView.h"
#import <SDWebImage.h>
#import <Masonry.h>
#import "UIColor+SceneAdSdkColor.h"
NS_ASSUME_NONNULL_BEGIN
@class SceneAdSdkFeedStyleView13;

typedef void(^SceneAdSdkFeedStyleView13_Layoutsubviews_Block)(SceneAdSdkFeedStyleView13 * _Nullable styleView);

@interface SceneAdSdkFeedStyleView13 : SceneAdSdkFeedStyleBaseView

@property (nonatomic, copy) SceneAdSdkFeedStyleView13_Layoutsubviews_Block layoutsubviews_Block;

@end

NS_ASSUME_NONNULL_END

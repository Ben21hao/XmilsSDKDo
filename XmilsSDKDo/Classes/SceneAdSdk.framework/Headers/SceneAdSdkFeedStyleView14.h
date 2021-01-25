//
//  SceneAdSdkFeedStyleView14.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/9/18.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkStyleTypeHeader.h"
#import "SceneAdSdkFeedStyleBaseView.h"

NS_ASSUME_NONNULL_BEGIN

@class SceneAdSdkFeedStyleView14;

typedef void(^SceneAdSdkFeedStyleView14_Layoutsubviews_Block)(SceneAdSdkFeedStyleView14 * _Nullable styleView);

@interface SceneAdSdkFeedStyleView14 : SceneAdSdkFeedStyleBaseView

@property (nonatomic, copy) SceneAdSdkFeedStyleView14_Layoutsubviews_Block layoutsubviews_Block;

@end

NS_ASSUME_NONNULL_END

//
//  SceneAdSdkFeedStyleView12.h
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

@class SceneAdSdkFeedStyleView12;

typedef void(^SceneAdSdkFeedStyleView12_Layoutsubviews_Block)(SceneAdSdkFeedStyleView12 * _Nullable styleView);

@interface SceneAdSdkFeedStyleView12 : SceneAdSdkFeedStyleBaseView

@property (nonatomic, copy) SceneAdSdkFeedStyleView12_Layoutsubviews_Block layoutsubviews_Block;

@end

NS_ASSUME_NONNULL_END

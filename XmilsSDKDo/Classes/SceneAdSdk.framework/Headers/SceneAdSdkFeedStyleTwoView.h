//
//  SceneAdSdkFeedStyleTwoView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/13.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkStyleTypeHeader.h"
#import "SceneAdSdkFeedStyleBaseView.h"

@class SceneAdSdkFeedStyleTwoView;

typedef void(^SceneAdSdkFeedStyleTwoView_Layoutsubviews_Block)(SceneAdSdkFeedStyleTwoView * _Nullable styleView);

NS_ASSUME_NONNULL_BEGIN



@interface SceneAdSdkFeedStyleTwoView : SceneAdSdkFeedStyleBaseView
@property (nonatomic, copy) SceneAdSdkFeedStyleTwoView_Layoutsubviews_Block layoutsubviews_Block;

@end

NS_ASSUME_NONNULL_END

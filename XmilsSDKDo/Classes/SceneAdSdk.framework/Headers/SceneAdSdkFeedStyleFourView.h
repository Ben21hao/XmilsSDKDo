//
//  SceneAdSdkFeedStyleFourView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/13.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BUAdSDK/BUAdSDK.h>
#import "SceneAdSdkStyleTypeHeader.h"
#import "SceneAdSdkFeedStyleBaseView.h"

@class SceneAdSdkFeedStyleFourView;

typedef void(^SceneAdSdkFeedStyleFourView_Layoutsubviews_Block)(SceneAdSdkFeedStyleFourView * _Nullable styleView);


NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkFeedStyleFourView : SceneAdSdkFeedStyleBaseView

@property (nonatomic, copy) SceneAdSdkFeedStyleFourView_Layoutsubviews_Block layoutsubviews_Block;

@end

NS_ASSUME_NONNULL_END

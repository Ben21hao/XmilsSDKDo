//
//  SceneAdSdkFeedStyleOneView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/6/13.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SceneAdSdkFeedStyleBaseView.h"

@class SceneAdSdkFeedStyleOneView;

typedef void(^SceneAdSdkFeedStyleOneView_Layoutsubviews_Block)(SceneAdSdkFeedStyleOneView * _Nullable styleView);

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkFeedStyleOneView : SceneAdSdkFeedStyleBaseView
@property (nonatomic, copy) SceneAdSdkFeedStyleOneView_Layoutsubviews_Block layoutsubviews_Block;


@end

NS_ASSUME_NONNULL_END

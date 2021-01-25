//
//  SceneAdSdkAnswerRewardView.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/26.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^Callback)(NSDictionary *);

@interface SceneAdSdkAnswerRewardView : UIView
+(void)showWithCallback:(Callback)callback;
@property (nonatomic ,copy)Callback callback;
@end


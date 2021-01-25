//
//  SceneAdSdkAnswerVC.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/25.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkAnswerVC : UIViewController

/** 页面来源 */
@property (nonatomic, copy) NSString * fromPage;

/** 2019.12.13 新增点击返回时跳转别的活动 */
@property (nonatomic, strong) NSDictionary * back_route;

@end

NS_ASSUME_NONNULL_END

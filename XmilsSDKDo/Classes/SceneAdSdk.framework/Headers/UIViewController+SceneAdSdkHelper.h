//
//  UIViewController+Helper.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/16.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (SceneAdSdkHelper)
//拿到最上面的vc
+ (UIViewController*)sceneAdSdk_topViewController;
@end

NS_ASSUME_NONNULL_END

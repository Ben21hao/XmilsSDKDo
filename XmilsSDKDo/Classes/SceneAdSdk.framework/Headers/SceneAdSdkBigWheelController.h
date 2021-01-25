//
//  SceneAdSdkBigWheelControllerViewController.h
//  wheel
//
//  Created by caizifeng on 2019/5/17.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SceneAdSdkBigWheelController : UIViewController

/** 页面来源 */
@property (nonatomic, copy) NSString * fromPage;
/** 2019.12.13 新增点击返回时跳转别的活动 */
@property (nonatomic, strong) NSDictionary * back_route;

@end

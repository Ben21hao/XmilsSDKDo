//
//  BUDNativeInterstitialViewController.h
//  BUDemo
//
//  Created by bytedance_yuanhuan on 2018/8/10.
//  Copyright © 2018年 bytedance. All rights reserved.
//

#import <UIKit/UIKit.h>


#import "SceneAdSdkCountDownButton.h"
#import "SceneAdSdkInterstitialBaseVC.h"

@interface SceneAdSdkInterstitialStyleOneVC : SceneAdSdkInterstitialBaseVC

//倒计时
@property (nonatomic, strong) SceneAdSdkCountDownButton *countDownButton;

@end

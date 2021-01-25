//
//  SceneAdSdkSignDialog.h
//  wheel
//
//  Created by caizifeng on 2019/5/21.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkSignDialogModel.h"

@interface SceneAdSdkSignDialog : UIViewController
/**
 model
 */
@property (nonatomic , strong) SceneAdSdkSignDialogModel *model;
/**
 页面来源
 */
@property (nonatomic, copy) NSString * fromPage;

@end

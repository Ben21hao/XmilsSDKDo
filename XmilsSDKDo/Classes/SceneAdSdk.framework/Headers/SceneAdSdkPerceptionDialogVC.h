//
//  SceneAdSdkPerceptionDialogVC.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/7/2.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkPerceptionModel.h"

@interface SceneAdSdkPerceptionDialogVC : UIViewController
+(instancetype)PerceptionDialogVCWithModel:(NSDictionary *)model;
@property (nonatomic , strong) SceneAdSdkPerceptionModel *model;
@end



//
//  SceneAdSdkPerceptionVC.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/7/9.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkPerceptionModel.h"


@interface SceneAdSdkPerceptionVC : UIViewController
+(instancetype)PerceptionVCWithModel:(NSDictionary *)model;
@property (nonatomic , strong) SceneAdSdkPerceptionModel *model;
@end



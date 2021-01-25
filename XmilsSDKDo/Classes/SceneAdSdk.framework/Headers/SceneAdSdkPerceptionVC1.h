//
//  SceneAdSdkPerceptionVC1.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/7/12.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkPerceptionModel.h"

@interface SceneAdSdkPerceptionVC1 : UIViewController

+(instancetype)PerceptionVCWithModel:(NSDictionary *)model;

@property (nonatomic , strong) SceneAdSdkPerceptionModel *model;

@end



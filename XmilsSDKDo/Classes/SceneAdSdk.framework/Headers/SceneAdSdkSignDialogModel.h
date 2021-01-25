//
//  SceneAdSdkSignDialogModel.h
//  wheel
//
//  Created by caizifeng on 2019/5/21.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SceneAdSdkSignDialogModel : NSObject
@property (nonatomic , copy) NSString *fromTitle;
@property (nonatomic , copy) NSString *coinFrom;
@property (nonatomic , assign)int reward;
@property (nonatomic , assign)bool showDouble;
@property (nonatomic , assign)int signDay;
@property (nonatomic , copy)NSString *rmb;
@property (nonatomic , copy)NSString *redPackUrl;
@property (nonatomic , copy)NSString *rewardUnit;
@property (nonatomic , copy)NSString *sign3WithCount;  //如果为nil表示非三次签到  否则传递1 2 3
@end

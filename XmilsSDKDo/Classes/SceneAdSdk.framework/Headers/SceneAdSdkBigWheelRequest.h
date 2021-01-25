//
//  SceneAdSdkBigWheelRequest.h
//  wheel
//
//  Created by caizifeng on 2019/5/16.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void(^successCallback)(id);
typedef void(^errorCallback)(NSError *);

@interface SceneAdSdkBigWheelRequest : NSObject
+(void)requestWheelAdClick;
+(void)requestBigWheelDataSuccess:(successCallback)successCallback error:(errorCallback) errorCallback;
+(void)requestBigWheelLotterySuccess:(successCallback)successCallback error:(errorCallback) errorCallback;
+(void)requestExtraWithExtConfigId:(int)extConfigId Success:(successCallback)successCallback error:(errorCallback) errorCallback;
@end

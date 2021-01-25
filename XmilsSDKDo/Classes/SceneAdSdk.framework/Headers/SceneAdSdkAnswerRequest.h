//
//  SceneAdSdkAnswerRequest.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/25.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void(^successCallback)(id);
typedef void(^errorCallback)(NSError *);

@interface SceneAdSdkAnswerRequest : NSObject

//请求请求答题首页数据
+(void)requestAnswerDataSuccess:(successCallback)successCallback error:(errorCallback) errorCallback;
//请求领取额外奖励
+(void)requestExtRewardWithLevel:(NSInteger)extRewardLevel success:(successCallback)successCallback error:(errorCallback) errorCallback;
//额外奖励列表
+(void)requestExtRewardListSuccess:(successCallback)successCallback error:(errorCallback) errorCallback;
//请求翻倍接口
+(void)requestAnswerDoubleSuccess:(successCallback)successCallback error:(errorCallback) errorCallback;
//提交答案
+(void)requestSubmitAnswer:(NSString*)answer withId:(NSInteger)idiomSubjectId Success:(successCallback)successCallback error:(errorCallback) errorCallback;

@end



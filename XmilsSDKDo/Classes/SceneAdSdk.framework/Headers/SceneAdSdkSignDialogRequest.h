//
//  SceneAdSdkSignDialogRequest.h
//  wheel
//
//  Created by caizifeng on 2019/5/21.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void(^successCallback)(_Nullable id);
typedef void(^errorCallback)(NSError *_Nullable);
@interface SceneAdSdkSignDialogRequest : NSObject
+(void)requestSignInDoubleSuccess:(successCallback _Nullable)successCallback error:(errorCallback _Nullable) errorCallback;
+(void)requestSignVideoGetCoinSuccess:(successCallback)successCallback error:(errorCallback) errorCallback;
@end

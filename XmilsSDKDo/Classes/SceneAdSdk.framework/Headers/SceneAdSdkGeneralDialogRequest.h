//
//  SceneAdSdkGeneralDialogRequest.h
//  wheel
//
//  Created by caizifeng on 2019/5/21.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void(^successCallback)(id);
typedef void(^errorCallback)(NSError *);

@interface SceneAdSdkGeneralDialogRequest : NSObject

+(void)requestGeneralDoubleBusinessType:(int)businessType coinDetailId:(int)coinDetailId coinDetailType:(int)coinDetailType Success:(successCallback)successCallback error:(errorCallback) errorCallback;
+(void)requestShowDialog:(int)dialogType Success:(successCallback)successCallback error:(errorCallback) errorCallback;
+(void)requestThirdParty:(NSString *)requestJson Success:(successCallback)successCallback error:(errorCallback) errorCallback;
@end

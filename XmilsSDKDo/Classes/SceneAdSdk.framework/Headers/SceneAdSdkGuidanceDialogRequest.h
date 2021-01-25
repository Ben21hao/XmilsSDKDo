//
//  SceneAdSdkGuidanceDialogRequest.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/5.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>



typedef void(^successCallback)(id);
typedef void(^errorCallback)(NSError *);

@interface SceneAdSdkGuidanceDialogRequest : NSObject
+(void)requestAddCoinWithRuleId:(NSString *) RuleId reward:(int) reward Success:(successCallback)successCallback error:(errorCallback) errorCallback;
+(void)requestAdGuideHasShowWithRuleId:(NSString *) RuleId Success:(successCallback)successCallback error:(errorCallback) errorCallback;
@end



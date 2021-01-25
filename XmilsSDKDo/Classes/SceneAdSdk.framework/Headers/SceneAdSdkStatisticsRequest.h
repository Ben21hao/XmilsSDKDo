//
//  SceneAdSdkSignStaticRequest.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/5/22.
//  Copyright © 2019年 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdConfigModel.h"
#import "SceneAdSdkZKDataModel.h"

typedef void(^successCallback)(id);
typedef void(^errorCallback)(NSError *);

/**
 神策埋点类
 **/
@interface SceneAdSdkStatisticsRequest : NSObject

+(instancetype)shareInstance;
+(void)doStatisticsWithName:(NSString *)eventName values:(NSDictionary *)datas;
+(void)doClickStatisticsWithSaPage:(NSString *)saPage ckModule:(NSString *)ckModule contentId:(NSString *)contentId;
+(void)doSALaunchStatisticsWithSaPage:(NSString *)saPage from:(NSString *)type;
+(void)doSAHideStatisticsWithSaPage:(NSString *)saPage;
/**
* zkModel 只有直客广告能需要传
*/
+(void)adShowAndClickStaticUploadWithAdPlacement:(NSInteger)adPlacement adSource:(NSString *)adSource operation:(NSInteger)operation adSourceId:(NSString *)adSourceId adConfig:(SceneAdRuleConfig *)adConfig zkModel:(SceneAdSdkZKDataModel *)zkModel;

@end

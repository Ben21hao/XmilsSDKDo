//
//  NSDictionary+SceneAdSdkJson.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/20.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (SceneAdSdkJson)

// 字典转json字符串方法
-(NSString *)sceneAdSdk_convertToJsonString;
+(NSString *)sceneAdSdk_convertToJsonData:(NSDictionary *)dict;
-(NSString *)sceneAdSdk_jsonString;
+(NSDictionary *)sceneAdSdk_dictionaryWithJsonString:(NSString *)jsonString;

@end

NS_ASSUME_NONNULL_END

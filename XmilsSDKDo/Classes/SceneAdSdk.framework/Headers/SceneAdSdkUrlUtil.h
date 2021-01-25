//
//  SceneAdUrlUtil.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/15.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdSdk.h"

#define SceneAdSdkCashSigninUrl GET_PAGE_URL(@"/common?funid=2&appid=1");

NS_ASSUME_NONNULL_BEGIN


@interface SceneAdSdkUrlUtil : NSObject

// 将url的参数部分转化成字典
+ (NSDictionary *)paramsURL:(NSURL *)url;
//根据广告位id拿到链接配置
+ (NSString *)adConfigUrlWithPositionID:(NSString *)ID;

@end


NS_ASSUME_NONNULL_END

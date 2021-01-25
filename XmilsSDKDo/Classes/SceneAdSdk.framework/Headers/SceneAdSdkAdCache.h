//
//  SceneAdSdkAdCache.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/7/15.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SceneAdSdkLoader.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkAdCache : NSObject

/** 缓存的广告位置 */
@property (nonatomic, strong) NSMutableArray * positionArray;

/**
 获取一个广告对象，调用后缓存中会移除此对象
 */
- (SceneAdSdkLoader *)getAdCacheWithPosition:(NSString *)position withParams:(SceneAdSdkLoaderParams *)params;

/**
 根据广告位判断是否有可用的广告
 */
- (BOOL)isAvailableObjWithPosition:(NSString *)position;

/**
 检查超过45分钟的广告缓存，并重新请求广告缓存
 */
- (void)checkAndReloadAdCache;

/**
 请求广告数据并缓存
 */
- (void)requestAdData:(NSString *)position;

// 单例方法, 调此方法完成初始化
+(SceneAdSdkAdCache *)sharedInstance;
+(instancetype) alloc __attribute__((unavailable("call sharedInstance instead")));
+(instancetype) new __attribute__((unavailable("call sharedInstance instead")));
-(instancetype) copy __attribute__((unavailable("call sharedInstance instead")));
-(instancetype) mutableCopy __attribute__((unavailable("call sharedInstance instead")));

@end

NS_ASSUME_NONNULL_END

//
//  SceneAdSdkHTTPRequestManager.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/5/24.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkHTTPRequestManager : NSObject

+(void)POST:(NSString *)URLString
 parameters:(nullable id)parameters
   progress:(nullable void (^)(NSProgress *uploadProgress))progress
    success:(nullable void (^)(id _Nullable responseObject))success
    failure:(nullable void (^)(NSError *error))failure;


+(void)GET:(NSString *)URLString
parameters:(nullable id)parameters
  progress:(nullable void (^)(NSProgress *uploadProgress))progress
   success:(nullable void (^)(id _Nullable responseObject))success
   failure:(nullable void (^)(NSError *error))failure;


/**
 GET 请求

 @param URLString 全网址
 @param parameters 参数
 @param progress 进度
 @param success 成功回调
 @param failure 失败回调
 */
+(void)GETWithFullURL:(NSString *)URLString
           parameters:(nullable id)parameters
             progress:(nullable void (^)(NSProgress *uploadProgress))progress
              success:(nullable void (^)(id _Nullable responseObject))success
              failure:(nullable void (^)(NSError *error))failure;

/**
 POST 请求
 
 @param URLString 全网址
 @param parameters 参数
 @param progress 进度
 @param success 成功回调
 @param failure 失败回调
 */
+(void)POSTWithFullURL:(NSString *)URLString
           parameters:(nullable id)parameters
             progress:(nullable void (^)(NSProgress *uploadProgress))progress
              success:(nullable void (^)(id _Nullable responseObject))success
              failure:(nullable void (^)(NSError *error))failure;

//神策POST请求
+(void)POSTStatistics:(NSString *)URLString
           parameters:(id)parameters
             progress:(void (^)(NSProgress * _Nonnull))progress
              success:(void (^)(id _Nullable))success
              failure:(void (^)(NSError * _Nonnull))failure;
//神策GET请求
+(void)GETStatistics:(NSString *)URLString
          parameters:(id)parameters
            progress:(void (^)(NSProgress * _Nonnull))progress
             success:(void (^)(id _Nullable))success
             failure:(void (^)(NSError * _Nonnull))failure;



/// 向外部的GET请求
/// @param URLString 全链接
/// @param parameters 参数
/// @param progress 进度
/// @param success 成功回调
/// @param failure 失败回调
+ (void)GETOutsideFullURL:(NSString *)URLString
               parameters:(nullable id)parameters
                 progress:(nullable void (^)(NSProgress *progress))progress
                  success:(nullable void (^)(id _Nullable responseObject))success
                  failure:(nullable void (^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END

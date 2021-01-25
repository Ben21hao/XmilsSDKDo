//
//  SceneAdSdkLog.h
//  SceneAdSdk
//
//  Created by xmiles on 2020/12/31.
//  Copyright © 2020 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 需要对外输出的参数
#define SceneAdLog(format,...)  [SceneAdSdkLog sceneAd_log:[NSString stringWithFormat:format, ##__VA_ARGS__] lineNumber:__LINE__]

// 对SDK内部使用的log
#ifdef DEBUG // 开发

#define NSLog(format, ...) do {                                                                          \
fprintf(stderr, "<%s : %d> %s\n",                                           \
[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String],  \
__LINE__, __func__);                                                        \
(NSLog)((format), ##__VA_ARGS__);                                           \
fprintf(stderr, "-------\n");                                               \
} while (0)

#define NSLogRect(rect) NSLog(@"%s x:%.4f, y:%.4f, w:%.4f, h:%.4f", #rect, rect.origin.x, rect.origin.y, rect.size.width, rect.size.height)
#define NSLogSize(size) NSLog(@"%s w:%.4f, h:%.4f", #size, size.width, size.height)
#define NSLogPoint(point) NSLog(@"%s x:%.4f, y:%.4f", #point, point.x, point.y)

#else // 生产

#define NSLog(format, ...) ""

#endif

@interface SceneAdSdkLog : NSObject

// 设置日志输出状态
+ (void)setLogEnable:(BOOL)enable;

// 获取日志输出状态
+ (BOOL)getLogEnable;

+ (void)sceneAd_log:(NSString *)logString lineNumber:(int)lineNumber;


@end

NS_ASSUME_NONNULL_END

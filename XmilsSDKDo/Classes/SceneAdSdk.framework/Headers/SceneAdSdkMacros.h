//
//  BUDMacros.h
//  BUAdSDKDemo
//
//  Created by bytedance_yuanhuan on 2018/10/11.
//  Copyright © 2018年 bytedance. All rights reserved.
//

#ifndef BUDMacros_h
#define BUDMacros_h

#define SceneAdSdk_IS_IPHONE_X \
({BOOL isPhoneX = NO;\
if (@available(iOS 11.0, *)) {\
isPhoneX = [[UIApplication sharedApplication] delegate].window.safeAreaInsets.bottom > 0.0;\
}\
(isPhoneX);})

#define SceneAdSdk_IPHONE_X_TopMargin        (SceneAdSdk_IS_IPHONE_X? 44: 0)
#define SceneAdSdk_IPHONE_X_BottomMargin     (SceneAdSdk_IS_IPHONE_X? 34: 0)

#define SceneAdSdk_kStatusHeight [[UIApplication sharedApplication] statusBarFrame].size.height

#define SceneAdSdk_kScreenScale [UIScreen mainScreen].bounds.size.width / 375.0

#define XBScaleValue(value) value * [UIScreen mainScreen].bounds.size.width / 375.0

#define BUD_RGB(a,b,c) [UIColor colorWithRed:(a/255.0) green:(b/255.0) blue:(c/255.0) alpha:1]
/// iphone X、XR、XS、XS Max适配
#ifndef BUDMINScreenSide
#define BUDMINScreenSide                    MIN([UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height)
#endif

#define SceneAdSdk_NavigationBarHeight (SceneAdSdk_IS_IPHONE_X? 88: 64)      // 导航条高度

// 单例
#define KR_SINGLETON_DEF(_type_) + (_type_ *)sharedInstance;\
+(instancetype) alloc __attribute__((unavailable("call sharedInstance instead")));\
+(instancetype) new __attribute__((unavailable("call sharedInstance instead")));\
-(instancetype) copy __attribute__((unavailable("call sharedInstance instead")));\
-(instancetype) mutableCopy __attribute__((unavailable("call sharedInstance instead")));

#define KR_SINGLETON_IMP(_type_) + (_type_ *)sharedInstance{\
static _type_ *theSharedInstance = nil;\
static dispatch_once_t onceToken;\
dispatch_once(&onceToken, ^{\
theSharedInstance = [[super alloc] init];\
});\
return theSharedInstance;}\
// 字符串快速格式化
#define K_STR(FORMAT, ...) [NSString stringWithFormat:FORMAT, ##__VA_ARGS__]
// --- 尺寸适配 ---
#define K_IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define K_IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define K_IS_IPHONE_4_OR_LESS (K_IS_IPHONE && K_SCREEN_MAX_LENGTH < 568.0)
#define K_IS_IPHONE_5 (K_IS_IPHONE && K_SCREEN_MAX_LENGTH == 568.0)
#define K_IS_IPHONE_6 (K_IS_IPHONE && K_SCREEN_MAX_LENGTH == 667.0)
#define K_IS_IPHONE_6P (K_IS_IPHONE && K_SCREEN_MAX_LENGTH == 736.0)
#define K_IS_IPHONE_X (K_IS_IPHONE && K_SCREEN_MAX_LENGTH >= 812.0)

#define K_SCREEN_BOUNDS ([UIScreen mainScreen].bounds)
#define K_SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define K_SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)

#define K_SCREEN_SAFE_HEIGHT (([[UIScreen mainScreen] bounds].size.height) - K_SAFEAREA_BOTTOMHEIGHT)
#define K_SCREEN_MAX_LENGTH (MAX(K_SCREEN_WIDTH, K_SCREEN_HEIGHT))
#define K_SCREEN_MIN_LENGTH (MIN(K_SCREEN_WIDTH, K_SCREEN_HEIGHT))

#define K_STATUSBAR_HEIGHT          (K_IS_IPHONE_X?44.0:20.0)
#define K_NAVBAR_HEIGHT             ((K_IS_IPHONE_X?44.0:20.0)+44.0)

#define K_SAFEAREA_BOTTOMHEIGHT   ([UIScreen mainScreen].bounds.size.height>=812.0?34.0:0)
// 字体大小适配
#define K_SIZESCALE          (K_IS_IPHONE_5 ? 0.8 : 1)
#define K_FONTSIZE(value)    (value*K_SIZESCALE)
#define K_FONT(value)        [UIFont systemFontOfSize:value*K_SIZESCALE]
// 针对iPhone6为标准适配宽度
#define K_WIDTH(R) ((R)*(K_SCREEN_WIDTH/375.0))
// 针对iPhone6为标准适配高度
#define K_HEIGHT(R) (K_IS_IPHONE_X?R:((R)*(([[UIScreen mainScreen] bounds].size.height)/667.0)))
// ---- END ----
// 弱引用
#define K_WeakSelf(type)  __weak typeof(type) weak##type = type;
// 获取一段时间间隔
#define K_StartTime CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
#define K_EndTime  NSLog(@"Time: %f", CFAbsoluteTimeGetCurrent() - start)
// 发通知
#define K_NotiSend(name,dic) [[NSNotificationCenter defaultCenter] postNotificationName:name object:nil userInfo:dic]
// 移除通知
#define K_NotiRemove(_name) [[NSNotificationCenter defaultCenter] removeObserver:self name:_name object:nil]

#endif /* BUDMacros_h */

//
//Created by ESJsonFormatForMac on 19/06/18.
//

#import <Foundation/Foundation.h>

@class Adinteractruledto;
@interface SceneAdSdkHuDongAdModel : NSObject

/**
 引导奖励
 */
@property (nonatomic, copy) NSString *guideReward;

/**
 是否显示
 */
@property (nonatomic, assign) NSInteger isShow;

/**
 广告数据
 */
@property (nonatomic, strong) Adinteractruledto *adInteractRuleDto;

@end

@interface Adinteractruledto : NSObject

/**
 图片
 */
@property (nonatomic, copy) NSString *image;

/**
 跳转协议
 */
@property (nonatomic, copy) NSString *jumpProtocol;

/**
 标签
 */
@property (nonatomic, copy) NSString *label;

@end


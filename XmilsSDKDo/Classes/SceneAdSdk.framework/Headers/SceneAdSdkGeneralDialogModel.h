//
//  SceneAdSdkGeneralDialogModel.h
//  wheel
//
//  Created by caizifeng on 2019/5/20.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SceneAdSdkGeneralDialogModel : NSObject
@property (nonatomic , copy)NSString * startFrom;
@property (nonatomic , copy)NSString * fromTitle;
@property (nonatomic , assign)int closeType;
@property (nonatomic , assign)int newUser;
@property (nonatomic , assign)int isShowDoubleBtn;
@property (nonatomic , assign)int isShowMoreBtn;
@property (nonatomic , copy)NSString *moreBtnText;

/** 奖励提示  2019.08.08 需求*/
@property (nonatomic, copy) NSString * rewardTip;
@property (nonatomic, copy) NSString * tips;

/** 翻倍类型 0=默认翻倍接口 1=小游戏专用翻倍接口 2019.09.19*/
@property (nonatomic, assign) int doubleStyle;

/**
 更多按钮的跳转方式
 -1是直接关闭，0是小程序，1是弹插屏广告，2是大转盘，3是点击查看响应广告[20190626需求]
 */
@property (nonatomic , assign)int moreBtnJumpType;
@property (nonatomic , assign)int isShowAd;
@property (nonatomic , assign)int reward;
@property (nonatomic , assign)int coinDetailId;
@property (nonatomic , copy)NSString *position;
@property (nonatomic , copy)NSString *flowPosition;
@property (nonatomic , assign)int businessType;
@property (nonatomic , assign)int coinDetailType;
@property (nonatomic , copy)NSString *multiple;
@property (nonatomic , copy)NSString * closeDialogPosition;
@property (nonatomic , copy)NSString * coinFrom;
@property (nonatomic , assign)int hasHideHeadImage;
@property (nonatomic , copy)NSString *hasShowTitleImage;
@property (nonatomic , copy)NSString *signDay;
/** 倒计时秒数 */
@property (nonatomic, assign) long countDownSec;

/*第三方翻倍*/
@property (nonatomic , copy) NSString * rewardUnit;                //奖励单位（除非特殊，默认不传递）
@property (nonatomic , copy) NSString * requestDoubleJsonString;   //第三方翻倍所需信息
@property (nonatomic , copy) NSString * thirdPartyDoubleBefore;    //第三方翻倍前的值 配置后不读取reward
@property (nonatomic , copy) NSString * thirdParthDoubleAfter;     //第三方翻倍后的值 配置后不读取reward

/**
 弹窗样式
 默认1：原来的， 2：ui修改后的
 */
@property (nonatomic, assign) int version;

/** 是否为答题弹窗 */
@property (nonatomic, assign) BOOL isAnswerPop;
/** 答错结果 */
@property (nonatomic, assign) BOOL answerHasSuccess;

-(NSString *)multiple;

@end

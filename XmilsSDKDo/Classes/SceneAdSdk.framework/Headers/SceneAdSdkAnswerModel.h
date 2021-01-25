//
//  SceneAdSdkAnswerModel.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/25.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MJExtension.h>
#import "SceneAdSdkRewardExcitationModel.h"

@interface Idiom : NSObject

@property (nonatomic , copy) NSString* id;
@property (nonatomic , assign) int direction;   // 1水平 2s垂直
@property (nonatomic , assign) int position;    //重叠位置
@property (nonatomic , strong) NSArray *word;   //成语字

@end

@interface IdiomSubject : NSObject

@property (nonatomic , assign) NSInteger idiomSubjectId;                  //题目id
@property (nonatomic , strong) NSArray<Idiom *> *idioms;                  //题目
@property (nonatomic , strong) NSArray *options;                          //选项
@property (nonatomic , copy)   NSString *keyWork;                         //答案

@end

@interface  UserAnswerInfo : NSObject
@property (nonatomic , assign) NSInteger dayAnswerRightTimes;      //用户今日答对题次数 ,
@property (nonatomic , assign) NSInteger answerRightTimes;         //用户答对题总次数
@property (nonatomic , assign) NSInteger answerTimes;              //用户答题总次数
@property (nonatomic , assign) NSInteger dayAnswerTimes;           //用户今日答题次数
@property (nonatomic , assign) NSInteger daySurplusAnswerTimes;    //用户今日答题剩余次数

@end

@interface SceneAdSdkAnswerModel : NSObject

@property (nonatomic , strong) IdiomSubject *idiomSubject;
@property (nonatomic , strong) UserAnswerInfo *userAnswerInfo;             //包含一些次数
@property (nonatomic , assign) BOOL haveUnreceivedExtReward;               //是否有未领取的额外奖励
@property (nonatomic , assign) NSInteger nextExtRewardSurplusAnswerTimes; //距离下一题目还剩下多少题目
@property (nonatomic, strong) SceneAdSdkRewardExcitationModel *excitation;  // 激励模块

@end




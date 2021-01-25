//
//  WheelView.h
//  wheel
//
//  Created by Sylar on 2019/5/12.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkBigWheelLotteryModel.h"

@protocol BigWheelDelegate
- (void)animationDidStop:(SceneAdSdkBigWheelLotteryModel *)lotteryModel;
@end

@interface WheelView : UIView
//请求抽奖返回数据
@property (nonatomic,strong) SceneAdSdkBigWheelLotteryModel *lotteryModel;
@property (nonatomic,weak) id<BigWheelDelegate> delegate;
- (instancetype)initWithFrame:(CGRect)frame delegate:(id<BigWheelDelegate>)deleagte;
-(void)setBigWheelData:(NSArray *)configList ruleType:(NSInteger)ruleType;
-(void)startWheelAnimation;
@property(nonatomic,strong)CABasicAnimation *bigWheelAnim;
@property(nonatomic,strong)UIImageView *wheelImageView;
@end



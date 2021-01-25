//
//  SceneAdSdkCountDownButton.h
//  SceneAdSDKDemo
//
//  Created by xmiles on 2019/5/17.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef void(^SceneAdSdkCountDownButtonEndBlock)(void);


@interface SceneAdSdkCountDownButton : UIButton

@property (nonatomic, strong) dispatch_source_t decreaseTimer;
@property (nonatomic, copy) SceneAdSdkCountDownButtonEndBlock countDownButtonEndBlock;
-(void)startTimerWithLeftTime:(NSInteger)leftTime;

@end



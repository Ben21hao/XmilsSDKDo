//
//  VGScratchCardAdShowManager.h
//  VipGift
//
//  Created by xmiles on 2019/7/11.
//  Copyright © 2019 小迈科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SceneAdSdkScratchCardAdShowManager;

typedef void(^SceneAdSdkScratchCardAdShowManager_LoadAdViewDidFinish_Block)(SceneAdSdkScratchCardAdShowManager *manager, CGFloat width, CGFloat height);


@interface SceneAdSdkScratchCardAdShowManager : NSObject

/**
    广告view渲染完
 */
@property (nonatomic, copy) SceneAdSdkScratchCardAdShowManager_LoadAdViewDidFinish_Block loadAdViewDidFinishBlock;

/**
 加载广告
 @param position 广告位
 @param viewWidth 广告view的宽度
 */
-(void)loadAdWithPosition:(NSInteger)position viewWidth:(CGFloat)viewWidth;

/**
    广告的容器view
 */
@property (nonatomic, strong) UIView *contentView;

/**
    广告的容器控制器
 */
@property (nonatomic, strong) UIViewController *adViewController;

/**
    隐藏广告view
 */
-(void)hideView;

/**
 设置广告view的坐标

 @param x 原点x
 @param y 原点y
 */
-(void)setupAdViewWithOriginX:(CGFloat)x originY:(CGFloat)y;


//**  以下是广告加载的生命周期   **//
@property (nonatomic, copy) void(^adDidLoadBlock)(SceneAdSdkScratchCardAdShowManager *mananger);
@property (nonatomic, copy) void(^adDidFailBlock)(SceneAdSdkScratchCardAdShowManager *mananger);
@property (nonatomic, copy) void(^adDidClickBlock)(SceneAdSdkScratchCardAdShowManager *mananger);
@property (nonatomic, copy) void(^adDidCloseBlock)(SceneAdSdkScratchCardAdShowManager *mananger);
/**
 7 - 视频播放完成
 */
@property (nonatomic, copy) void(^adVideoDidPlayBlock)(SceneAdSdkScratchCardAdShowManager *mananger);
/**
 8 - 激励完成
 */
@property (nonatomic, copy) void(^adRewardFinshBlock)(SceneAdSdkScratchCardAdShowManager *mananger, BOOL rewardResult);

@end



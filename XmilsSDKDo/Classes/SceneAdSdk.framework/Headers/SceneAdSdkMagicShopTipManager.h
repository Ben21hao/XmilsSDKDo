//
//  SceneAdSdkMagicShopTipManager.h
//  VipGift
//
//  Created by xmiles on 2019/7/15.
//  Copyright © 2019 小迈科技. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, VGMagicShopTipType) {
    VGMagicShopTipType_SHOW_ENERGY_COUNTDOWN_TIP = 1,
    VGMagicShopTipType_HIDE_ENERGY_COUNTDOWN_TIP = 2,
    VGMagicShopTipType_SHOW_ENERGY_COUNTDOWN_CLOSE_TIP = 3,
    VGMagicShopTipType_HIDE_ENERGY_COUNTDOWN_CLOSE_TIP = 4
};


NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkMagicShopTipManager : NSObject


+(void)showWithTipType:(VGMagicShopTipType)tipType;


@end

NS_ASSUME_NONNULL_END

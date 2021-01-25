//
//  SceneAdSdkZKTouchView.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/10/12.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkZKDataModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkZKTouchView : UIView

/** model */
@property (nonatomic, strong) SceneAdSdkZKDataModel * model;

/**
 *  点击回调
 */
@property (nonatomic, copy) void (^click_block)(SceneAdSdkZKDataModel *model);

/**
自动撑满父视图
*/
- (void)autoAdjustSize;

@end

NS_ASSUME_NONNULL_END

//
//  UIViewController+VGBackButtonHandler.h
//  VipGift
//
//  Created by merrill on 2017/11/22.
//  Copyright © 2017年 小迈科技. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol SceneAdSdkBackButtonHandlerProtocol <NSObject>
@optional
// Override this method in UIViewController derived class to handle 'Back' button click
- (BOOL)navigationShouldPopOnBackButton;
@end

@interface UIViewController (SceneAdSdkBackButtonHandler)<SceneAdSdkBackButtonHandlerProtocol>

@end

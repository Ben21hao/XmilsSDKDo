//
//  SceneAdSdkOpenGiftAnimation.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/5/26.
//  Copyright © 2019年 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^Completion)(void);
@interface SceneAdSdkOpenGiftAnimation : UIView
+(void)showWithCompletion:(Completion)completion;
@end

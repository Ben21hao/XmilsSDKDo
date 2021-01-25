//
//  SceneAdSdkNoneAdView.h
//  wheel
//
//  Created by caizifeng on 2019/5/19.
//  Copyright © 2019年 Sylar. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol noneAdDialog
-(void)noneAdDialogClose;
@end
@interface SceneAdSdkNoneAdView : UIView
+(void)showWithdelegate:(id<noneAdDialog>)delegate;
+(void)hide;
@end

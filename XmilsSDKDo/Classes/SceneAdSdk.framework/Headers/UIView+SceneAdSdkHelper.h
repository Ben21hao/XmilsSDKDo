//
//  UIView+Helper.h
//  ChineseStrokesOrder
//
//  Created by Pat on 14/12/3.
//  Copyright (c) 2014年 Pat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface UIView (SceneAdSdkHelper)

+ (UIViewAnimationOptions)animationOptionsForCurve:(UIViewAnimationCurve)curve;

- (CGFloat)width;
- (CGFloat)height;
- (CGFloat)top;
- (CGFloat)left;
- (CGFloat)bottom;
- (CGFloat)right;
- (CGFloat)centerX;
- (CGFloat)centerY;

- (void)setTop:(CGFloat)top;
- (void)setBottom:(CGFloat)bottom;
- (void)setLeft:(CGFloat)left;
- (void)setRight:(CGFloat)right;
- (void)setWidth:(CGFloat)width;
- (void)setHeight:(CGFloat)height;
- (void)setCenterX:(CGFloat)centerX;
- (void)setCenterY:(CGFloat)centerY;

+ (instancetype)instantceWithNibName:(NSString *)nibName;



- (void)roundingCorners:(UIRectCorner)corners cornerRadius:(CGFloat)cornerRadius;
- (void)removeAllSubviews;
- (void)sceneadAdSdk_setFlowAdHeight;

@end

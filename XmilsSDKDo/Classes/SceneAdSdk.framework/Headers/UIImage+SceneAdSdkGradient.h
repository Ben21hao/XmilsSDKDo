//
//  UIImage+Gradient.h
//  testLayer
//
//  Created by tb on 17/3/17.
//  Copyright © 2017年 com.tb. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, GradientType) {
    GradientFromTopToBottom = 1,            //从上到下
    GradientFromLeftToRight,                //从做到右
    GradientFromLeftTopToRightBottom,       //从上到下
    GradientFromLeftBottomToRightTop        //从上到下
};

typedef enum  {
    topToBottom = 0,     //从上到小
    leftToRight = 1,     //从左到右
    upleftTolowRight = 2,//左上到右下
    uprightTolowLeft = 3,//右上到左下
}XMGradientType;

@interface UIImage (SceneAdSdkGradient)

/**
 *  根据给定的颜色，生成渐变色的图片
 *  @param imageSize        要生成的图片的大小
 *  @param colorArr         渐变颜色的数组
 *  @param percents         渐变颜色的占比数组
 *  @param gradientType     渐变色的类型
 */
- (UIImage *)sceneAdSdk_createImageWithSize:(CGSize)imageSize gradientColors:(NSArray *)colorArr percentage:(NSArray *)percents gradientType:(GradientType)gradientType;

/**
 将颜色转成图片
 */
+ (UIImage*)SceneAdSdk_createImageWithColor:(UIColor*)color;

/**
 *获取图片渐变图片
 */
+(UIImage *)ImageFromColors:(NSArray*)colors ByGradientType:(XMGradientType)gradientType size:(CGSize)size;

/**
 *获取边框图片
 */
+ (UIImage *)Image9BorderFromSize:(CGSize)size color:(UIColor *)color width:(CGFloat)width cornerRadius:(CGFloat)corner;

/**
 *自动生成最小可以拉伸的.9边框图片
 */
+ (UIImage *)Image9BorderFromColor:(UIColor *)color width:(CGFloat)width cornerRadius:(CGFloat)corner;

/**
 *根据传递Image和伸缩区域 获取.9图片Image
 */
+(UIImage *)Image9FromImage:(UIImage *)image ScaleArea:(UIEdgeInsets)area;

/**
 *根据传递名称和伸缩区域 获取.9图片Image
 */
+(UIImage *)Image9FromImageName:(NSString *)name ScaleArea:(UIEdgeInsets)area;

/**
 *根据传递图片 获取以中心点像素伸缩的.9图片Image
 */
+(UIImage *)Image9ScaleCenterFromImage:(UIImage *)image;

@end

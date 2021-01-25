//
//  UIImage+Helper.h
//  VipGift
//
//  Created by merrill on 2017/11/30.
//  Copyright © 2017年 小迈科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SceneAdSdkHelper)

//- (NSString *)toBase64String;
//
//- (NSData *)toBaseData;
//
//- (UIImage *)scaleToSize:(CGSize)size;

+ (NSArray <UIImage *>*)SceneAdSdk_gifImageToImageListWithGifName:(NSString *)gifName;
+ (UIImage *)SceneAdSdk_imageNamed:(NSString *)name;

@end

//
//  TipShowModel.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/8/28.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TipShowModel : NSObject
// 对齐方式
typedef NS_ENUM(NSUInteger, TIP_ALIGN_TYPE) {
    TIPALIGNTYPE_ALIGN_LEFT,
    TIPALIGNTYPE_ALIGN_RIGHT,
    TIPALIGNTYPE_ALIGN_TOP,
    TIPALIGNTYPE_ALIGN_BOTTOM,
    TIPALIGNTYPE_CENTER
};

/** width */
@property (nonatomic, assign) CGFloat width;
/** height */
@property (nonatomic, assign) CGFloat height;
/** offsetX */
@property (nonatomic, assign) CGFloat offsetX;
/** offsetY */
@property (nonatomic, assign) CGFloat offsetY;
/** gravityX */
@property (nonatomic, assign) TIP_ALIGN_TYPE gravityX;
/** gravityY */
@property (nonatomic, assign) TIP_ALIGN_TYPE gravityY;
/** url */
@property (nonatomic, copy) NSString * url;

@end

NS_ASSUME_NONNULL_END

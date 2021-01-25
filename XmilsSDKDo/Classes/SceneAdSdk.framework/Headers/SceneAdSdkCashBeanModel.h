//
//  SceneAdSdkCashBeanModel.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/9/2.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkCashBeanModel : NSObject

@property (nonatomic , copy) NSString *title;

/**
 弹窗样式
 0=红色 1=黄色
 */
@property (nonatomic, assign) NSInteger style;

@end

NS_ASSUME_NONNULL_END

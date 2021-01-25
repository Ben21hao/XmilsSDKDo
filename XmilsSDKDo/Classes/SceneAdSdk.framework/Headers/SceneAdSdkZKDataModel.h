//
//  SceneAdSdkZKDataModel.h
//  SceneAdSdk
//
//  Created by xmiles on 2019/10/12.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "SceneAdConfigModel.h"

NS_ASSUME_NONNULL_BEGIN
@class Adplandto,Resourcedto,Materialdto;
@interface SceneAdSdkZKDataModel : NSObject
/**
 当前加载的广告配置
 */
@property (nonatomic, strong) SceneAdRuleConfig *adRuleConfig;

@property (nonatomic, strong) Adplandto *adPlanDto;

/**
 *  点击回调
 */
@property (nonatomic, copy) void (^click_block)(SceneAdSdkZKDataModel *model);

/**
 *  点击广告前执行事件
 */
@property (nonatomic, copy) void (^click_before_task)(void);

/**
注册点击视图
*/
- (void)registerClickView:(NSArray<UIView *> *)views;

@end

@interface Adplandto : NSObject

@property (nonatomic, strong) Materialdto *materialDto;

@property (nonatomic, assign) BOOL showDownloadTip;

@property (nonatomic, strong) Resourcedto *resourceDto;

@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, assign) BOOL download;

@property (nonatomic, assign) NSInteger awardTime;

@property (nonatomic, copy) NSString *prdId;

@property (nonatomic, assign) NSInteger resourceId;

@property (nonatomic, assign) NSInteger libraryId;

@property (nonatomic, assign) NSInteger skipTime;

@property (nonatomic, copy) NSString *name;

@end

@interface Resourcedto : NSObject

@property (nonatomic, copy) NSString *launch;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, assign) NSInteger adType;

@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, copy) NSString *adSourceId;

@property (nonatomic, copy) NSString *prdId;

@property (nonatomic, copy) NSString *packageName;

@property (nonatomic, copy) NSString *adPlatform;

@property (nonatomic, copy) NSString *categoryName;

@end

@interface Materialdto : NSObject

@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, copy) NSString *label;

@property (nonatomic, copy) NSString *detail;

@property (nonatomic, copy) NSString *image;

@property (nonatomic, copy) NSString *icons;

@property (nonatomic, copy) NSString *button;

@end

NS_ASSUME_NONNULL_END

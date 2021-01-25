//
//  SceneAdSdkGuidanceDialog.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/5.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkGuidanceDialog : UIView
+(void)showWithRuleId:(NSString *)ruleId;
+(void)hide;
@end

NS_ASSUME_NONNULL_END

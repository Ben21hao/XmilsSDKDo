//
//  NSBundle+SceneAdSdkNSBundle.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/10.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (SceneAdSdkNSBundle)
+(id)sceneadAdSdk_loadNibNamed:(NSString *)name;
+(NSBundle *)sceneadAdSdk_bundle;
@end

NS_ASSUME_NONNULL_END

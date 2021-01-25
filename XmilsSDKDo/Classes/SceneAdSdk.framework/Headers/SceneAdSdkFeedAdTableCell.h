//
//  SceneAdSdkFeedAdTableCell.h
//  SceneAdSdkDev
//
//  Created by dengsir on 2019/8/4.
//  Copyright © 2019 dengsir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SceneAdSdk/SceneAdSdkAdDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface SceneAdSdkFeedAdTableCell : UITableViewCell

/** model */
@property (nonatomic, strong) SceneAdSdkAdDataModel * model;

@end

NS_ASSUME_NONNULL_END

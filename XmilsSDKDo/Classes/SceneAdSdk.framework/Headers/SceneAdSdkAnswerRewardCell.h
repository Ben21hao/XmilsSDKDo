//
//  SceneAdSdkAnswerRewardCell.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/6/26.
//  Copyright © 2019 gaven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SceneAdSdkExtRewardListModel.h"
@protocol SceneAdSdkAnswerRewardTableViewReload
-(void)reloadDialogData;
@end

@interface SceneAdSdkAnswerRewardCell : UITableViewCell
@property (nonatomic , weak) id delegate;
-(void)initCellWithData:(UserExtReward *)data userAnswerRightTimes:(NSInteger)rightTimes withDelegate:(id<SceneAdSdkAnswerRewardTableViewReload>)delegate;
@end



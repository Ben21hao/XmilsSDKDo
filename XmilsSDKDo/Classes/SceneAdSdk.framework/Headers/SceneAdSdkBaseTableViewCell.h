//
//  VGBaseTableViewCell.h
//  VipGift
//
//  Created by merrill on 2017/11/10.
//  Copyright © 2017年 小迈科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SceneAdSdkBaseTableViewCell : UITableViewCell

+ (NSString *)cellIdentifier;

+ (instancetype)cellInTableView:(UITableView *)tableView
                   forIndexPath:(NSIndexPath *)indexPath;

+ (CGFloat)cellHeight:(id)data;

- (void)setUpSubviews;

- (void)updateCell:(id)data;

@end

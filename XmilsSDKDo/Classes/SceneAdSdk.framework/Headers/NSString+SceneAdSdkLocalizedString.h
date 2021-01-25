//
//  NSString+LocalizedString.h
//  BUDemo
//
//  Created by 李盛 on 2019/1/14.
//  Copyright © 2019 bytedance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern NSString * _Nullable const Testads;
extern NSString * _Nullable const AdsTitle;
extern NSString * _Nullable const Width;
extern NSString * _Nullable const Height;
extern NSString * _Nullable const PermissionDenied;
extern NSString * _Nullable const Coordinate;
extern NSString * _Nullable const LocationFailure;
extern NSString * _Nullable const Unknown;
extern NSString * _Nullable const DrawTitle;
extern NSString * _Nullable const DrawDescription;
extern NSString * _Nullable const TestDescription;
extern NSString * _Nullable const Download;
extern NSString * _Nullable const LoadCollectionView;
extern NSString * _Nullable const LoadView;
extern NSString * _Nullable const CustomBtn;
extern NSString * _Nullable const NativeInterstitial;
extern NSString * _Nullable const ShowBanner;
extern NSString * _Nullable const ShowInterstitial;
extern NSString * _Nullable const ShowScrollBanner;
extern NSString * _Nullable const Splash;
extern NSString * _Nullable const CustomCloseBtn;
extern NSString * _Nullable const Skip;
extern NSString * _Nullable const ShowFullScreenVideo;
extern NSString * _Nullable const ShowRewardVideo;
extern NSString * _Nullable const LocationOn;
extern NSString * _Nullable const GetIDFA;
extern NSString * _Nullable const ClickDownload;
extern NSString * _Nullable const Call;
extern NSString * _Nullable const ExternalLink;
extern NSString * _Nullable const InternalLink;
extern NSString * _Nullable const NoClick;
extern NSString * _Nullable const CustomClick;
extern NSString * _Nullable const Detail;
extern NSString * _Nullable const DownloadLinks;
extern NSString * _Nullable const URLLinks;

NS_ASSUME_NONNULL_BEGIN

@interface NSString (SceneAdSdkLocalizedString)

+(NSString *)localizedStringForKey:(NSString *)key;
+(float)heightForString:(NSString *)value fontSize:(float)fontSize andWidth:(float)width;
+(float)widthForString:(NSString *)value fontSize:(float)fontSize andHeight:(float)height;
@end

NS_ASSUME_NONNULL_END

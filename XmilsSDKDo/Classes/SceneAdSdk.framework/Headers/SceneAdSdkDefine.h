//
//  SceneAdSdkDefine.h
//  SceneAdSdk
//
//  Created by caizifeng on 2019/5/25.
//  Copyright © 2019年 gaven. All rights reserved.
//

#ifndef SceneAdSdkDefine_h
#define SceneAdSdkDefine_h

#define HOST [SceneAdSdkManager shareManager].params.isDebug ? @"https://test.ibestfanli.com" : @"https://ibestfanli.com"

// 部分服务迁移到新服务器
#define NEWHOST [SceneAdSdkManager shareManager].params.isDebug ? @"http://test.ibestfanli.com" : @"http://commerce.ibestfanli.com"

#define SERVER_API  @"scenead_core_service"
#define SERVER_PAGE @"scenead_frontend_service"
#define SERVER_NEWS @"scenead_news_service"
#define SERVER_CONFIG @"scenead_config_service"
#define SERVER_STATISTICS  @"scenead_shence_service"
#define SERVICE_ACTIVITY  @"scenead_activity_service"
#define SERVICE_ACCOUNT @"commerce_account_service" //账号服务

//替换单位
#define REPLACE_UNIT(str)  [str stringByReplacingOccurrencesOfString:@"REWARD_UNIT" withString:[SceneAdSdkManager shareManager].params.rewardUnit]
#define GET_API_URL(url)   [NSString stringWithFormat:@"%@/%@%@",HOST,SERVER_API,url]
#define GET_PAGE_URL(url)  [NSString stringWithFormat:@"%@/%@%@",HOST,SERVER_PAGE,url]
#define GET_NEWS_URL(url)  [NSString stringWithFormat:@"%@/%@%@",HOST,SERVER_NEWS,url]
#define GET_CONFIG_URL(url)  [NSString stringWithFormat:@"%@/%@%@",HOST,SERVER_CONFIG,url]
#define GET_STATISTICS_URL(url) [NSString stringWithFormat:@"%@/%@%@",HOST,SERVER_STATISTICS,url]
#define GET_ACTIVITY_URL(url) [NSString stringWithFormat:@"%@/%@%@",HOST,SERVICE_ACTIVITY,url]
#define GET_ACCOUNT_URL(url) [NSString stringWithFormat:@"%@/%@%@",NEWHOST,SERVICE_ACCOUNT,url]

#define SCENE_SDK_VERSION @"1.3.8"
#define SCENE_SDK_VERSIONCODE @88

#endif /* SceneAdSdkDefine_h */
